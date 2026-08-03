Algoritmo DOWHILESISTEMAUSUARIOCONTRACENA
	Escribir 'BIENVENIDO AL SISTEMA'
	Escribir 'Crea tu Usuario: '
	Leer Usu
	Escribir 'Crea tu Contraseña: '
	Leer Con
	Escribir ' '
	Escribir 'Datos Guardados con Exito...'
	Escribir ' '
	Repetir
		Escribir 'Elija una opción: '
		Escribir '1. Iniciar Sección'
		Escribir '2. Cerrar Aplicación'
		Leer Opc
		Según Opc Hacer
			1:
				Repetir
					Escribir 'Ingreso al Sistema'
					Escribir 'Ingrese Usuario: '
					Leer Us
					Escribir 'Ingrese Contraseña: '
					Leer Co
					Si Us<>Usu O Co<>Con Entonces
						Escribir 'Acceso Denegado'
					FinSi
				Hasta Que Us==Usu Y Co==Con
				Escribir 'Acceso Permitido'
				Escribir " "
				Escribir "Bienvenido al Sistema..."
			2:
				Escribir 'Cerrando...'
				Escribir 'Cerrado Con Exito'
			De Otro Modo:
				Escribir 'Error. Elija otra opción...'
		FinSegún
	Hasta Que Opc==1 O Opc==2
FinAlgoritmo
