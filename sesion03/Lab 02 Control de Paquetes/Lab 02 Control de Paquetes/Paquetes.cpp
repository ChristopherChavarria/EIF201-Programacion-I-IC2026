#include "Paquetes.h"
#include <iostream>

double* crearRegistros(int& cantidad) {
	do {
		std::cout << "Ingrese la cantidad de paquetes: ";
		std::cin >> cantidad;
	} while (cantidad <= 0);

	double* pesos = new double[cantidad];
	return pesos;

}

void ingresarPesos(double* pesos, int cantidad)
{
	for (int i = 0; i < cantidad; i++) 
	{
		do {
			std::cout << "Ingrese el peso del paquete " << (i + 1) << ": ";
			std::cin >> pesos[i];
			
		} while (pesos[i] <= 0);
	}
}



double calcularPesoTotal(const double* pesos, int cantidad) 
{
	double total = 0.0;
	for (int i = 0; i < cantidad; i++) {
		total += pesos[i];
	}
	return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) 
{
	int contadorLimite = 0;
	for (int i = 0; i < cantidad; i++)
	{
		if (pesos[i] > limite)
		{
			contadorLimite++;
		}		
	}
	return contadorLimite;
}

const double* buscarMasPesado(const double* pesos, int cantidad) 
{
	int pesosMasPesado = 0;
	for (int i = 1; i < cantidad; i++) 
	{
		if(pesos[i] > pesos[pesosMasPesado])
		{
			pesosMasPesado = i;
		}
	}
	return &pesos[pesosMasPesado];
}