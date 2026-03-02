#include <iostream>
#include "InversionArreglo.h"

using namespace std;

int main() {
    int tamano;
    cout << "BIENVENIDO A NUESTRO PROGRAMA QUE INVIERTE ARREGLOS" << endl;
    cout << endl;

    cout << "Presiona Enter para continuar...";
    cin.get();


    do {
        cout << "Ingrese el tamano del arreglo |max 20|: ";
        cin >> tamano;
    } while (tamano <= 0 || tamano > 20);

    int original[20];
    int invertido[20];

    system("cls");

    cout << "Ingrese los valores del arreglo:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> original[i];
    }

    system("cls");

    InversionArreglo inverso;
    inverso.invertir(original, invertido, tamano);

    // Mostrar original
    cout << "Mostrando Arreglo original:"<<endl;
    for (int i = 0; i < tamano; i++) {
        cout << original[i] << " ";
    }
    cout << endl;
    // Mostrar invertido
    cout << " Arreglo invertido:"<<endl;
    for (int i = 0; i < tamano; i++) {
        cout << invertido[i] << " ";
    }

    return 0;
}