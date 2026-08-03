Algoritmo Estacionamiento
	Escribir 'Ingrese horas estacionadas: '
	Leer H
	Si H<0 Entonces
		Escribir 'Mentiroso.'
	SiNo
		Si H==1 Entonces
			Escribir '1 hora estacionado: $1500.'
		SiNo
			Si H<=3 Entonces
				T <- H*1200
				Escribir H, ' horas estacionado: $', T
			SiNo
				T <- H*1000
				Escribir H, ' horas estacionado: $', T
			FinSi
		FinSi
	FinSi
FinAlgoritmo
