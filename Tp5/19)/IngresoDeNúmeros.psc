Algoritmo IngresoDeNúmeros
	CP = 0
	Repetir
		Escribir "Ingrese un número: "
		Leer Num1
		Si Num1>0 Entonces
			CP = CP + 1
		FinSi
	Hasta Que Num1<0
	Escribir "Se ingresaron ", CP, " números."
FinAlgoritmo
