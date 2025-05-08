#include <iostream>
#include <string>
#include "Musico.h"
using namespace std;
Musico::Musico(string nombre): Persona(nombre){
    this->cantInstrumentos = 0;
}

void Musico::setInstrumento(string _instrumento){
    instrumento = _instrumento;
}

void Musico::imprimir(ostream& os){
    os<<"Nombre: "<< nombre<<endl;
    os<<"Instrumento: "<< instrumento<<endl;
    if (edad == 0)
    {
        os<< "La edad no ha sido asignada"<<endl;
    }
    else
    {
        os<< "La edad es: " << this->edad;
    }
    
    
	os << endl;
    os<<"Cantidad de instrumentos: "<< this->cantInstrumentos<<endl;
}

void Musico::setCantInstrumentos(int _cantInstrumentos){
    this->cantInstrumentos = _cantInstrumentos;
    cuantas_instrumentos();
}
int Musico::cuantas_instrumentos() const {
    if (cantInstrumentos<0)
  {
    throw 1;
  }
  return cantInstrumentos;
}
