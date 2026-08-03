Algoritmo SistemaDeTarifasElétricas
	Escribir "Ingrese consumo mensual:"
	Leer Mensu
	Repetir
		Escribir "Ingrese tipo de Usuario: "
		Leer Tipo
		Según Tipo Hacer
			1:
				Escribir "Descuento del 10%"
				Desc = Mensu*0.10
				Total = Mensu - Desc
			2:
				Escribir "Descuento del 20%"
				Desc = Mensu*0.20
				Total = Mensu - Desc
			3:
				Escribir "Descuento del 30%"
				Desc = Mensu*0.30
				Total = Mensu - Desc
			De Otro Modo:
				Escribir "Error... elija de nuevo"
				Escribir " "
		FinSegún
	Hasta Que Tipo>=1 & Tipo<=3
	Escribir "El total es de $", Total
FinAlgoritmo
