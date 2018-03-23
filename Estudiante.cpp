/*
  Archivo: Estudiante.cpp
  Autor: Manuel Diaz 1741652, Jeffrey Rios Muñoz 1744831, Juan Esteban Camargo Chacon 1741510
  Email: manuel.isaza@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Estudiante.h"

Estudiante::Estudiante()
{
    nombre = "";
    edad = 0;
    peso = 0;
    codigo = 0;
}
Estudiante::Estudiante(string nombre, int edad, double peso, int codigo)
{
	this -> nombre = nombre;
	this -> edad = edad;
	this -> peso = peso;
	this -> codigo = codigo;
}

Estudiante::~Estudiante()
{
	//Método destructor
}

void Estudiante:: setNombre(string nombre){
	this -> nombre = nombre;
}

string Estudiante::getNombre(){
	return nombre;
}

void Estudiante::setEdad(int edad){
	this -> edad = edad;
}

int Estudiante::getEdad(){
	return edad;
}


void Estudiante::setPeso(double peso){
	this -> peso = peso;
}

double Estudiante::getPeso(){
	return peso;
}

void Estudiante::setCodigo(int codigo){
	this -> codigo = codigo;
}

int Estudiante::getCodigo(){
	return codigo;
}
 //hola hola