/**
* @file Espectador.cpp
* @brief Implementación de la clase Espectador que hereda de Persona.
*
* @details
* Este archivo contiene la implementación de la clase Espectador. Un espectador es una persona 
* que puede indicar si le gusta o no una banda. Esta clase permite establecer esta preferencia 
* y mostrarla junto con el nombre del espectador.
*
* @project Herencia y Polimorfismo
* @course Fundamentos de Programación Orientada a Objetos (FPOO)
* @institution Universidad del Valle
*
* @authors
* - Juan Jose Atuesta - atuesta.juan@correounivalle.edu.co
* - David Alejandro Garcia - david.grueso@correounivalle.edu.co
* - Sergio Garcia Ramos - sergio.garcia.ramos@correounivalle.edu.co
* - Paula Mariana Murillo - murillo.paula@correounivalle.edu.co
*
* @date Mayo 2025
*/

#include "Espectador.h"
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
Espectador::Espectador(string nombre): Persona(nombre)
{
  this->gusto=true;
}

Espectador::~Espectador()
{

}

void Espectador::setGustarBanda(bool gusto)
{
  this->gusto=gusto;
}


void Espectador::imprimir(ostream &os)
{
	os<<"El nombre es:"<< this->getNombre();
	os<< endl;
  if (gusto==false)
  {
    os <<"No le gusta la banda" << endl;
  }else os <<"Le gusta la banda" << endl;

}