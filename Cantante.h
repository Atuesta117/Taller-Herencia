/*
	Clase: 	Cantante
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

	Información CRC:

	Clase: Cantante

	Responsabilidades:
	- Representar a un cantante, heredando atributos de una persona.
	- Almacenar si canta bien o no.
	- Almacenar el nombre artístico del cantante.
	- Mostrar en pantalla los datos relevantes del cantante, incluyendo nombre, edad y habilidades musicales.

	Colaboradores:
	- Persona (clase base de la cual hereda nombre y edad).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co
	Fecha: Mayo 2025
*/

#ifndef CANTANTE_H
#define CANTANTE_H
#include <iostream>
using namespace std;
#include <string>
#include "Persona.h"
class Cantante : public Persona{
	private:
	bool cantaBien;
	string nombreArtistico;
	public:
	Cantante(string nombre);
	void setCantaBien(bool _cantaBien);
	void setNombreArtistico(string _nombreArtistico);
	void imprimir (ostream& os);
};


#endif //CANTANTE_H
