Algoritmo ControlDeStockVendidoFor
	DIMENSIÓN Pro[10]
	DIMENSION Cant[10]
	Total = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir i, ". Nombre del Producto: "
		Leer Pro[i]
		Escribir "Cantidad Vendida: "
		Leer Cant[i]
		Escribir " "
		Total = Total + Cant[i]
		Si i==1 Entonces
			MaPV = Pro[i]
			MaCant = Cant[i]
			MePV = Pro[i]
			MeCant = Cant[i]
		FinSi
		Si Cant[i]>MaCant Entonces
			MaPV = Pro[i]
			MaCant = Cant[i]
		FinSi
		Si Cant[i]<MeCant Entonces
			MePV = Pro[i]
			MeCant = Cant[i]
		FinSi
	FinPara
	Escribir "El producto mas vendido: ", MaPV, " con ", MaCant, " unidades."
	Escribir "El producto menos vendido: ", MePV, " con ", MeCant, " unidades."
	Escribir "Un Total de ", Total, " unidades vendidas."
FinAlgoritmo
