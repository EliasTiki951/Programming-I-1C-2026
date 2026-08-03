Algoritmo WhileContador10
	Contador = 1
	Positivo = 0
	Mientras Contador<=10 Hacer
		Escribir "Ingrese un número: "
		Leer Num
		Si Num>0 Entonces
			Positivo = Positivo + 1
		FinSi
		Contador = Contador + 1
	FinMientras
	Escribir "La Cantidad de numeros Positivos son ", Positivo
FinAlgoritmo
