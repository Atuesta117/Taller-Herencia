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
