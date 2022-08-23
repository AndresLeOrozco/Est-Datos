#include <iostream>
#include <fstream>
#include "palabras.h"
int main() {
	Palabras pal (10);

	std::string p1 = " Hola ";
	std::string p2 = " Como ";
	std::string p3 = " Esta ";
	
	pal.AgregarPalabra("Hola");
		
	pal.AgregarPalabra("Como");

	pal.AgregarPalabra("Esta");
	
	cout << pal.toString() << endl;
	
	return 0;
}