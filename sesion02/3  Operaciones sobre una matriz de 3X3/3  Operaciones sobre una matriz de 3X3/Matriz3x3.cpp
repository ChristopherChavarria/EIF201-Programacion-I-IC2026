#include "Matriz3x3.h"
#include <iostream>

using namespace std;

void Matriz3x3::leerMatriz()
{
    for (int i = 0; i < FIL; i++) 
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Digite un elementos de la Matriz [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void Matriz3x3::imprimirMatriz() const
{
    cout << "Matriz:"<<endl;
    for (int i = 0; i < FIL; i++) {
        for (int j = 0; j < COL; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void Matriz3x3::sumaFilasMatriz() const 
{
    for (int i = 0; i < FIL; i++)
    {
        int suma = 0;
        for (int j = 0; j < COL; j++) 
        {
            suma = suma + matriz[i][j];
        }
        cout << "Suma de filas " << i + 1 << ": " << suma << endl;
    }
}

void Matriz3x3::sumaColumnasMatriz() const
{
    for (int j = 0; j < COL; j++)
    {
        int suma = 0;
        for (int i = 0; i < FIL; i++)
        {
            suma = suma + matriz[i][j];
        }
        cout << "Suma de columnas " << j + 1 << ": " << suma << endl;
    }
}

int Matriz3x3::sumaDiagonalMatriz() const
{
    int suma = 0;
    for (int i = 0; i < FIL; i++)
    {
        suma = suma + matriz[i][i];
    }
    return suma;
}