Algoritmo CajeroAutomáticoSimplificado
	Saldo = 10000
	Repetir
		Escribir "Menú"
		Escribir "1. Consultar Saldo"
		Escribir "2. Depositar"
		Escribir "3. Extraer"
		Escribir "4. Salir"
		Leer Opc
		Según Opc Hacer
			1:
				Escribir "Su Saldo es de $",Saldo
				Escribir " "
			2:
				Escribir "¿Cuanto desea depositar?"
				Leer Depo
				Saldo = Saldo + Depo
				Escribir "Dinero depositado con exito"
				Escribir "Su nuevo saldo es $", Saldo
				Escribir " "
			3:
				Escribir "¿Cuanto desea Extraer?"
				Leer Extra
				Saldo = Saldo - Extra
				Escribir "Dinero extraido con exito"
				Escribir "Su nuevo saldo es $", Saldo
				Escribir " "
			4:
				Escribir "Saliendo..."
			De Otro Modo:
				Escribir "Error..."
				Escribir "Intente de Nuevo"
				Escribir " "
		FinSegún
	Hasta Que Opc==4
FinAlgoritmo
