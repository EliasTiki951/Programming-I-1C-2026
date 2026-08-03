Algoritmo SistemaDeVentaConMenú
	Repetir
		Escribir "Sistemas de Venta"
		Escribir "1. Calcular Precio Final"
		Escribir "2. Verificar Descuento"
		Escribir "3. Salir"
		Escribir "Elija una opción: "
		Leer Opc
		Según Opc Hacer
			1:
				Escribir "Ingrese el monto de la compra: "
				Leer Compra
				Escribir "Es socio? Si/No"
				Leer Socio
			2:
				Escribir "Verificando descuento..."
				Si Socio=="Si" | Socio=="si" Entonces
					Desc = Compra*0.20
					Escribir "Tiene un descuento del 20%."
				SiNo
					Si Compra>100000 Entonces
						Desc = Compra*0.10
						Escribir "Tiene un descuento del 10%."
					SiNo
						Desc = 0
						Escribir "No tiene descuento."
					FinSi
				FinSi
				PreciodoFinal = Compra - Desc
				Escribir "Descuento: $",Desc
				Escribir "Precio Final: $", PrecioFinal
			3:
				Escribir "Saliendo"
				Escribir "Gracias por utilizar el Sistema"
			De Otro Modo:
				Escribir "Opción Incorrecta."
				Escribir "Intente Nuevamente."
		FinSegún
	Hasta Que Opc==3
FinAlgoritmo
