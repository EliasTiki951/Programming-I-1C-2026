Algoritmo VentasDelDiaFor
	Rt = 0
	Va = 0
	Vb = 0
	C = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir i, ". Ingrese el Importe de la Venta: "
		Leer Imp
		Rt = Rt + Imp
		Si Imp>50000 Entonces
			C = C+1
		FinSi
		Si i==1 Entonces
			Va = Imp
			Vb = Imp
		SiNo
			Si Imp>Va Entonces
				Va = Imp
			SiNo
				Si Imp<Vb Entonces
					Vb = Imp
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir " "
	Escribir "La Recaudación Total es de $", Rt
	Escribir "La venta mas Alta es de $", Va
	Escribir "La venta mas Baja es de $", Vb
	Escribir "La cantidad de ventas que superaron los 50mil es de ", C, " ventas."
FinAlgoritmo
