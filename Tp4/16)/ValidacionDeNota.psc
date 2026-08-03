Algoritmo Nota
	Escribir "Ingresa tu primera nota: "
	Leer N1
	Escribir "Ingresa tu segunda nota: "
	Leer N2
	Escribir "Ingresa tu tercera nota: "
	Leer N3
	Si N1<0 | N1>10 | N2<0 | N2>10 | N3<0 | N3>10 Entonces
		Escribir "Nota Falsa"
	SiNo
		T = (N1 + N2 + N3)/3
		Escribir "Tu nota promedio es ", T
	FinSi
FinAlgoritmo
