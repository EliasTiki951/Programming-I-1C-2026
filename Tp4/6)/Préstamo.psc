Algoritmo Préstamo
	Escribir "Ingrese salario: "
	Leer sal
	Escribir "Ingrese antiguedad: "
	Leer ant
	Si sal<0 | ant<0 Entonces
		Escribir "Mentiroso."
	SiNo
		Si sal>250000 & ant>=2 | sal>400000 Entonces
			Escribir "Prestamo Aprobado"
		SiNo
			Escribir "Prestamo Desaprobado"
		FinSi
	FinSi
FinAlgoritmo
