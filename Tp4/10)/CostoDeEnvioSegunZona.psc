Algoritmo CostoDeEnvioSegunZona
	Escribir "Peso del paquete en kilos:"
	Leer Peso
	Escribir " "
	Repetir
		Escribir "Ingrese zona (1-4) a enviar:"
		Leer Zona
		Si Zona<1 | Zona>4 Entonces
			Escribir "Zona Inválida"
			Escribir "Ingrese de nuevo"
			Escribir " "
		FinSi
	Hasta Que Zona>=1 & Zona<=4
	Según Zona Hacer
		1:
			Si Peso>=5 Entonces
				Costo = 1000
			SiNo
				Costo = 500
			FinSi
		2:
			Si Peso>=5 Entonces
				Costo = 2000
			SiNo
				Costo = 1500
			FinSi
		3:
			Si Peso>=5 Entonces
				Costo = 3000
			SiNo
				Costo = 2500
			FinSi
		4:
			Si Peso>=5 Entonces
				Costo = 4000
			SiNo
				Costo = 3500
			FinSi
		De Otro Modo:
			Escribir " "
	FinSegún
	Escribir " "
	Escribir "Total Costo es de $", Costo
FinAlgoritmo
