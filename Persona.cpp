/**
* @file Persona.cpp
* @brief Implementación de la clase Persona base para herencia.
*
* @details
* Este archivo implementa los métodos de la clase Persona, que representa un individuo con nombre y edad.
* La clase proporciona métodos para imprimir la información básica de la persona y modificar la edad.
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

#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
Persona::Persona(string nombre):nombre(nombre){
	this->edad = 0;
}

void Persona::imprimir(ostream& os){
	os << "El nombre es: " << this->nombre;
	os << endl;
}
string Persona::getNombre(){
	return this->nombre;
}

Persona::~Persona() {}

void Persona::setEdad(int edad) { this->edad = edad; }