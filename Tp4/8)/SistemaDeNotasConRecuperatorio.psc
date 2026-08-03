Algoritmo SistemaDeNotasConRecuperatorio
	Repetir
		Escribir "Ingrese su Nota Principal:"
		Leer Nota
		Si Nota<=0 | Nota>10 Entonces
			Escribir "Nota inválida..."
			Escribir "Intente de nuevo"
			Escribir " "
		FinSi
	Hasta Que Nota>0 & Nota<=10
	Escribir ""
	Si Nota>=6 Entonces
		Escribir "Aprobado"
	SiNo
		Repetir
			Escribir "Nota de Recuperatorio:"
			Leer Recu
			Si Recu<0 | Recu>10 Entonces
				Escribir "Nota Inválida"
				Escribir "Intente de nuevo"
				Escribir " "
			FinSi
		Hasta Que Recu>0 & Recu<=10
		Escribir " "
		Si Recu>=6 Entonces
			Escribir "Aprobado"
		SiNo
			Escribir "Desaprobado"
		FinSi
	FinSi
FinAlgoritmo
