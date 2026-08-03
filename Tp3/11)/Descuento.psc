Algoritmo Descuento
	Escribir 'Ingrese su Edad: '
	Leer E
	Escribir 'Ingrese Monto: '
	Leer M
	Si E>60 Y M>50000 Entonces
		Total <- M-(M*20)/100
	SiNo
		Total <- M
	FinSi
	Escribir 'Total a Pagar: ', Total
FinAlgoritmo
