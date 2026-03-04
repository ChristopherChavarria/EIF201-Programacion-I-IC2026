#include <iostream>
using namespace std;
/*

void tempMostrar(int* temp) {
	std::cout << "Temp desde la funcion: " << *temp << std::endl;
	*temp = 24;
}

*/


/*
int main()
{

	int temp = 35;

	int* ptemp = &temp;// ptemp es un puntero que almacena la dirección de memoria de temp

	*ptemp = 36;//modificando el valor de temp a través del puntero ptemp

	temp = 40;//modificando el valor de temp directamente

	tempMostrar(&temp);
	std::cout <<  &temp << std::endl; //imprime la dirección de memoria de temp
	std::cout << "Desde el main"<<temp << std::endl; //imprime el valor de temp
	std::cout << *ptemp;


	return 0;
}
*/



// Datos de prueba
// int datos[6] = {10, 30, 50, 20, 40, 60};
// Tarea A: imprima todos los elementos usando *(arr + i)
void imprimirTodo(int* arr, int n) {
	cout << "Elementos del arreglo: ";
	for(int i=0; i < n; i++){
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
// Tarea B: retorne el valor máximo usando aritmética de punteros
int encontrarMaximo(int* arr, int n) {
	cout << "Encontrando el maximo del arreglo: ";
	int max = *arr;
	for(int i=1; i < n; i++){
		if (*(arr + i) > max) {
			max = *(arr + i);

	    } 
	}
	return max;
}


// Tarea C: invierta el arreglo in-place usando dos punteros, uno al inicio, otro al final
void invertir(int* arr, int n) {


	/*
int temporal = 0;
	int* arrInicio = arr;
	int* arrFin = arr + (n - 1);
	while (arrInicio < arrFin) {
		temporal = *arrInicio;
		*arrInicio = *arrFin;
		*arrFin = temporal;
		arrInicio++;
		arrFin--;

*/


	/*
	int k = n - 1;
	int temporal = 0;

	for(int i=0; i < n; i++){
		if (i < k) {
			 temporal = *(arr + i);
			*(arr + i) = *(arr + k);
			*(arr + k) = temporal;
			k--;
		}
	
	}
	*/

	int* izq = arr;
	int* der = arr + (n - 1);

	while (izq < der) 
	{
		int temp = *izq;
		*izq = *der;
		*der = temp;
		izq++;
		der--;
	}

	
	
}

int main() {
	int datos[6] = { 10, 30, 50, 20, 40, 60 };
	imprimirTodo(datos, 6);
	// esperado: 10 30 50 20 40 60
	cout<< encontrarMaximo(datos, 6) << endl;
	// esperado: 60
	invertir(datos, 6);
	imprimirTodo(datos, 6); // esperado: 60 40 20 50 30 10
	return 0;
}



