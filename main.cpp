/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-11
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

//Utilidad: DemostraciC3n arreglo de objetos

#include <iostream>
#include <stdio.h>
#include <string>
#include "Grupo.h"

using namespace std;


int main()
{
   Grupo ipoo;
   
   Estudiante estudianteUno("Pepito", 14, 30, 1741652);
   Estudiante estudianteDos("Juanito", 18, 25, 1741623);
   Estudiante estudianteTres("Manuel", 15, 25, 1741635);
   Estudiante estudianteCuatro("Alejandro", 14, 36, 1741656);
   Estudiante estudianteCinco("Andres", 17, 36, 1741699);

   ipoo.agregarEstudiante(estudianteUno);
   ipoo.agregarEstudiante(estudianteDos);
   ipoo.agregarEstudiante(estudianteTres);
   ipoo.agregarEstudiante(estudianteCuatro);
   ipoo.agregarEstudiante(estudianteCinco);
   
   cout << endl;
   ipoo.listarEstuditantes();
   cout << endl << ipoo.codigoRepetido(1741628);
   cout << endl << ipoo.promedioPeso();
   cout << endl << ipoo.promedioEdad();

   cout << endl << ipoo.codigoConEdad(14);
    cout << endl;
    ipoo.mayorEdad();

   
}
