/**
* @file Cantante.cpp
* @brief Implementación de la clase Cantante que hereda de Persona.
*
* @details
* Este archivo define la implementación de la clase Cantante. Un cantante es una persona 
* que tiene un nombre artístico y una habilidad para cantar que puede evaluarse. 
* La clase permite establecer y mostrar esta información.
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
* @date Abril 2025
*/

#include "Cantante.h"
#include "Persona.h"
using namespace std;

Cantante::Cantante(string nombre):Persona(nombre){
this->nombreArtistico = "nn";
this->cantaBien=true;

}

void Cantante::setNombreArtistico(string _nombreArtistico) 
{
  this->nombreArtistico = _nombreArtistico;
}

void Cantante::setCantaBien(bool _cantaBien) 
{
  this->cantaBien = _cantaBien;
}

void Cantante::imprimir(ostream &os)
{
	
	os<<"El nombre es:"<< this->getNombre();
	os << endl;
	os<<"El nombre aritistico es:" <<this->nombreArtistico;
	os << endl;
	if (edad == 0)
    {
        os<< "La edad no ha sido asignada"<<endl;
    }
    else
    {
        os<< "La edad es: " << this->edad;
    }
	os << endl;
	if(cantaBien) os<<"Canta bien" <<endl;
	else os<<"Canta mal" <<endl;
	
}
