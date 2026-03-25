#include <iostream>
using namespace std;

int main()
{

	int filas, columnas;
	cout << "Ingrese el numero de filas: ";
	cin >> filas;
	cout << "Ingrese el numero de columnas: ";
	cin >> columnas;

	//crear matriz dinamica
	int** matriz = new int* [filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new int[columnas];
	}

	//llenar matriz
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz[i][j] = (i + j) * 10 + (j + 1);
		}
	}

	//imprimir matriz
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] <<" ";
			
		}
		cout << endl;
	}

	//liberar memoria
	
	for (int i = 0; i < filas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
	matriz = nullptr;


	return 0;
}


