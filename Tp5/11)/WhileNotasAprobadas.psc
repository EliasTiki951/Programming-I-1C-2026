Algoritmo WhileNotasAprobadas
	C = 0
	A = 0
	S = 0
	Mientras C<5 Hacer
		C = C + 1
		Escribir C, ". Ingrese la nota del Parcial: "
		Leer Not
		Si Not<0 | Not>10 Entonces
			Escribir "Nota Invalida."
			C = C - 1
		SiNo
			Si Not>=6 Entonces
				S = S + 1
			FinSi
		FinSi
	FinMientras
	Escribir "La Cantidad de notas aprobadas son ",S
FinAlgoritmo
