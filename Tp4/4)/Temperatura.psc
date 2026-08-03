Algoritmo Temperatura
	Escribir 'Ingrese la Temperatura en Celsius: '
	Leer C
	Si C>-273.15 & C<100 Entonces
		Si C<0 Entonces
			Escribir 'Bajo Cero.'
		SiNo
			Si C<16 Entonces
				Escribir 'Frio.'
			SiNo
				Si C<26 Entonces
					Escribir 'Templado.'
				SiNo
					Si C<36 Entonces
						Escribir 'Caluroso.'
					SiNo
						Escribir 'Muy caluroso.'
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir 'Temperatura Incorrecta.'
	FinSi
FinAlgoritmo
