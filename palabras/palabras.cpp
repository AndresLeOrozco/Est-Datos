#include "palabras.h"
#include <fstream>

Palabras::Palabras() : ptrPalabras{ new std::string*[DEFAULT]} {}

Palabras::Palabras(size_t tam) {
	
	t = tam;
	ptrPalabras = new std::string * [t];
	can = 0;
	for (int i = 0; i < t; i++) {
		ptrPalabras[i] = NULL;
	}
}

Palabras::Palabras(const Palabras& p) {
	ptrPalabras = p.ptrPalabras;
	can = p.can;
	t = p.t;
}

Palabras::~Palabras() {
	for (int i = 0; i < can; i++) {
		delete ptrPalabras[i];
	}
	delete[] ptrPalabras;
}

// Retorna un número entero igual o mayor a cero si cargó correctamente
// El número puede representar la cantidad de palabras cargadas
// Retorna -1 si hubo un error 
//int Palabras::CargarDeArchivo(std::string nombre) {
//	//int i = 0;
//	//std::ifstream recupera;
//	//recupera.open(nombre); {
//	//	while (!recupera.eof()) {
//	//		std::string pal;
//	//	/*	getline(pal,'\n')*/
//	//	}
//
//	//}
//}
string Palabras::toString() {
	/*stringstream s;
	for (int i = 0; i < can; i++) {
		if (ptrPalabras[i])
			s << *(ptrPalabras[i]) << endl;
	}
	return s.str();*/
	std::stringstream s;

	for (int i = 0; i < can; ++i) {
		s << *ptrPalabras[i] << std::endl;
	}

	return s.str();
}
void Palabras::enseniaVector() {
	/*for (int i = 0; i < t; i++) {
		if(ptrPalabras[i])
		cout<< *(ptrPalabras[i]) << " ";
	}*/
}
// Retorna un número entero igual o mayor a cero si guardó correctamente
// El número puede representar la cantidad de palabras guardadas
// Retorna -1 si hubo un error 
//int Palabras::GuardarEnArchivo() {
//	std::string nombreArchivo = "Palabras.txt";
//	std::ofstream Guarda;
//	Guarda.open(nombreArchivo); {
//		for (int i = 0; i < can; i++) {
//			Guarda << *ptrPalabras[i] << '\n';
//		}
//		
//	}
//	Guarda.close();
//}

// Almacena una nueva palabra en el vector
void Palabras::AgregarPalabra(std::string palabra) {
	
	if (can < t) {

		ptrPalabras[can++] = &palabra;
		cout << "Palabra Ingresada" << endl;


	}
	
}