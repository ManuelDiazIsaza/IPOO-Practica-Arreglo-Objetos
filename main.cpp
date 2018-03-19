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
   
   Estudiante estudianteUno("Pepito", 18, 30, 1741652);
   Estudiante estudianteDos("Juanito", 15, 25, 1741623);
   Estudiante estudianteTres("Manuel", 15, 40, 1741635);
   Estudiante estudianteCuatro("Alejandro", 14, 36, 1741656);
   Estudiante estudianteCinco("Andres", 18, 36, 1741699);

   ipoo.agregarEstudiante(estudianteUno);
   ipoo.agregarEstudiante(estudianteDos);
   ipoo.agregarEstudiante(estudianteTres);
   ipoo.agregarEstudiante(estudianteCuatro);
   ipoo.agregarEstudiante(estudianteCinco);
   
   cout << endl;
//   ipoo.listarEstuditantes();
//   cout << endl << ipoo.codigoRepetido(1741628);
//   cout << endl << ipoo.promedioPeso();
//   cout << endl << ipoo.promedioEdad();

//    cout << endl;
//    ipoo.mayorEdad();
//    ipoo.mayorPeso();
//    ipoo.estudiantePorCodigo(1741652);
//    cout << endl;
//    ipoo.listadoPorCodigo();
//    ipoo.estMayorPeso();
//    ipoo.estMayorEdad();

    int a = 0;
    while (a != 7)
    {



        cout <<endl<<endl<<
             "::::::::::::::::::::::::::::::::::::::::::::::::::::::MENU::::::::::::::::::::::::::::::::::::::::::::::::::::::::: : "
             << endl;
        cout <<"1: Agregar Estudiante."<< endl;
        cout <<"2: Mostrar estudiantes"<< endl;
        cout <<"3: Buscar estudiante por Codigo"<< endl;
        cout <<"4: Promedio de la edad del grupo"<< endl;
        cout <<"5: Promedio del peso del grupo"<< endl;
        cout <<"6: Personas con el mayor peso o edad"<< endl;
        cout <<"7: Salir"<< endl;
        cout << " su opcion:  ";


        cin >> a;
        switch (a) {

            case 1: {
                string nombre;
                int codigo;
                int edad;
                double peso;
                cout << ":::::::::::::::Agregar Estudiante::::::::::::::::::::::::::" << endl;
                cout << "Digite el codigo del Estudiante: " << endl;
                cin >> codigo;
                cout << "Digite el nombre del Estudiante: " << endl;
                cin >> nombre;
                cout << "Digite la edad Estudiante: " << endl;
                cin >> edad;
                cout << "Digite el peso del Estudiante: " << endl;
                cin >> peso;

                Estudiante estudianteAgregar(nombre, edad, peso, codigo);
                ipoo.agregarEstudiante(estudianteAgregar);

                break;
            }
            case 2:
            {
                int b = 0;
                while(b != 5)
                {
                    cout << "1. Momento de Adicion" << endl;
                    cout << "2. Codigo" << endl;
                    cout << "3. Edad" << endl;
                    cout << "4. Peso" << endl;
                    cout << "5. Volver al menu anterior" << endl;
                    cin >> b;
                    switch (b)
                    {
                        case 1:
                        {
                            ipoo.listarEstuditantes();
                            break;
                        }
                        case 2:
                        {
                            ipoo.listadoPorCodigo();
                            break;
                        }
                        case 3:
                        {
                            ipoo.mayorEdad();
                            break;
                        }
                        case 4:
                        {
                            ipoo.mayorPeso();
                            break;
                        }
                    }
                }
                break;
            }
            case 3:
            {
                int codigo;
                cout << "Digite el codigo que desea buscar:" << endl;
                cin >> codigo;
                ipoo.estudiantePorCodigo(codigo);
                break;
            }
            case 4:
            {
                cout << endl << "El promedio de la edad del grupo es: " << ipoo.promedioEdad() << endl;
                break;
            }
            case 5:
            {
                cout << endl << "El promedio del peso del grupo es: " << ipoo.promedioPeso() << endl;
                break;
            }
            case 6:
            {
                cout << endl << "Seleccione si desea las personas con mayor peso o edad: " << endl;
                int b = 0;
                while(b != 3)
                {
                    cout << "1. Edad" << endl;
                    cout << "2. Peso" << endl;
                    cout << "3. Volver al menu anterior" << endl;
                    cin >> b;
                    switch (b)
                    {
                        case 1:
                        {
                            ipoo.estMayorEdad();
                            break;
                        }
                        case 2:
                        {
                            ipoo.estMayorPeso();
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    return 0;
}
