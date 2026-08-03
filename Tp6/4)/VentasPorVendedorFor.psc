Algoritmo VentasPorVendedorFor
	Total <- 0
	VMa <- 0
	VMe = 0
	OfeMa = 0
	OfeMe = 0
	C <- 0
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Escribir 'Vendedor ', i, ': '
		Leer Ven
		Total <- Total+Ven
		Si i==1 Entonces
			VMa <- Ven
			OfeMa <- i
			VMe <- Ven
			OfeMe <- i
		SiNo
			Si Ven>VMa Entonces
				VMa <- Ven
				OfeMa <- i
			SiNo
				Si Ven<VMe Entonces
					VMe <- Ven
					OfeMe <- i
				FinSi
			FinSi
		FinSi
		Si Ven>300000 Entonces
			C <- C+1
		FinSi
	FinPara
	Escribir ' '
	Escribir 'Los 6 vendedores vendieron un total de $', Total
	Escribir 'El vendedor que más vendió fue el vendedor ', OfeMa
	Escribir 'El vendedor que menos vendió fue el vendedor ', OfeMe
	Escribir C, ' Vendedores superaron los $300.000'
FinAlgoritmo
