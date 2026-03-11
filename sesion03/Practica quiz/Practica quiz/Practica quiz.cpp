#include <iostream>
using namespace std;

int main() {

	cout << "Ejercicio 1: " << endl;
	cout << endl;
	
		int arreglos[5] = { 8, 3, 12 ,5, 9 };

		int mayor = arreglos[0];
		for (int i = 0; i < 5; i++) {
			if (mayor < arreglos[i]) {
				mayor = arreglos[i];

			}
		}
		cout << "El mayor es: " << mayor << endl;

		int menor = arreglos[0];
		for (int i = 0; i < 5; i++) {
			if (menor > arreglos[i]) {
				menor = arreglos[i];

			}
		}
		cout << "El menor es: " << menor << endl;

		string nombreCompleto = "Christopher Chavarria";
		int longitud = nombreCompleto.length();
		cout << "La longitud del nombre completo es: " << longitud << endl;
		cout << "Las primeras 3 letras de mi nombre son: " << nombreCompleto.substr(0, 3) << endl;	
		cout << endl;


		cout << "Ejercicio 2: " << endl;
		cout << endl;

	int a = 10;
	int b = 20;

	int* p = &a; //Puntero que apunta a la direccion de la variable entera a
	*p = 50; // al tener la direccion de memoria, puedo cambiarle el valor

	cout << "El valor de a es: " << *p << endl;

	int* arreglo = new int[3];//Cree un arreglo dinamico de enteros
	arreglo[0] = 100;
	arreglo[1] = 200;
	arreglo[2] = 300;

	for (int i = 0; i < 3; i++) {
		cout << "El valor del arreglo en posicion " << i << " es: " << arreglo[i] << endl;
	}
	cout << endl;

	delete[]arreglo;
	arreglo = nullptr;


	cout << "Ejercicio 3: " << endl;
	cout << endl;

	int N;
	cout << "Ingrese un numero entero: ";
	cin >> N;

	int* arreglo3 = new int[N];

	for (int i = 0; i < N; i++) {
		arreglo3[i] = i + 1; // i+1 porque me pide que inicie con 1 no con 0
	}

	for (int i = 0; i < N; i++) {
		cout << "El valor del arreglo3 en posicion " << i << " es: " << arreglo3[i] << endl;
	}

	delete[]arreglo3;
	arreglo3 = nullptr;

	return 0;
}