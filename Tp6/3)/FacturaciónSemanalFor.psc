Algoritmo FacturaciónSemanalFor
	Fac = 0
	Total = 0
	Dia = 0
	MF = 0
	C = 0
	Para i<-1 Hasta 7 Con Paso 1 Hacer
		Escribir "El día ", i, " se facturó: "
		Leer Fac
		Total = Total + Fac
		Si i==1 Entonces
			Dia = i
			MF = Fac
		SiNo
			Si Fac>MF Entonces
				Dia = i
				MF = Fac
			FinSi
		FinSi
		Si Fac<100000 Entonces
			C = C + 1
		FinSi
		Escribir " "
	FinPara
	Escribir "En Total en la semana se Facturó $", Total
	Escribir "El Día ", Dia, " tubo la mayor facturación."
	Si C==1 Entonces
		Escribir "Solo ", C, " día facturó menos de $100.000" 
	SiNo
		Escribir "Solo ", C, " días facturó menos de $100.000"
	FinSi
FinAlgoritmo
