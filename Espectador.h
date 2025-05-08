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