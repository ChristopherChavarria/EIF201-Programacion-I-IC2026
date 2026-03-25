#include "Inventario.h"
#include <iomanip>

namespace EIF201 {

	//Constructor

	Inventario::Inventario(int cantidadInicial) :cantidad(0), capacidad(cantidadInicial) {
		productos = new Producto * [cantidadInicial];

		for (int i = 0; i < capacidad; i++) {
			productos[i] = nullptr;
		}
	}
	 
	Inventario::~Inventario() {
		for (int i = 0; i < cantidad; i++) {
			delete productos[i];
			productos[i] = nullptr;
		}

		delete[]productos;
		productos = nullptr;
		std::cout << "Inventario destruido." << std::endl;
	}

	void Inventario::redimensionar() {
		int nuevaCapacidad = capacidad * 2;

		Producto** nuevoArreglo = new Producto * [nuevaCapacidad];

		for (int i = 0; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = productos[i];
		}
		//Inicislizar las posiciones nuevas
		for (int i = cantidad; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = nullptr;
		}

		delete[]productos;

		productos = nuevoArreglo;

		capacidad = nuevaCapacidad;
	}

	void Inventario::agregar(Producto* nuevo) {
		if (nuevo == nullptr) {
			std::cout << "Error";
			return;
		}

		if (cantidad == capacidad) {
			redimensionar();
		}

		productos[cantidad] = nuevo;
		cantidad++;
	}

	void Inventario::mostrarTodos()const {

		if (cantidad == 0) {
			std::cout << "Error. No data" << std::endl;
			return;
		}

		std::cout << "--------------Inventario--------------" << std::endl;
		for (int i = 0; i < cantidad; i++) {
			productos[i]->mostrar();
		}
		std::cout << "-------------------------------------" << std::endl;

	}

	//BuscarPorCodigo
	Producto* Inventario::buscarPorCodigo(std::string codigo) const {
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				return productos[i];
			}
		}
		return nullptr;
	}
 
	bool Inventario::eliminar(std::string codigo) {
		int posicion = -1; // Variable para almacenar la posición del producto a eliminar
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				posicion = i;
				break;
			}
		}

		if (posicion == -1) {
			std::cout << "Error. Producto no encontrado." << std::endl;
			return false;
		}

		std::string nombreProducto = productos[posicion]->getNombre();
		delete productos[posicion];
		
		for (int i = posicion; i < cantidad - 1; i++) {
			productos[i] = productos[i + 1];
		}
		productos[cantidad - 1] = nullptr;
		cantidad--; //cantidad = cantidad -1;

		std::cout << "Producto " << nombreProducto << " eliminado del inventario." << std::endl;
		return true;

		
	}

	//Total 
	
	int Inventario::getCantidad() const {
		return cantidad;
	}

	double Inventario::calcularValorTotal() const {
		double total = 0.0;

		for (int i = 0; i < cantidad; i++) {
			total += productos[i]->getPrecio() * productos[i]->getStock();
		}

		return total;
	}

	int Inventario::getCapacidad()const {
		return capacidad;
	}

}