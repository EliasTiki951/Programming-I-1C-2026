Algoritmo Impuesto
	Escribir "Ingresa tu salario: "
	Leer S
	Si S<0 Entonces
		Escribir "Salario Falso."
	SiNo
		Si S<=100000 Entonces
			S = S - (S*5)/100
			Escribir "El impuesto es de un 5% y tu salario final es de ",S " pesos."
		SiNo
			Si S<=300000 Entonces
				S = S - (S*10)/100
				Escribir "El impuesto es de un 10% y tu salario final es de ", S " pesos."
			SiNo
				S = S - (S*15)/100
				Escribir "El impuesto es de un 15% y tu salario final es de ", S " pesos."
			FinSi
		FinSi
	FinSi
FinAlgoritmo
