Algoritmo WhileFactorial
	C <- 0
	S <- 1
	Escribir 'Ingrese un número: '
	Leer Num
	Si Num<0 Entonces
		Escribir 'No existe el factorial de un número negativo.'
	SiNo
		Mientras C<Num Hacer
			C <- C+1
			S <- C*S
		FinMientras
		Escribir 'El Factorial de ', Num, ' es ', S
	FinSi
FinAlgoritmo
