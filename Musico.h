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
