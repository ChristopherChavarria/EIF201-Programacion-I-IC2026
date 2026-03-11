#include <iostream>
using namespace std;
#include "Paquetes.h"

int main()
{
	int cantidad;
	double limite;

	double* pesos = crearRegistros(cantidad);

	ingresarPesos(pesos, cantidad);

	cout << "Ingrese el limite de peso: ";
	cin >> limite;

	double pesoTotal = calcularPesoTotal(pesos, cantidad);

	cout << "Peso total de los paquetes: " << pesoTotal << endl;

	int paquetesSobreLimite = contarSobreLimite(pesos, cantidad, limite);

	cout << "Cantidad de paquetes sobre el limite: " << paquetesSobreLimite << endl;

	const double* paqueteMasPesado = buscarMasPesado(pesos, cantidad);


	cout << "El paquete mas pesado pesa: " << *paqueteMasPesado << endl;

	delete[]pesos;
	pesos = nullptr;

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
