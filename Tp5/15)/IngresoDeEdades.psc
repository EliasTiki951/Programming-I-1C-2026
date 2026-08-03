Algoritmo IngresoDeEdades
	CM <- 0
	Repetir
		Escribir 'Ingrese una edad: '
		Leer Edad
		Si Edad>=1 Y Edad<=120 Entonces
			Si Edad>=60 Entonces
				CM <- CM+1
			FinSi
			Escribir ' '
		SiNo
			Si Edad<>0 Entonces
				Escribir 'Edad Inválida'
				Escribir 'Ingrese de nuevo'
				Escribir ' '
			FinSi
		FinSi
	Hasta Que Edad==0
	Escribir CM, ' personas son Mayores de edad.'
FinAlgoritmo
