Algoritmo MenuSimple
	Mientras (VERDADERO) & Opc<>3 Hacer
		Escribir "Menú Simple"
		Escribir "1. Suma"
		Escribir "2. Resta"
		Escribir "3. Salir"
		Leer Opc
		Según Opc Hacer
			1:
				Escribir " "
				Escribir "Primer Número: "
				Leer Num1
				Escribir "Segundo Número: "
				Leer Num2
				Suma = Num1 + Num2
				Escribir Num1, " + ", Num2, " = ", Suma
				Escribir " "
			2:
				Escribir " "
				Escribir "Primer Número: "
				Leer Num1
				Escribir "Segundo Número: "
				Leer Num2
				Resta = Num1 - Num2
				Escribir Num1, " - ", Num2 " = ", Resta
				Escribir " "
			3:
				Escribir "Saliendo..."
			De Otro Modo:
				Escribir "Opción Incorrecta"
				Escribir "Elija de nuevo"
				Escribir " "
		FinSegún
	FinMientras
FinAlgoritmo
