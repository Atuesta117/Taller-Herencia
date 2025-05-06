#ifndef _MUSICO_H_
#define _MUSICO_H_
#include <iostream>
#include <string>
using namespace std;
#include "Persona.h"

class Musico: public Persona{
    private:
        string instrumento;
    public:
        Musico(string _nombre);
        void setInstrumento(string _instrumento);
        void imprimir(ostream& os) const;
};

#endif // _MUSICO_H_
