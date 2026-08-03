Algoritmo ProduccionYVentasPreParcial
	Dimensionar Nom(20)
	Dimensionar Can(20)
	Dimensionar PreU(20)
	Dimensionar ProTo(20)
	Total <- 0
	ProMV <- 0
	PMDG <- 0
	Prom <- 0
	CM <- 0
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir i, '. Ingrese el Nombre del Producto: '
		Leer Nom[i]
		Escribir 'Ingrese la cantidad Vendida: '
		Leer Can[i]
		Escribir 'Precio Unitario: '
		Leer PreU[i]
		Escribir ' '
		ProTo[i] <- Can[i]*PreU[i]
		Total <- Total + ProTo[i]
		Si i==1 Entonces
			NomPMV <- Nom[i]
			ProMV <- Can[i]
			NomPMDG <- Nom[i]
			PMDG <- ProTo[i]
		FinSi
		Si Can[i]>ProMV Entonces
			NomPMV <- Nom[i]
			ProMV <- Can[i]
		FinSi
		Si ProTo[i]>PMDG Entonces
			NomPMDG <- Nom[i]
			PMDG <- ProTo[i]
		FinSi
	FinPara
	Prom <- Total/20
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir i, '. El producto ', Nom[i], ' tuvo una recaudación total de $', ProTo[i]
		Si Can[i]<50 Entonces
			CM <- CM+1
		FinSi
	FinPara
	Escribir ' '
	Escribir NomPMV, ' es el Producto mas vendido con ', ProMV, ' unidades vendidas.'
	Escribir NomPMDG, ' es el Producto que más dinero generó con $', PMDG
	Escribir 'El Total general Reacudado es de $', Total
	Escribir 'El Promedio de las Ventas es de ', Prom
	Escribir CM, ' Productos se vendieron menos de 50 unidades.'
	Escribir ' '
	Escribir 'Los productos cuya recaudación fue superior al promedio general son: '
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Si ProTo[i]>Prom Entonces
			Escribir '- ', Nom[i], ' con $', ProTo[i]
		FinSi
	FinPara
FinAlgoritmo
