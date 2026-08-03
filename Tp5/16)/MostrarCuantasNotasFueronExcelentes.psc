Algoritmo MostrarCuantasNotasFueronExcelentes
	NE = 0
	Repetir
		Escribir "Ingrese una nota: "
		Leer Nota
		Si Nota>=0 & Nota<=10 Entonces
			Si Nota>=9 Entonces
				NE = NE + 1
			FinSi
			Escribir " "
		SiNo
			Si Nota<>-1 Entonces
				Escribir "Nota Inválida"
				Escribir "Ingrese de Nuevo"
				Escribir " "
			FinSi
		FinSi
	Hasta Que Nota=-1
	Escribir NE, " notas fueron excelentes."
FinAlgoritmo
