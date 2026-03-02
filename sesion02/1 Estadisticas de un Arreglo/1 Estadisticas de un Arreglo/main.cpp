#include <iostream>
#include "Estadistica.h"

using namespace std;

int main() {
    int datos[TAMANO];

    cout << "Ingrese los siguientes datos: " << endl;

    for (size_t i = 0; i < TAMANO; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> datos[i];
    }

    
    Estadistica estadistica(datos, TAMANO);

    cout << "A continuacion se muestran las estadisticas de los datos ingresados por el usuario:" << endl;
    cout << "Suma->" << estadistica.calcularSuma() << endl;
    cout << "Promedio-> " << estadistica.calcularPromedio() << endl;
    cout << "Mayor-> " << estadistica.encontrarMayor() << endl;
    cout << "Menor-> " << estadistica.encontrarMenor() << endl;

    return 0;
}