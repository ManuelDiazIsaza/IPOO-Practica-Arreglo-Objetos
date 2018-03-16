/*
  Archivo: Grupo.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Grupo
// Responsabilidad: Administrar un grupo de estudiantes
// ColaboraciÃ³n: NInguna

#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include "Estudiante.h"

using namespace std;


class Grupo
{
	private:
		int tamano = 10;
		Estudiante grupo[10];
        Estudiante porPeso[10];
        Estudiante porEdad[10];
		int ultimo;
	public:
		Grupo();
		~Grupo();
		void setUltimo(int ultimo);
		int getUltimo();
		int getTamano();
		bool agregarEstudiante(Estudiante estudiante);
		void listarEstuditantes();
		bool codigoRepetido(int codigo);
        bool codigoRepetido2(Estudiante estudiantes[], int codigo);
        double promedioPeso();
        double promedioEdad();
        void mayorEdad();
        int codigoConEdad(int edad);


};

#endif