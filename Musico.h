/*
	Clase: 	Musico
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Musico

	Responsabilidades:
	- Representar a un músico con su nombre, instrumento que toca y cantidad de instrumentos que domina.
	- Permitir establecer y mostrar estos datos.
	- Validar que la cantidad de instrumentos no sea negativa.

	Colaboradores:
	- Persona (superclase).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia 
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co
	Fecha: Abril 2025
*/

#ifndef _MUSICO_H_
#define _MUSICO_H_
#include <iostream>
#include <string>
using namespace std;
#include "Persona.h"

class Musico: public Persona{
    private:
        string instrumento;
        int cantInstrumentos;
    public:
        Musico(string _nombre);
        void setInstrumento(string _instrumento);
	    void imprimir(ostream& os);
        void setCantInstrumentos(int _cantInstrumentos);
        int cuantas_instrumentos() const ;
};

#endif // _MUSICO_H_
