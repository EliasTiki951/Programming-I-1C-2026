Algoritmo ControlDePrecioFor
	PMC = 0
	PMB = 0
	C = 0
	Total = 0
	Dife = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Precio del Producto ", i, ": "
		Leer Pre
		Si i==1 Entonces
			PMC = Pre
			PMB = Pre
		SiNo
			Si Pre>PMC Entonces
				PMC = Pre
			SiNo
				Si Pre<PMB Entonces
					PMB = Pre
				FinSi
			FinSi
		FinSi
		Si Pre>80000 Entonces
			C = C+1
		FinSi
	FinPara
	Dife = PMC-PMB
	Escribir " "
	Escribir "El Precio más Caro es de $", PMC
	Escribir "El Precio mas Barato es de $", PMB
	Escribir C, " Productos cuestan más de $80.000"
	Escribir "La Diferencia entre el precio mayor y el precio menor es de $", Dife
FinAlgoritmo
