Algoritmo CajeroAutomático
	Sal = 10000
	Mientras VERDADERO & Opc<>4 Hacer
		Escribir "Cajero Automático"
		Escribir "1. Retirar Dinero"
		Escribir "2. Depositar Dinero"
		Escribir "3. Ver saldo disponible"
		Escribir "4. Salir"
		Leer Opc
		Según Opc Hacer
			1:
				Escribir " "
				Escribir "¿Cuanto desea retirar?"
				Leer Retiro
				Sal = Sal - Retiro
				Escribir "Se a retirado con exito"
				Escribir " "
			2:
				Escribir " "
				Escribir "¿Cuanto desea depositar?"
				Leer Deposito
				Sal = Sal + Deposito
				Escribir "Se a depositado con exito"
				Escribir " "
			3:
				Escribir " "
				Escribir "Su Saldo es de ", Sal
				Escribir " "
			4:
				Escribir "Saliendo..."
			De Otro Modo:
				Escribir " "
				Escribir "Opción Incorrecta"
				Escribir "Elija de Nuevo"
				Escribir " "
		FinSegún
	FinMientras
FinAlgoritmo
