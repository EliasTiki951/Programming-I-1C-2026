Algoritmo PartidoDeFútbol
	Escribir "Partido de Futbol"
	Escribir " "
	Escribir "Nombre del Equipo A: "
	Leer NomA
	Escribir "Nombre del Equipo B: "
	Leer NomB
	Escribir "Cant. de Goles del Equipo ", NomA, ": "
	Leer GolA
	Escribir "Cant. de Goles del Equipo ", NomB, ": "
	Leer GolB
	Escribir " "
	Escribir "Resultado:"
	Escribir NomA, " ", GolA, " - ", GolB," ", NomB
	Escribir " "
	Si GolA==GolB Entonces
		Escribir "Empate"
	SiNo
		Escribir "El Ganador es: "
		Si GolA>GolB Entonces
			Escribir NomA
		SiNo
			Escribir NomB
		FinSi
	FinSi
FinAlgoritmo
