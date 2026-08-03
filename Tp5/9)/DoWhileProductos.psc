Algoritmo DoWhileProductos
	C <- 0
	S <- 0
	Repetir
		Escribir 'Ingrese Precio del producto: '
		Leer Pre
		C <- C+1
		S <- S+Pre
	Hasta Que Pre==0
	C <- C-1
	Escribir 'Cantidad de Productos: ', C
	Escribir 'Precio Total: ', S
FinAlgoritmo
