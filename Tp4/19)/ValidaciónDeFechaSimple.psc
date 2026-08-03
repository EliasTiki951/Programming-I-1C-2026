Algoritmo ValidaciónDeFechaSimple
	Escribir "Ingrese Dia: "
	Leer Dia
	Escribir "Ingrese Mes: "
	Leer Mes
	Escribir "Ingrese Año: "
	Leer Anio
	Si Anio%4==0 & Anio%100==0 & Anio%400==0 Entonces
		Si Mes==2 Entonces
			Si Dia<1 & Dia>29 Entonces
				Escribir "Fecha Inválida"
			SiNo
				Escribir "Es un Año Bisiesto"
				Escribir "Fecha Válida"
			FinSi
		FinSi
	SiNo
		Si Mes==2 Entonces
			Si Dia<1 & Dia>28 Entonces
				Escribir "Fecha Inválida"
			SiNo
				Escribir "Fecha Válida"
			FinSi
		FinSi
	FinSi
	Si Mes>=1 & Mes<=12 Entonces
		Si Mes==4 | Mes==6 | Mes==9 | Mes==11 Entonces
			Si Dia<1 & Dia>30 Entonces
				Escribir "Fecha Inválida"
			SiNo
				Escribir "Fecha Válida"
			FinSi
		SiNo
			Si Mes<>2 Entonces
				Si Dia<1 & Dia>31 Entonces
					Escribir "Fecha Inválida"
				SiNo
					Escribir "Fecha Válida"
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir "Fecha Inválida"
	FinSi
FinAlgoritmo
