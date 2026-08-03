Algoritmo SistemaDeAccesoConBloqueo
	Usu = "EliasTiki"
	Contra = "Tikinidas"
	C = 1
	Escribir "BIENVENIDO AL SISTEMA"
	Escribir " "
	Repetir
		Escribir "Ingrese Usuario: "
		Leer Usua
		Escribir "Ingrese Contraseña: "
		Leer Contr
		Si Usua<>Usu & Contr<>Contra Entonces
			C = C + 1
			Escribir "Valores Incorrectos"
			Escribir " "
			Si C<=3 Entonces
				Escribir "Intento N°", C
			FinSi
		FinSi
	Hasta Que C>3 | (Usua==Usu & Contr==Contra)
	Si Usua==Usu & Contr==Contra Entonces
		Escribir "Acceso Concedido"
	SiNo
		Escribir "Cuenta Bloqueada"
	FinSi
FinAlgoritmo
