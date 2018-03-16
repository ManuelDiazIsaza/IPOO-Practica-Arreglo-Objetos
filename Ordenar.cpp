/*
  Archivo: ADN.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include"Ordenar.h"
using namespace std;


Ordenar::Ordenar()
{
  // No hace nada
}


void Ordenar::imprimir(int vector[], int tamano)
{
  for(int i=0; i<tamano; i++)
  {
    cout << ((i!=0) ? "," : " ")<< vector[i];
  }
  cout << endl;
}


void Ordenar::copiar(int vectorOrigen[], int vectorDestino[], int tamano)
{
  for(int i=0; i<tamano; i++)
  {
    vectorDestino[i] = vectorOrigen[i];
  }
}

void Ordenar::burbuja(int arreglo[], int tamano)
{
  int comparaciones = 0;
  int intercambios = 0;
  int aux = 0;
  for(int i = 1; i < tamano; ++i) {
      for(int j = 0; j < (tamano - i); ++j) {
         comparaciones++;
         if(arreglo[j] > arreglo[j+1]){
            aux = arreglo[j];
            arreglo[j] = arreglo[j + 1];
            arreglo[j + 1] = aux;
            intercambios++;
         }
      }
    }
  cout << endl << "Comparaciones : " << comparaciones;
  cout << endl << "intercambios : " << intercambios;
}



void Ordenar::burbuja2(int vector[], int tamano)
{
  bool huboCambios;
  int comparaciones = 0;
  int intercambios = 0;
  do
  {  
    huboCambios = false;
    for(int i = 0; i+1 < tamano; i++)
    {
      comparaciones++;
      if(vector[i] > vector[i+1])
      {
        int aux = vector[i+1];
        vector[i+1] = vector[i];
        vector[i] = aux;
        huboCambios = true;
        intercambios++;
      }
    }
  }
  while(huboCambios);
  cout << endl << "Comparaciones : " << comparaciones;
  cout << endl << "intercambios : " << intercambios;
}




void Ordenar::seleccion(int vector[], int tamano){
  int menor = 0;
  int comparaciones = 0;
  int intercambios = 0;
  for (int i = 0 ; i < tamano; i++){
    menor = i;
    for (int j = i+1; j < tamano; j++){
        comparaciones++;
      if(vector[j] < vector[menor]){
        menor = j;
      }
    }
    int aux = vector[i];
    vector[i] = vector[menor];
    vector[menor] = aux;
    intercambios++;
  }
  cout << endl << "Comparaciones : " << comparaciones;
  cout << endl << "intercambios : " << intercambios;
}


void Ordenar::insercion(int vector[], int tamano)
{
    int actual, j;
    int intercambios = 0;
 
    for (int i = 1; i < tamano; i++) {
        actual = vector[i];
        for (j = i; j > 0 && vector[j - 1] < actual; j--) {
            vector[j] = vector[j - 1];
            intercambios++;
        }
        vector[j] = actual;
    }
    //cout << endl << "Comparaciones : " << intercambios;
    //cout << endl << "intercambios : " << intercambios;
}