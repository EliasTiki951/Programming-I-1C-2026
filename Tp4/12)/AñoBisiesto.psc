Algoritmo AñoBisiesto
	Escribir "Ingrese un Año:"
	Leer Anio
	Si Anio%400==0 Entonces
		Escribir "Es un año Bisiesto"
	SiNo
		Si Anio%100==0 Entonces
			Escribir "No es un año Bisiesto."
		SiNo
			Si Anio%4==0 Entonces
				Escribir "Es un año Bisiesto."
			SiNo
				Escribir "No es un año Bisiesto."
			FinSi
		FinSi
	FinSi
FinAlgoritmo
