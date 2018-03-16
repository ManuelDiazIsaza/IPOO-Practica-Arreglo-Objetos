/*
  Archivo: Estudiante.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Persona
// Responsabilidad: Administrar los datos del estudiante
// ColaboraciÃ³n: Generar el grupo de estudiantes


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;


class Estudiante
{
	private:
		string nombre;
		int edad;
		double peso;
		int codigo;
	public:
		Estudiante();
		Estudiante(string nombre, int edad, double peso, int codigo );
		~Estudiante();
		void setNombre(string nombre);
		string getNombre();
		void setEdad(int edad);
		int getEdad();
		void setPeso(double peso);
		double getPeso();
		void setCodigo(int codigo);
		int getCodigo();
};

#endif
