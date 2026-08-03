Algoritmo Intermedio
	Escribir "Ingrese el Primer Número: "
	Leer n1
	Escribir "Ingrese el Segundo Número: "
	Leer n2
	Escribir "Ingrese el Tercer Número: "
	Leer n3
	Si n1>n2 & n1<n3 | n1<n2 & n1>n3  Entonces
		Escribir "El número intermedio es ",n1
	SiNo
		Si n2>n1 & n2<n3 | n2<n1 & n2>n3 Entonces
			Escribir "El número intermedio es ", n2
		SiNo
			Escribir "El número intermedio es ",n3
		FinSi
	FinSi
FinAlgoritmo
