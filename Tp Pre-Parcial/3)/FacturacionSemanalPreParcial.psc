Algoritmo FacturacionSemanalPreParcial
	DIMENSION Fac[30]
	Total = 0
	Prom = 0
	DMA = 0
	DME = 0
	MAF = 0
	MEF = 0
	CP = 0
	FI = 0
	FM = 0
	PORC = 0
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Escribir "Ingrese la Facturación del día ", i, ": "
		Leer Fac[i]
		Total = Total + Fac[i]
		Escribir " "
		Si i==1 Entonces
			DMA = i
			MAF = Fac[i]
			DME = i
			MEF = Fac[i]
		SiNo
			Si Fac[i]>MAF Entonces
				MAF = Fac[i]
				DMA = i
			SiNo
				Si Fac[i]<MEF Entonces
					MEF = Fac[i]
					DME = i
				FinSi
			FinSi
		FinSi
	FinPara
	Prom = Total/30
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Si Fac[i]>Prom Entonces
			CP = CP + 1
		FinSi
		Si Fac[i]<100000 Entonces
			FI = FI + 1
		FinSi
		Si Fac[i]>500000 Entonces
			FM = FM + 1
		FinSi
	FinPara
	PORC = (100*FM)/30
	Escribir "El Total Facturado en el Mes es de $", Total
	Escribir "El Promedio diario es de ", Prom
	Escribir "La Mayor Facturación fue el Día ", DMA, " con $", MAF
	Escribir "La Menor Facturación fue el Día ", DME, " con $", MEF
	Escribir "El Porcentaje de Días con Facturación Mayor a $500.000 es del %", PORC
FinAlgoritmo
