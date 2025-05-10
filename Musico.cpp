/**
* @file Musico.cpp
* @brief Implementación de la clase Musico, que hereda de Persona.
*
* @details
* Este archivo contiene la implementación de la clase Musico. Un músico es una persona que
* puede tocar un instrumento y tiene una cantidad específica de instrumentos que sabe tocar.
* La clase permite establecer el instrumento, la cantidad de instrumentos y mostrar esta información.
*
* @project Gestión de Personas y Roles
* @course Fundamentos de Programación Orientada a Objetos (FPOO)
* @institution Universidad del Valle
*
* @authors
* - Juan Jose Atuesta - atuesta.juan@correounivalle.edu.co
* - David Alejandro Garcia - david.grueso@correounivalle.edu.co
* - Sergio Garcia Ramos - sergio.garcia.ramos@correounivalle.edu.co
* - Paula Mariana Murillo - murillo.paula@correounivalle.edu.co
*
* @date Abril 2025
*/

#include <iostream>
#include <string>
#include "Musico.h"
using namespace std;
Musico::Musico(string nombre): Persona(nombre){
    this->cantInstrumentos = 0;
}

void Musico::setInstrumento(string _instrumento){
    instrumento = _instrumento;
}

void Musico::imprimir(ostream& os){
    os<<"Nombre: "<< nombre<<endl;
    os<<"Instrumento: "<< instrumento<<endl;
    if (edad == 0)
    {
        os<< "La edad no ha sido asignada"<<endl;
    }
    else
    {
        os<< "La edad es: " << this->edad;
    }
    
    
	os << endl;
    os<<"Cantidad de instrumentos: "<< this->cantInstrumentos<<endl;
}

void Musico::setCantInstrumentos(int _cantInstrumentos){
    this->cantInstrumentos = _cantInstrumentos;
    cuantas_instrumentos();
}
int Musico::cuantas_instrumentos() const {
    if (cantInstrumentos<0)
  {
    throw 1;
  }
  return cantInstrumentos;
}
