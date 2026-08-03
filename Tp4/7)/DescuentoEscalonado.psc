Algoritmo DescuentoEscalonado
	Repetir
		Escribir 'Monto de la compra: '
		Leer Monto
		Escribir 'Ingrese tipo de cliente:'
		Escribir '1. Tipo A'
		Escribir '2. Tipo B'
		Escribir '3. Tipo C'
		Leer Tipo
		Según Tipo Hacer
			1:
				Escribir 'Descuento del 60%'
				Total <- Monto-Monto*0.60
				Escribir ' '
			2:
				Escribir 'Descuento del 40%'
				Total <- Monto-Monto*0.40
				Escribir ' '
			3:
				Escribir 'Descuento del 20%'
				Total <- Monto-Monto*0.20
				Escribir ' '
			De Otro Modo:
				Escribir 'Error...'
				Escribir 'Elija una de las opciones...'
				Escribir ' '
		FinSegún
		Si Tipo==1 O Tipo==2 O Tipo==3 Entonces
			Escribir 'El Monto total con descuento es de $', Total
		FinSi
	Hasta Que Tipo=1 O Tipo=2 O Tipo=3
FinAlgoritmo
