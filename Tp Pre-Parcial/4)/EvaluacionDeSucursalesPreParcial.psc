Algoritmo EvaluacionDeSucursalesPreParcial
	Dimensionar Sucu[10]
	Dimensionar Ing(10)
	MAI <- 0
	MEI <- 0
	Total <- 0
	Prom <- 0
	CP <- 0
	C1 <- 0
	PORC <- 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese el nombre de la Sucursal ', i, ': '
		Leer Sucu[i]
		Escribir 'Ingreso Mensual: '
		Leer Ing[i]
		Total <- Total+Ing[i]
		Escribir ' '
		Si i==1 Entonces
			SMA <- Sucu[i]
			MAI <- Ing[i]
			SME <- Sucu[i]
			MEI <- Ing[i]
		SiNo
			Si Ing[i]>MAI Entonces
				SMA <- Sucu[i]
				MAI <- Ing[i]
			SiNo
				Si Ing[i]<MEI Entonces
					SME <- Sucu[i]
					MEI <- Ing[i]
				FinSi
			FinSi
		FinSi
	FinPara
	Prom <- Total/10
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Si Ing[i]>Prom Entonces
			CP <- CP+1
		FinSi
		Si Ing[i]>1000000 Entonces
			C1 <- C1+1
		FinSi
	FinPara
	PORC <- (100*C1)/10
	Escribir 'La Sucursal ', SMA, ' tiene el Mayor ingreso con $', MAI
	Escribir 'La Sucursal ', SME, ' tiene el Menor ingreso con $', MEI
	Escribir 'El Total Recaudado es de $', Total
	Escribir 'El Promedio de ingresos es de ', Prom
	Escribir 'Las Sucursales que superan el $1.000.000 es del %', PORC
	Escribir ' '
	Escribir 'Las Sucursales que tienen ingresos menores a $2.000.000 son: '
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Si Ing[i]<2000000 Entonces
			Escribir '-', Sucu[i]
		FinSi
	FinPara
FinAlgoritmo
