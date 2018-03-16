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
#include "Ordenar.h"


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

bool Grupo::codigoRepetido2(Estudiante estudiantes[], int codigo)
{

    int tamano =  this -> getUltimo();
    bool encontrado = false;
    for(int i=0;i<tamano;i++)
    {
        if(codigo == estudiantes[i].getCodigo())
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

double Grupo::promedioPeso()
{
    double acumuladorPeso = 0;
    int tamano = this->getTamano();
    int cuantosEst = this->getUltimo();

    for (int j = 0; j < cuantosEst; j++) {
        acumuladorPeso += this->grupo[j].getPeso();
    }
    return acumuladorPeso / cuantosEst;
}

double Grupo::promedioEdad()
{
    double acumuladorEdad = 0;
    int tamano = this->getTamano();
    int cuantosEst = this->getUltimo();

    for (int j = 0; j < cuantosEst; j++) {
        acumuladorEdad += this->grupo[j].getEdad();
    }
    return acumuladorEdad / cuantosEst;
}

void Grupo::mayorEdad()
{
    int cuantosEst = this->getUltimo();
    int edades[cuantosEst];
    bool agrego = false;
    int longitud = 0;
    string nombre = "";
    for (int j = 0; j < cuantosEst; j++)
    {
        edades[j] = this->grupo[j].getEdad();
    }
    Ordenar ordenar;
    ordenar.insercion(edades, cuantosEst);
    cout << "================== Listado de Estudiantes descendientes por Edad =====================" << endl << endl;
    cout << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
    for (int i = 0; i < cuantosEst; i++)
    {
        agrego=false;
          for (int k = 0; k < cuantosEst; k++)
          {
            if (codigoRepetido2(this -> porEdad, grupo[k].getCodigo()))
            {
            }
            else if (edades[i] == this -> grupo[k].getEdad())
            {
               while(agrego==false)
               {
                this -> porEdad[i] = grupo[k];

               // cout << endl << "El Estudiante con codigo " << porEdad[i].getCodigo() << " de nombre " << porEdad[i].getNombre() << " tiene la edad de: " << porEdad[i].getEdad();
                   nombre = porEdad[i].getNombre();
                   longitud = nombre.length();
                   cout << nombre.append(20-longitud,'.') << " : " <<setw(5) ;
                   cout << porEdad[i].getCodigo()  <<setw(15) ;
                   cout << porEdad[i].getEdad()  <<setw(15) ;
                   cout << porEdad[i].getPeso()  << endl;
                   agrego = true;
              }
            }
          }
    }
    cout << endl << endl << "======================================================================================" << endl;
}

void Grupo::mayorPeso()
{
    int cuantosEst = this->getUltimo();
    double pesos[cuantosEst];
    bool agrego = false;
    int longitud = 0;
    string nombre = "";
    for (int j = 0; j < cuantosEst; j++)
    {
        pesos[j] = this->grupo[j].getPeso();
    }
    Ordenar ordenar;
    ordenar.insercion2(pesos, cuantosEst);
    cout << "================== Listado de Estudiantes descendientes por Peso =====================" << endl << endl;
    cout << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
    for (int i = 0; i < cuantosEst; i++)
    {
        agrego=false;
        for (int k = 0; k < cuantosEst; k++)
        {
            if (codigoRepetido2(this -> porPeso, grupo[k].getCodigo()))
            {
            }
            else if (pesos[i] == this -> grupo[k].getPeso())
            {
                while(agrego==false)
                {
                    this -> porPeso[i] = grupo[k];

                    // cout << endl << "El Estudiante con codigo " << porEdad[i].getCodigo() << " de nombre " << porEdad[i].getNombre() << " tiene la edad de: " << porEdad[i].getEdad();
                    nombre = porPeso[i].getNombre();
                    longitud = nombre.length();
                    cout << nombre.append(20-longitud,'.') << " : " <<setw(5) ;
                    cout << porPeso[i].getCodigo()  <<setw(15) ;
                    cout << porPeso[i].getEdad()  <<setw(15) ;
                    cout << porPeso[i].getPeso()  << endl;
                    agrego = true;
                }
            }
        }
    }
    cout << endl << endl << "======================================================================================" << endl;
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