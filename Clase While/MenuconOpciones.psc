Algoritmo MenuConOpciones
	Repetir
		Escribir 'MENÚ'
		Escribir '1. Cargar Datos'
		Escribir '2. Mostrar Datos'
		Escribir '3. Cerrar'
		Escribir ' '
		Escribir 'Elija una Opción: '
		Leer Opc
		Según Opc Hacer
			1:
				Escribir ' '
				Num <- 0
				T <- 0
				C <- 1
				Prom <- 0
				Max <- 0
				Min <- 0
				Mientras Num<>-1 Hacer
					Escribir C, '. Ingrese números (Hasta el -1): '
					Leer Num
					T <- T+Num
					C <- C+1
					Si Num<>-1 Entonces
						Si C==2 Entonces
							Max <- Num
							Min <- Num
						SiNo
							Si Num>Max Entonces
								Max <- Num
							SiNo
								Si Num<Min Entonces
									Min <- Num
								FinSi
							FinSi
						FinSi
					FinSi
				FinMientras
				Si Num==-1 Y C==2 Entonces
					Opc <- 3
				SiNo
					T <- T+1
					C <- C-2
					Prom <- T/C
					Escribir ' '
				FinSi
			2:
				Escribir ' '
				Escribir 'Los números fueron cargados...'
				Escribir '1. El Total es: ', T
				Escribir '2. El Promedio es: ', Prom
				Escribir '3. El Maximo es: ', Max
				Escribir '4. El Mínimo es: ', Min
				Repetir
					Escribir ' '
					Escribir '1. Volver al Menú'
					Escribir '2. Cerrar'
					Escribir '¿Qué desea hacer?'
					Leer M
					Si M==1 Entonces
						Opc <- 1
					SiNo
						Si M==2 Entonces
							Opc <- 3
						SiNo
							Escribir 'Vuelva a Elegir...'
						FinSi
					FinSi
				Hasta Que M==1 O M==2
				Si Opc==1 Entonces
					Escribir ' '
				FinSi
			3:
			De Otro Modo:
				Escribir 'Error. Vuelva a elegir...'
				Escribir ' '
		FinSegún
	Hasta Que Opc==3
	Escribir ' '
	Escribir 'Cerrando...'
	Escribir 'Cerrado con Exito'
FinAlgoritmo
