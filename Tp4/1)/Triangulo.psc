Algoritmo Triangulo
	Escribir "Valor del lado 1: "
	Leer L1
	Escribir "Valor del lado 2: "
	Leer L2
	Escribir "Valor del lado 3: "
	Leer L3
	Si L1+L2>L3 & L1+L3>L2 & L2+L3>L1 Entonces
		Escribir "Los lados si forman un triangulo."
		Si L1==L2 & L2==L3 Entonces
			Escribir "Es un triagulo Equilatero."
		SiNo
			Si L1==L2 | L1==L3 | L2==L3 Entonces
				Escribir "Es un triangulo Isosceles."
			SiNo
				Escribir "Es un triangulo Escaleno."
			FinSi
		FinSi
	SiNo
		Escribir "Los lados no forman un triangulo."
	FinSi
FinAlgoritmo
