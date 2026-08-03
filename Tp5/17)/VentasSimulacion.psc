Algoritmo VentasSimulacion
	CM = 0
	Total = 0
	Repetir
		Escribir "Ingrese Monto:"
		Leer Monto
		Si Monto>=0 Entonces
			CM = CM + 1
			Total = Total + Monto
		SiNo
			Si Monto<>-1 Entonces
				Escribir "Monto Invalido"
				Escribir "Ingrese de nuevo"
				Escribir " "
			FinSi
		FinSi
	Hasta Que Monto==-1
	Prom = Total/CM
	Escribir "La recaudación Promedio es de $", Prom
FinAlgoritmo
