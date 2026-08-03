Algoritmo DíaDeLaSemanaConNúmero
	Escribir "Ingrese un número del 1 al 7: "
	Leer Num
	Si Num<0 Entonces
		Escribir "Mentiroso."
	SiNo
		Si Num==1 Entonces
			Escribir "Lunes"
		SiNo
			Si Num==2 Entonces
				Escribir "Martes"
			SiNo
				Si Num==3 Entonces
					Escribir "Miércoles"
				SiNo
					Si Num==4 Entonces
						Escribir "Jueves"
					SiNo
						Si Num==5 Entonces
							Escribir "Viernes"
						SiNo
							Si Num==6 Entonces
								Escribir "Sábado"
							SiNo
								Si Num==7 Entonces
									Escribir "Domingo"
								SiNo
									Escribir "Mentiroso"
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
