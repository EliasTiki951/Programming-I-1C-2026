Algoritmo CONTRACENIA
	Contra <- 'Tuchiquibaby123'
	Int <- 0
	Escribir 'Usuario Afirmativo'
	Escribir 'Ingrese su Contraceña: '
	Leer Co
	Si Contra==Co Entonces
		Escribir 'Contraceña Correcto'
	SiNo
		Repetir
			Escribir 'Contraceña Incorrecta.'
			Int <- Int+1
			Escribir 'Intento ', Int
			Escribir 'Ingrese nuevamente su Contraceña: '
			Leer Co
		Hasta Que Int==3
		Escribir 'Acceso Bloqueado'
	FinSi
FinAlgoritmo
