Algoritmo WhileContadorParesEImpares
	P = 0
	I = 0
	Repetir
		Escribir "Ingrese un número Entero: "
		Leer Num
		Si Num <> 0 Entonces
			Si Num%2 == 0 Entonces
				P = P + 1
			SiNo
				I = I +1
			FinSi
		FinSi
	Hasta Que Num == 0
	Escribir "Los números Pares ingresados son: ", P
	Escribir "Los números Impares ingresados son: ",I
FinAlgoritmo
