Algoritmo Nota
	Escribir "Ingresa tu nota: "
	Leer N
	Si N<0 Entonces
		Escribir "Mentiroso."
	SiNo
		Si N<6 Entonces
			Escribir "Desaprobado."
		SiNo
			Si N==6 Entonces
				Escribir "Aprobado."
			SiNo
				Si N<=8 Entonces
					Escribir "Muy bueno."
				SiNo
					Si N>10 Entonces
						Escribir "Mentiroso."
					SiNo
						Escribir "Excelente."
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
