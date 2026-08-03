Algoritmo SimulaciónDeCompraConImpuestosYDescuentos
	Escribir "Ingrese el Precio: "
	Leer Pre
	Repetir
		Escribir "Ingrese forma de Pago: "
		Escribir "1. Efectivo"
		Escribir "2. Débito"
		Escribir "3. Crédito"
		Leer Pago
		Según Pago Hacer
			1:
				Escribir "Se aplica un 10% de descuento"
				Desc = Pre*0.10
				Total = Pre - Desc
			2:
				Escribir "Se aplica un 5% de descuento"
				Desc = Pre*0.05
				Total = Pre - Desc
			3:
				Escribir "Se aplica un 15% de recargo"
				Rec = Pre*0.15
				Total = Pre + Rec
			De Otro Modo:
				Escribir "Error... Elija una opción"
				Escribir " "
		FinSegún
	Hasta Que Pago>=1 & Pago<=3
	Escribir "El total es de $", Total
FinAlgoritmo
