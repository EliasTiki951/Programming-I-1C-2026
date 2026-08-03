Algoritmo ElMayorDeTresNúmeros
	Escribir "Ingrese el número 1: "
	Leer Num1
	Escribir "Ingrese el número 2: "
	Leer Num2
	Escribir "Ingrese el número 3: "
	Leer Num3
	Si Num1>=Num2 & Num1>=Num3 Entonces
		Escribir "El número Mayor es: ", Num1
	SiNo
		Si Num2>=Num1 & Num2>=Num3 Entonces
			Escribir "El número Mayor es: ", Num2
		SiNo
			Escribir "El número Mayor es: ", Num3
		FinSi
	FinSi
FinAlgoritmo
