#include <iostream>
using namespace std;

int main()
{
	/*
	int x = 23;
	int *p = nullptr;

	int 

	*p = &x; // p apunta p

	cout << "Valor de x: " << x << endl;

	*p = 4;

	cout << " Valor del puntero p: " << *p << endl;
	cout << " Direccion de memoria de x: " << &x << endl;

	*/

	int v = 12;

	cout << "valor de v: " << v << endl;

	cout << "V cambia de valor a continuacion: " << endl;
	
	int *s = &v;

	*s = 10;

	cout << " Nuevo valor de v: " << *s << endl;
	cout << "Memory Direction of v: " << &v << endl;
	
	return 0;
}


