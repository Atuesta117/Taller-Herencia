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