#include "NombreCompleto.h"
#include <iostream>
using namespace std;

int main()
{
	NombreCompleto nombre;

	nombre.leerNombre();
	system("cls");

	cout << "Primer Nombre: " << nombre.RecibirPrimerNombre() << endl;
	cout << "Primer Apellido: " << nombre.RecibirPrimerApellido() << endl;
	cout << "Cantidad de Vocales: " << nombre.contarVocales() << endl;
	cout << "Nombre en Mayusculas: " << nombre.convertirMayusculas() << endl;
	cout << "Longitud del Nombre Completo: " << nombre.obtenerLongitud() << endl;

	

}


