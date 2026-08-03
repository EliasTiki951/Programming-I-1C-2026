Algoritmo RegistroDeComprasDeClientesPreParcial
	Dimensionar Cli(25)
	Dimensionar Mon(25)
	Total <- 0
	Prom <- 0
	C1 <- 0
	CP <- 0
	Para i<-1 Hasta 25 Con Paso 1 Hacer
		Escribir i, '. Ingrese el Nombre del Cliente: '
		Leer Cli[i]
		Escribir 'Monto Gastado: '
		Leer Mon[i]
		Escribir ' '
		Total <- Total+Mon[i]
		Si i==1 Entonces
			CMAG <- Cli[i]
			GMAX <- Mon[i]
			CMEG <- Cli[i]
			GMIN <- Mon[i]
		SiNo
			Si Mon[i]>GMAX Entonces
				GMAX <- Mon[i]
				CMAG <- Cli[i]
			SiNo
				Si Mon[i]<GMIN Entonces
					GMIN <- Mon[i]
					CMEG <- Cli[i]
				FinSi
			FinSi
		FinSi
	FinPara
	Prom <- Total/25
	Para i<-1 Hasta 25 Con Paso 1 Hacer
		Si Mon[i]>100000 Entonces
			C1 <- C1+1
		FinSi
		Si Mon[i]<Prom Entonces
			CP <- CP+1
		FinSi
	FinPara
	Escribir CMAG, ' es el cliente que más gastó con $', GMAX
	Escribir CMEG, ' es el cliente que menos gastó con $', GMIN
	Escribir 'El gasto promedio de todos los clientes es de ', Prom
	Escribir C1, ' Clientes gastaron más de $100.000'
	Escribir CP, ' Clientes gastaron menos que el promedio.'
	Escribir 'El Total Recaudado es de $', Total
	Escribir ' '
	Escribir 'Los Clientes que pueden recibir una Promoción VIP son: '
	Para i<-1 Hasta 25 Con Paso 1 Hacer
		Si Mon[i]>Prom Y Mon[i]>150000 Entonces
			Escribir '- ', Cli[i]
		FinSi
	FinPara
FinAlgoritmo
