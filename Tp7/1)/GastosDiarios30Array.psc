Algoritmo GastosDiarios30Array
	Dimensionar Arr(30)
	Dia <- 0
	Total <- 0
	Prom <- 0
	mayorr <- 0
	Cont <- 0
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Escribir 'Ingrese los gastos del Día ', i, ': '
		Leer Arr[i]
		Dia <- Dia+1
		Total <- Total+Arr[i]
		Si Arr[i]>mayorr Entonces
			Fecha <- Dia
			mayorr <- Arr[i]
		FinSi
	FinPara
	Prom <- Total/30
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Si Arr[i]>Prom Entonces
			Cont <- Cont+1
		FinSi
	FinPara
	Escribir ' '
	Escribir 'El Gasto total del mes fue de $', Total
	Escribir 'El gasto mayor fue de $', mayorr, ' el Dia ', Fecha
	Escribir 'El Promedio diario fue de $', Prom
	Escribir 'La cantidad de dias que superaron el promedio es de ', Cont, " dias."
FinAlgoritmo
