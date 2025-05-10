#include "Persona.h"
#include <iostream>
#include <string>
#include "Musico.h"
#include "Cantante.h"
#include "Espectador.h"
using namespace std;
// g++ main.cpp Persona.cpp Musico.cpp Cantante.cpp Espectador.cpp -o prog
/*
Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia 
Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co
*/
int main(){
	//1. Instanciar un objeto con ""
	Persona persona("Juan");// se intancia un objeto persona
	persona.imprimir(cout);
	//2. Instanciar al musico santana, set instrumento e imprimir

	Musico santana ("Santana");
	santana.setInstrumento("Guitarra");
	santana.setCantInstrumentos(2);
	santana.imprimir(cout);
  	//3. Instanciar a la persona santana 
/*
	Persona santana ("Santana");
	//santana.setInstrumento("Guitarra");
	santana.imprimir(cout);

	3.1 Manda error, ya que esta tratando de usar metodos de la clase hija, y esto es incorrecto,
pues en la herencia existe una relacion unidireccional, es decir, la clase hija hereda de la padre pero
la padre no hereda nada de la hija, no puede usar ningun metodo de la hija, y esto es lo que esta intentando
hacer el objeto santana pero de la clase Persona. Ademas hay un problema con la declaracion de los objetos,
 pues estamos declarando dos obetos santana y de clases diferentes y eso genera un conflico.
Ademas vemos que el imprimir que se ejecuta para un objeto bien instanciado de Persona  nos muestra lo mismo
que hace el metodo de Musico y no lo que hace el imprimir de Persona  originalmente.
*/ 
	//4. Instanciar a la cantante shakira y su nombre artistico

	Cantante shakira ("Shakira Mebarak");
	shakira.setCantaBien(false);
	shakira.setNombreArtistico("shakira");
	shakira.imprimir(cout);

	//5. Atributos edad incluidos en Cantante y Musico por medio de herencia, la clase Persona hereda a las clases ese atributo
	shakira.setEdad(45);
	shakira.imprimir(cout);
	santana.setEdad(45);
	santana.imprimir(cout);
	//6. Atributo de cantidad de instrumentos en Musico, y el metodo cuantas_instrumentos() que lanza una excepcion si es menor a 0
	santana.setCantInstrumentos(2);
	santana.imprimir(cout);
	/*7. Metodos virtual ya implementados. Lo que sucede es que el virtual nos permite hacer un polimorfismo. Musico y Cantante heredan el atributo de imprimir de persona
	pero como el metodo de imprimir es virtual, nos permite ejecutarlo de manera diferente en cada una de las clases hijas. Esto se conoce como polimorfismo: Poder llamar a la misma
	accion pero que tendra diferentes resultados dependiendo de la clase la cual ejecute, como un perro o una ballena, ambos animales comen o se mueven, pero de manera diferente.
	
	*/
	//8. Implementacion de la clase espectador, que hereda de persona, y tiene un atributo gusto, que indica si le gusta o no el reggaeton
	Espectador espectador("Juanito");
	espectador.setGustarBanda(true);
	espectador.imprimir(cout); 
}


