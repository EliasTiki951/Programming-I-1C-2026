Algoritmo WhileContraseña3
	Con = "ELI"
	C = 1
	Escribir "Usuario Correcto"
	Escribir "Escriba la contraseña: "
	Leer Contra
	Mientras Contra <> Con & C<3 Hacer
		C = C + 1
		Escribir "Contraseña Incorrecta."
		Escribir "Intento ", C " : " 
		Leer Contra
	FinMientras
	Si Contra == Con Entonces
		Escribir "Contraseña Correcta"
	SiNo
		Escribir "Cuenta Bloqueada"
	FinSi
FinAlgoritmo
