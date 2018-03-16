/*
  Archivo: Grupo.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Grupo.h"
#include <iomanip>
#include <iostream>


using namespace std;

Grupo::Grupo()
{
	this-> ultimo = 0;
}

Grupo::~Grupo()
{
	//Método destructor
}

void Grupo::setUltimo(int ultimo){
	this -> ultimo = ultimo;
}

int Grupo::getUltimo(){
	return ultimo;
}

int Grupo::getTamano(){
	return tamano;
}

bool Grupo::codigoRepetido(int codigo)
{
    int tamano = this -> getTamano();
    bool encontrado = false;
    for(int i=0;i<tamano;i++)
    {
        if(codigo == this -> grupo[i].getCodigo())
            encontrado = true;
    }
    return encontrado;
}

bool Grupo::agregarEstudiante(Estudiante estudiante)
{
    int ultimo = this-> getUltimo();
    int tamano = this -> getTamano();

    if (codigoRepetido(estudiante.getCodigo()))
    {
        cout << endl << "Este codigo ya existe";
        return false;
    }
    else if ( ultimo < tamano)
    {
        this -> grupo[ultimo] = estudiante;
        this -> setUltimo(++ultimo);
        cout << endl << "Estudiante agregado con exito";
        return true;
    } else {
        cout << endl << "Ocurrió un error";
        return false;
    }
}


void Grupo::listarEstuditantes()
{
    int ultimo = this -> getUltimo();
    int longitud = 0;
    string nombre = "";
    cout << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
    for(int i = 0 ; i < ultimo; i++){
        nombre = grupo[i].getNombre();
        longitud = nombre.length();
        cout << nombre.append(20-longitud,'.') << " : " <<setw(5) ;
        cout << grupo[i].getCodigo()  <<setw(15) ;
        cout << grupo[i].getEdad()  <<setw(15) ;
        cout << grupo[i].getPeso()  << endl;
    }
}