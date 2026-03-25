#include "Flota.h"
#include <iostream>

namespace EIF201 {

	Flota::Flota(int capacidad) :cantidad(0), capacidad(capacidad){
		vehiculos = new Vehiculo * [capacidad];

		for (int i = 0; i < capacidad; i++) {
			vehiculos[i] = nullptr;
		}

	}

	Flota::~Flota() {
		for (int i = 0; i < cantidad; i++) {
			delete vehiculos[i];
			vehiculos[i] = nullptr;
		}

		delete[]vehiculos;
		vehiculos = nullptr;
		std::cout << "Vehiculos destruido:"<< std::endl;
	}

	void Flota::redimensionar() {
		int nuevaCapacidad = cantidad * 2;

		Vehiculo** nuevoArreglo = new Vehiculo * [nuevaCapacidad];

		for (int i = 0; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = vehiculos[i];
		}
		//Inicializa las posiciones nuevas
		for (int i = cantidad; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = nullptr;
		}

		delete[]vehiculos;
		vehiculos = nuevoArreglo;
		capacidad = nuevaCapacidad;

	}

	void Flota::agregar(Vehiculo* nuevo) {
		if (nuevo == nullptr){
			std::cout<<"ERROR";
			return;
		}

		if (cantidad == capacidad) {
			redimensionar();
		}

		vehiculos[cantidad] = nuevo;
		cantidad++;
	}

	Vehiculo* Flota::buscarPorPlaca(std::string placa) {
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				return vehiculos[i];
			}
		}
		return nullptr;
	}

	void Flota::mostrarPorMarca(std::string marca) {
		int contador = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getMarca() == marca) {
				vehiculos[i]->mostrar();
				contador++;
			}
		}
		if (contador == 0) {
			std::cout << "No hay vehiculo de esa marca" << std::endl;
		}
		else {
			std::cout << "Total" << contador << std::endl;
		}

	}

	bool Flota::eliminar(std::string placa) {
		int posicion = -1;
		for(int i=0; i < cantidad; i++){
			posicion = i;
			break;
		}

		if (posicion == -1) {
			std::cout << "ERROR. VEHICULO NO ENCONTRADO" << std::endl;
			return false;
		}

		if (vehiculos[posicion]->getActivo()) {
			std::cout << "Debe desactivar el vehiculo primero";
			return false;
		}

		delete vehiculos[posicion];
		
		for (int i = posicion; i < cantidad - 1; i++) {
			vehiculos[i] = vehiculos[i + 1];
		}

		vehiculos[cantidad - 1] = nullptr;
		cantidad--;

		std::cout << "Vehiculo eliminado correctamente" << std::endl;
		return true;

	}

	int Flota::contarActivos() {
		int contador = 0;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getActivo()) {
				contador++;
			}
		}
		return contador;

	}

	void Flota::mostrarTodos()
	{
		if (cantidad == 0) {
			std::cout << "ERROR.NO DATOS" << std::endl;
			return;
		}

		std::cout << "--------------Vehiculos--------------" << std::endl;
		for (int i = 0; i < cantidad; i++) {
			vehiculos[i]->mostrar();
		}
		std::cout << "-------------------------------------" << std::endl;

	}
	

}
