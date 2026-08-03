Algoritmo sin_titulo
	i <- 0
	Vf <- 0
	Prom <- 0
	Ca <- 0
	Cb <- 0
	Cc <- 0
	Ta <- 0
	Tb <- 0
	Tc <- 0
	Para i<-1 Hasta 15 Con Paso 1 Hacer
		Escribir i, '. Ingrese el precio del Producto: '
		Leer Pre
		Si Pre>50000 Entonces
			Cc <- Cc+1
			Tc <- Tc+Pre
		SiNo
			Si Pre<10000 Entonces
				Ca <- Ca+1
				Ta <- Ta+Pre
			SiNo
				Cb <- Cb+1
				Tb <- Tb+Pre
			FinSi
		FinSi
	FinPara
	Escribir ' '
	Si Ca>=5 Entonces
		Ta <- Ta*0.25
		Escribir 'Se aplicó un descuento del 25% en la Categoria A: ', Ta
	FinSi
	Si Cb>=5 Entonces
		Tb <- Tb*0.25
		Escribir 'Se aplicó un descuento del 25% en la categoria B: ', Tb
	FinSi
	Si Cc>=5 Entonces
		Tc <- Tc*0.25
		Escribir 'Se aplicó un descuento del 25% a la categoria C: ', Tc
	FinSi
	Vf <- Ta+Tb+Tc
	Prom <- Vf/15
	Escribir ' '
	Escribir 'El Precio Total de todos los productos es de $', Vf
	Escribir 'El Promedio es: ', Prom
	Escribir 'La Cantidad de productos de la Categoria A son: ', Ca
	Escribir 'La Cantidad de productos de la Categoria B son: ', Cb
	Escribir 'La Cnatidad de prodcutos de la Categoria C son: ', Cc
	Escribir 'El Monto Total de la Categoria A: $', Ta
	Escribir 'El Monto Total de la Categoria B: $', Tb
	Escribir 'El Monto Total de la Categoria C: $', Tc
	Escribir ' '
FinAlgoritmo
