Algoritmo DoWhileMayorValorIngresado
	Num1 = 0
	Repetir
		Escribir "Ingrese un número: "
		Leer Num
		Si Num>Num1 & Num<>999 Entonces
			Num1 = Num
		FinSi
	Hasta Que Num=999
	Escribir "El mayor valor ingresado es ",Num1
FinAlgoritmo
