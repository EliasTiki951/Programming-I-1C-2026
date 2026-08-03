Algoritmo DatosDeComputadora
	Escribir "Datos de Computadora"
	Escribir " "
	Escribir "Marca: "
	Leer Marc
	Escribir "Modelo: "
	Leer Mode
	Escribir "Cantidad de RAM (GB): "
	Leer Cant
	Escribir "Precio: "
	Leer Pre
	Cuota = Pre/6
	Escribir "¿Tiene SSD?"
	Escribir "1. True"
	Escribir "2. False"
	Leer SSD
	Escribir " "
	Escribir " INFORME "
	Escribir "Marca: ", Marc
	Escribir "Modelo: ", Mode
	Escribir "Cantidad de RAM (GB): ", Cant, " GB."
	Escribir "Precio: $", Pre
	Si SSD==1 Entonces
		Escribir "Tiene SSD"
	SiNo
		Escribir "No tiene SSD"
	FinSi
	Escribir "Se lo podemos dejar en 6 cuotas sin interez de $", Cuota
FinAlgoritmo
