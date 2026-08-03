Algoritmo PromedioPositivo
	Escribir "Ingrese un número: "
	Leer Num2
	Si Num2<0 Entonces
		Escribir "El promedio de los números positivos es 0."
	SiNo
		S = Num2
		C = 1
		Repetir
			Escribir 'Ingrese un número: '
			Leer Num1
			C <- C+1
			Si Num1>0 Entonces
				S <- S+Num1
			SiNo
				C <- C-1
			FinSi
		Hasta Que Num1<0
		T <- S/C
		Escribir 'Promedio de todos los números positivos es ', T
	FinSi
FinAlgoritmo
