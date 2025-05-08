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
