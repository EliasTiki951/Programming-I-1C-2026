Algoritmo VentasDeVendedoresPreParcial
	Dimensionar Ven(15)
	Dimensionar Mon(15)
	MOMA <- 0
	MOME <- 0
	Prom <- 0
	Total <- 0
	CP <- 0
	CM <- 0
	Para i<-1 Hasta 15 Con Paso 1 Hacer
		Escribir i, '. Ingrese el Nombre del Vendedor: '
		Leer Ven[i]
		Escribir 'Ingrese el Monto Vendido: '
		Leer Mon[i]
		Total <- Total+Mon[i]
		Escribir ' '
		Si i==1 Entonces
			MOMA <- Mon[i]
			MOME <- Mon[i]
			VEMA <- Ven[i]
			VEME <- Ven[i]
		SiNo
			Si Mon[i]>MOMA Entonces
				MOMA <- Mon[i]
				VEMA <- Ven[i]
			SiNo
				Si Mon[i]<MOME Entonces
					MOME <- Mon[i]
					VEME <- Ven[i]
				FinSi
			FinSi
		FinSi
	FinPara
	Prom <- Total/15
	Para i<-1 Hasta 15 Con Paso 1 Hacer
		Escribir i, '- Vendedor: ', Ven[i], ', Monto Vendido: ', Mon[i]
		Si Mon[i]>Prom Entonces
			CP <- CP+1
		FinSi
		Si Mon[i]<500000 Entonces
			CM <- CM+1
		FinSi
	FinPara
	Escribir ' '
	Escribir VEMA, ' tiene la mayor venta con $', MOMA
	Escribir VEME, ' tiene la menor venta con $', MOME
	Escribir 'El promedio de las Ventas es de ', Prom
	Escribir CP, ' vendedores superaron el Promedio de la Venta Total.'
	Escribir CM, ' vendedores vendieron menos de $500.000'
	Escribir 'El Total facturado por la Empresa es de $', Total
FinAlgoritmo
