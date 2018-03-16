/*
  Archivo: Ordenar.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Ordenar
// Responsabilidad: ordenar un arreglo con diferente métodos de ordenación
//    - burbuja
//    - selección
// ColaboraciÃ³n: ninguna


#include<iostream>

#ifndef HH_Ordenar
#define HH_Ordenar


class Ordenar
{
  private:
    // No hay estado interno
    
  public:
    Ordenar(); // No hace nada
    void imprimir(int vector[], int tamano);
    void copiar(int vectorOrigen[], int vectorDestino[], int tamano);
    
    void burbuja(int vector[], int tamano);
    void burbuja2(int vector[], int tamano);
    void seleccion(int vector[], int tamano);
    void insercion(int vector[], int tamano);
};

#endif