#include <iostream>
#include "Matriz3x3.h"

using namespace std;

int main() {
    Matriz3x3 matriz3x3;   

    matriz3x3.leerMatriz();      
    matriz3x3.imprimirMatriz();  

    cout << endl;
    matriz3x3.sumaFilasMatriz();      
    matriz3x3.sumaColumnasMatriz();  

    cout << "Suma Diagonal: "<< matriz3x3.sumaDiagonalMatriz() << endl;

    return 0;
}
