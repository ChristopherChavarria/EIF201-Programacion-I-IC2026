#include "NombreCompleto.h"

void NombreCompleto::leerNombre(){
	cout << "Ingrese su nombre completo: ";
	getline(cin, nombreCompleto);
}

string NombreCompleto::RecibirPrimerNombre(){
	size_t espacio = nombreCompleto.find(' ');
	if (espacio != string::npos) {
		return nombreCompleto.substr(0, espacio);
	}
	return nombreCompleto; 
}

string NombreCompleto::RecibirPrimerApellido(){
	size_t espacio = nombreCompleto.find(' ');
	if (espacio != string::npos) {
		return nombreCompleto.substr(espacio + 1);
	}
	return ""; 
}

int NombreCompleto::contarVocales() {
	int contador = 0;

	for (size_t i = 0; i < nombreCompleto.length(); i++) {
		char c = nombreCompleto[i];

		if (c == 'a' || c == 'A' ||
			c == 'e' || c == 'E' ||
			c == 'i' || c == 'I' ||
			c == 'o' || c == 'O' ||
			c == 'u' || c == 'U') {
			contador++;
		}
	}

	return contador;
}

string NombreCompleto::convertirMayusculas()
{
	string copiaNombre = nombreCompleto;

	for (size_t i = 0; i < copiaNombre.length(); i++) 
	{
		copiaNombre[i] = toupper(copiaNombre[i]);
	}

	return copiaNombre;
}

size_t NombreCompleto::obtenerLongitud() 
{
	return nombreCompleto.length();
}