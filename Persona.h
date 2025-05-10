/*
	Clase: 	Persona
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Persona

	Responsabilidades:
	- Representar a una persona con atributos básicos como nombre y edad.
	- Permitir establecer y mostrar información personal.
	- Servir como clase base para otras entidades como Cantante, Espectador y Musico.

	Colaboradores: Ninguno directamente, pero es superclase de Cantante, Musico y Espectador.

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia 
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co
	Fecha: Abril 2025
*/

#ifndef _PERSONA_H_
#define _PERSONA_H_
#include <iostream>
#include <string>
using namespace std;
class Persona{
    protected:
        string nombre;
	    int edad;
    public:
        Persona(string nombre );
        ~Persona();
        virtual void imprimir(ostream& os);
        string getNombre();
        void setEdad(int edad);
};
#endif // _PERSONA_H_
