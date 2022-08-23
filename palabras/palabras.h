#ifndef PALABRAS_H
#define PALABRAS_H
#include <iostream>
#include <string>
#include <sstream>
#define DEFAULT	10
using namespace std;
class Palabras {
public:
	Palabras();
	Palabras(size_t);
	Palabras(const Palabras&);
	~Palabras();
	

	int CargarDeArchivo(std::string);
	int GuardarEnArchivo();
	void AgregarPalabra(std::string);
	void enseniaVector();
	string toString();
private:
	// La clase almacena apuntadores a string, donde se encuentra
	// cada palabra
	std::string** ptrPalabras;
	int t;
	int can;
};

#endif
