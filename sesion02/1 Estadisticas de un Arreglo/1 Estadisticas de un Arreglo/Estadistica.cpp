#include "Estadistica.h"

Estadistica::Estadistica(int num[], size_t tamano)
{
	tam = tamano;
	for (size_t i = 0; i < tam; i++) {
		numeros[i] = num[i];
	}

}

 int Estadistica::calcularSuma() {
	 int suma = 0;
	 for (size_t i = 0; i < tam; i++) {
		 suma = suma + numeros[i];
	 }
	 return suma;
 }

 double Estadistica::calcularPromedio() {
	 return calcularSuma() / (double)tam;//converti el tam que estaba en entero a decimal para que me un decimal el resultado del promedio
	 
 }

 int Estadistica::encontrarMayor() {
	 int max = numeros[0];
	 for (size_t i = 1; i < tam; i++) {
		 if (numeros[i] > max) {
			 max = numeros[i];
		 }
	 }
	 return max;
 }

 int Estadistica::encontrarMenor() {

	 int menor = numeros[0];
	 for (size_t i = 1; i < tam; i++) {
		 if (numeros[i] < menor)
		 {
			 menor = numeros[i];
		 }
	 }
	 return menor;
 }