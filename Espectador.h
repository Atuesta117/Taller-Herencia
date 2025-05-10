/*
	Clase: 	Espectador
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Espectador

	Responsabilidades:
	- Representar a un espectador como una persona que puede o no gustarle una banda.
	- Permitir imprimir los datos del espectador y su afinidad con la banda.

	Colaboradores:
	- Persona (superclase).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia 
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co
	Fecha: Abril 2025
*/

#ifndef _ESPECTADOR_H_
#define _ESPECTADOR_H_
#include "Persona.h"
#include <string>

class Espectador : public Persona
{
public:
Espectador(string nombre);
~Espectador();
void setGustarBanda(bool gusto);
void imprimir(ostream &os);

protected:
private:
bool gusto;

};
#endif