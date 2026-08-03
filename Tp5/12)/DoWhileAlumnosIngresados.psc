Algoritmo DoWhileAlumnosIngresados
	C = 0
	Repetir
		C = C + 1
		Escribir C,". Ingrese el nombre del Alumno: "
		Leer Nom
	Hasta Que Nom=="fin"
	C = C - 1
	Escribir "Los Alumnos ingresados son ",C
FinAlgoritmo
