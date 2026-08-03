Algoritmo SistemaDeCalificacionesCompleto
	Escribir "Ingrese una nota (0-10): "
	Leer Nota
	Si Nota>=0 & Nota<=10 Entonces
		Si Nota>=0 & Nota<=5 Entonces
			Escribir "Desaprobado"
		SiNo
			Si Nota>=6 & Nota<=8 Entonces
				Escribir "Aprobado"
			SiNo
				Si Nota==9 Entonces
					Escribir "Muy Bueno"
				SiNo
					Si Nota==10 Entonces
						Escribir "Excelente"
						Escribir "Muchas Felicidades con la nota 10"
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir "Nota Invalida"
	FinSi
FinAlgoritmo
