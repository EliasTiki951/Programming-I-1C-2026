Algoritmo ClasificacionDeEdad
	Escribir "Ingrese su Edad: "
	Leer Edad
	Si Edad<0 Entonces
		Escribir "Mentiroso."
	SiNo
		Si Edad>=0 & Edad<=12 Entonces
			Escribir "Es un Niño."
		SiNo
			Si Edad>=13 & Edad<=17 Entonces
				Escribir "Es un Adolescente."
			SiNo
				Si Edad>=18 & Edad<=59 Entonces
					Escribir "Es un Adulto."
				SiNo
					Si Edad>=60 & Edad<=120 Entonces
						Escribir "Es un Adulto Mayor."
					SiNo
						Escribir "Mentiroso."
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
