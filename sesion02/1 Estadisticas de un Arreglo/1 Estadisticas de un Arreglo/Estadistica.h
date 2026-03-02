#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H
#include <cstddef> //Esta biblioteca la use para el size_t

const size_t TAMANO = 10;

class Estadistica
{
private:
    int numeros[TAMANO];
    size_t tam;

public:
    Estadistica(int num[], size_t tam);
    int calcularSuma();
    double calcularPromedio();
    int encontrarMayor();
    int encontrarMenor();
};



#endif
