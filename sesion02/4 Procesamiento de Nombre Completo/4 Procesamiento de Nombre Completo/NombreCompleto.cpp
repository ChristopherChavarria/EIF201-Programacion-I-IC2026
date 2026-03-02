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

int NombreCompleto::contarVocales(){
	int contadorVocales = 0;
	for (char c : nombreCompleto) 
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		{
			contadorVocales++;
		}
	}
	return contadorVocales;
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