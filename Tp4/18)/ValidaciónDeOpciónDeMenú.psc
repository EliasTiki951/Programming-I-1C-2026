Algoritmo ValidaciónDeOpciónDeMenú
	Repetir
		Escribir "Menú"
		Escribir "Elija una opción del 1-4: "
		Leer Opc
		Según Opc Hacer
			1:
				Escribir "Opciónco elegida fue ", Opc
			2:
				Escribir "Opción elegida fue ", Opc
			3:
				Escribir "Opción elegida fue ", Opc
			4:
				Escribir "Opción elegida fue ", Opc
			De Otro Modo:
				Escribir "Error, elija de nuevo"
				Escribir " "
		FinSegún
	Hasta Que Opc>=1 & Opc<=4
	Escribir "Gracias"
FinAlgoritmo
