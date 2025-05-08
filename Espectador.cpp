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