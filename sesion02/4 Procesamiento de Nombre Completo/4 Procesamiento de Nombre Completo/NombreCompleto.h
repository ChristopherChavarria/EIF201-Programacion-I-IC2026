
#include <iostream>
#include <string>
using namespace std;

class NombreCompleto{
private:
	string nombreCompleto;
public:
	void leerNombre();
	string RecibirPrimerNombre();
	string RecibirPrimerApellido();
	int contarVocales();
	string convertirMayusculas();
	size_t obtenerLongitud();

};

