Algoritmo CalculadoraSimple
	Escribir "Ingrese el primer número: "
	Leer Num1
	Escribir "Ingrese el segundo número: "
	Leer Num2
	Escribir "Elija un operador: "
	Escribir "1. Suma"
	Escribir "2. Resta"
	Escribir "3. Multiplicación"
	Escribir "4. División"
	Leer Ope
	Según Ope Hacer
		1:
			S = Num1 + Num2
			Escribir Num1 ," + ", Num2, " = ", S
		2:
			R = Num1 - Num2
			Escribir Num1, " - ", Num2, " = ", R
		3:
			M = Num1 * Num2
			Escribir Num1, " * ", Num2, " = ", M
		4:
			D = Num1 / Num2
			Escribir Num1, " / ", Num2, " = ", D
		De Otro Modo:
			Escribir "Error, Intente de nuevo"
	FinSegún
FinAlgoritmo
