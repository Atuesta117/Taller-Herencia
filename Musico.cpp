#include <iostream>
#include <string>
#include "Musico.h"
using namespace std;
Musico::Musico(string nombre): Persona(nombre){

}

void Musico::setInstrumento(string _instrumento){
    instrumento = _instrumento;
}

void Musico::imprimir(ostream& os)const{
    os << "Musico: "<<nombre<< endl<<"Intrumento: "<< instrumento;
}
