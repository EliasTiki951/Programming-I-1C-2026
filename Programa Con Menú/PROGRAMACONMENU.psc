Algoritmo PROGRAMACONMENU
	Escribir '1. Carggar '
	Escribir '2. ihwxi'
	Escribir '3. js'
	Leer Opc
	Según Opc Hacer
		1:
			C <- 0
			CoA <- 0
			CoB <- 0
			CoC <- 0
			T <- 0
			TA <- 0
			TB <- 0
			TC <- 0
			PromT <- 0
			Escribir 'Precio del producto: '
			Leer Pre
			Mientras Pre>0 Hacer
				T <- T+Pre
				C <- C+1
				Si Pre<10000 Entonces
					CoA <- CoA+1
					TA <- TA+Pre
				SiNo
					Si Pre>50000 Entonces
						CoC <- CoC+1
						TC <- TC+Pre
					SiNo
						CoB <- CoB+1
						TB <- TB+Pre
					FinSi
				FinSi
				Escribir 'Prrecio del producto: '
				Leer Pre
			FinMientras
			PromT <- T/C
			Escribir lista_de_expresiones
		2:
		3:
	FinSegún
FinAlgoritmo
