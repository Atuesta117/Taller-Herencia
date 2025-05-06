#include "Persona.h"
#include <iostream>
#include <string>
#include "Musico.h"
using namespace std;
int main(){
	//1)
	Persona persona("");// se intancia un objeto persona
	//2)
/*
	Musico santana ("Santana");
	santana.setInstrumento("Guitarra");
	santana.imprimir(cout);
*/ 
  	//3)
	Persona santana ("Santana");
	santana.setInstrumento("Guitarra");
	santana.imprimir(cout);
	cout << "prueba"<<endl;
	cout<< "hola mundo"<< endl;
}
