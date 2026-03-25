#include "Producto.h"
#include <iomanip>

//namespace es como un envoltorio que permite organizar el codigo y evitar conflictos
namespace EIF201 {

	Producto::Producto(std::string nombre, double precio, int stock, std::string codigo) :nombre(nombre),
		precio(precio), stock(stock), codigo(codigo) {
	}

	//Getters
	std::string Producto::getNombre()const {
		return nombre;
	}

	double Producto::getPrecio()const {
		return precio;
	}

	int Producto::getStock() const {
		return stock;
	}

	std::string Producto::getCodigo()const {
		return codigo;
	}

	//Setters

	void Producto::setPrecio(double nuevoPrecio) {
		if (nuevoPrecio >= 0) {
			std::cout << "Error. El precio no puede ser negativo." << std::endl;
		}
		precio = nuevoPrecio;
	}

	void Producto::setStock(int nuevaCantidad) {
		if (nuevaCantidad > 0) {
			std::cout << "Error. El precio no puede ser negativo." << std::endl;
		}
		stock = nuevaCantidad;
	}

	void Producto::mostrar() const {
		std::cout << " [ " << codigo << " ] " << nombre
			<< "| Precio: " << std::fixed << std::setprecision(2) << precio
			<< "| Stock: " << stock << "unidades" << std::endl;

	}

	bool Producto::vender(int cantidad) {
		if (cantidad <= 0) {
			std::cout << "Error. Cantidad invalida." << std::endl;
			return false;
		}

		if (cantidad > stock) {
			std::cout << "Error. No hay suficiente stock para vender "
				<< cantidad << " unidades." << std::endl;
			return false;
		}

		stock -= cantidad;
		std::cout << "Venta realizada correctamente." << std::endl;
		return true;
	}


	void Producto::setNombre(const std::string nuevoNombre) {
		nombre = nuevoNombre;
	}



}
