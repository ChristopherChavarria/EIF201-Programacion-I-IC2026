#ifndef MATRIZ3X3_H
#define MATRIZ3X3_H
#include <cstddef>

class Matriz3x3 {
private:
    static const int FIL = 3;
    static const int COL = 3;

    int matriz[FIL][COL];

public:
    void leerMatriz();
    void imprimirMatriz() const;
    void sumaFilasMatriz() const;
    void sumaColumnasMatriz() const;
    int sumaDiagonalMatriz() const;
};

#endif
