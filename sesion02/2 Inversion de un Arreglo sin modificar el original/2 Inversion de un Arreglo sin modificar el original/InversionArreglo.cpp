#include "InversionArreglo.h"

void InversionArreglo::invertir(const int original[], int invertido[], int tam) {
    int j = tam - 1;

    for (int i = 0; i < tam; i++) {
        invertido[j] = original[i];
        j--;
    }
}