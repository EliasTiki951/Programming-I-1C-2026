Algoritmo ProductosVendidosFor
	Pro <- 0
	Total <- 0
	Mr <- 0
	C <- 0
	Para i<-1 Hasta 8 Con Paso 1 Hacer
		Escribir i, '. Nombre del Producto: '
		Leer Nom
		Escribir 'Precio unitario del Producto: '
		Leer Pre
		Escribir 'Cantidad Vendida: '
		Leer Can
		Pro <- Pre*Can
		Total <- Total+Pro
		Si i==1 Entonces
			Name <- Nom
			Mr <- Pro
		SiNo
			Si Pro>Mr Entonces
				Name <- Nom
				Mr <- Pro
			FinSi
		FinSi
		Si Can>10 Entonces
			C <- C+1
		FinSi
		Escribir ' '
	FinPara
	Escribir " "
	Escribir "La Recaudación Total General es de $", Total
	Escribir "El Producto ",Name," generó mayor recaudación con $", Mr
	Escribir C, " productos se vendieron más de 10 Unidades."
FinAlgoritmo
