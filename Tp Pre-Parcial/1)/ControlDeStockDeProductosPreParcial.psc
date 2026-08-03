Algoritmo ControlDeStockDeProductosPreParcial
	Dimensionar Arr[20]
	Dimensionar Stock(20)
	MAS <- 0
	MES <- 0
	C10 <- 0
	C0 <- 0
	Total <- 0
	Escribir 'Bienvenido Ingrese 20 productos en stock: '
	Escribir " "
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir i, ". Nombre del Producto: '
		Leer Arr[i]
		Escribir 'Stock del Producto: '
		Leer Stock[i]
		Escribir ' '
		Total <- Total+Stock[i]
		Si i==1 Entonces
			MAS <- Stock[i]
			MES <- Stock[i]
		SiNo
			Si Stock[i]>MAS Entonces
				MAS <- Stock[i]
				ProMA <- Arr[i]
			SiNo
				Si Stock[i]<MES Y Stock[i]<>0 Entonces
					MES <- Stock[i]
					ProME <- Arr[i]
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir ' '
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Escribir i, '- El Producto ', Arr[i], ' tiene ', Stock[i], ' de Stock.'
		Si Stock[i]<10 Entonces
			C10 <- C10+1
			Si Stock[i]==0 Entonces
				C0 <- C0+1
			FinSi
		FinSi
	FinPara
	Escribir ' '
	Escribir 'El producto ', ProMA, ' tiene el mayor stock con ', MAS
	Escribir 'El producto ', ProME, ' tiene el menor stock con ', MES
	Escribir C10, ' Productos tienen stock menor a 10 unidades.'
	Escribir C0, ' Productos tienen stock igual a 0.'
	Escribir 'El Total de unidades almacenadas es de ', Total
	Escribir ' '
	Para i<-1 Hasta 20 Con Paso 1 Hacer
		Si Stock[i]<5 Entonces
			Escribir '--El producto ', Arr[i], ' necesita reposición!!'
		FinSi
	FinPara
FinAlgoritmo
