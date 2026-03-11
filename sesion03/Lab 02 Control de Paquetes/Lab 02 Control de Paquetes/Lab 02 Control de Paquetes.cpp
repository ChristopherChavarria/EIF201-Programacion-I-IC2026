#include "Paquetes.h"
#include <iostream>
using namespace std;

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

