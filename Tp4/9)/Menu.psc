Algoritmo sin_titulo
	Escribir 'Menú:'
	Escribir '1. Metros a Centímetros.'
	Escribir '2. Kilogramos a gramos.'
	Escribir '3. Celsius a Fahrenheit.'
	Leer ops
	Según ops Hacer
		1:
			Escribir 'Escriba los metros: '
			Leer M
			C <- M*100
			Escribir M, ' metros son ', C, ' centímetros.'
		2:
			Escribir 'Escriba los Kilográmos: '
			Leer K
			G <- K*1000
			Escribir K, ' kilogramos son ', G, ' gramos.'
		3:
			Escribir 'Escriba grados en Celsius: '
			Leer Cel
			F <- 32+(Cel*9/5)
			Escribir C, ' grados Celsius son ', F, ' grados Fahrenheit.'
		De Otro Modo:
			Escribir 'Opción invalida.'
	FinSegún
FinAlgoritmo
