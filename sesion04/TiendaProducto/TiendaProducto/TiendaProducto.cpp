#include "Inventario.h"
#include <iostream>
#include <string>
#include <limits>

int mostrarMenu() {
	std::cout << "-------------- Menu de Inventario ------------------" << std::endl;
	std::cout << "1. Agregar Producto" << std::endl;
	std::cout << "2. Buscar producto por codigo" << std::endl;
	std::cout << "3. Vender unidad de un producto" << std::endl;
	std::cout << "4. Eliminar Producto" << std::endl;
	std::cout << "5. Mostrar Inventario Completo" << std::endl;
	std::cout << "6. Mostrar valor total del inventario" << std::endl;
	std::cout << "7. Salir" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Opcion: ";

	int opcion;
	std::cin >> opcion;

	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Error. Opcion no valida." << std::endl;
		return -1;
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return opcion;
}

int main() {
	EIF201::Inventario tienda(3);

	bool ejecutando = true;

	while (ejecutando) {
		int opcion = mostrarMenu();

		switch (opcion) {
		case 1: {
			std::string nombre, codigo;
			double precio;
			int stock;

			std::cout << "Nombre del Producto: ";
			std::getline(std::cin, nombre);

			std::cout << "Codigo del Producto: ";
			std::getline(std::cin, codigo);

			std::cout << "Stock del Producto: ";
			std::cin >> stock;

			std::cout << "Precio del Producto: ";
			std::cin >> precio;

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			EIF201::Producto* nuevoProducto = new EIF201::Producto(nombre, precio, stock, codigo);
			tienda.agregar(nuevoProducto);
			break;
		}

		case 2: {
			std::string codigoBuscar;
			std::cout << "Ingrese el codigo del producto a buscar: ";
			std::getline(std::cin, codigoBuscar);

			EIF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

			if (encontrado != nullptr) {
				std::cout << "Producto encontrado:" << std::endl;
				encontrado->mostrar();
			}
			else {
				std::cout << "Producto no encontrado." << std::endl;
			}
			break;
		}

		case 3: {
			std::string codigoBuscar;
			int cantidadVender;

			std::cout << "Ingrese el codigo del producto: ";
			std::getline(std::cin, codigoBuscar);

			EIF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

			if (encontrado != nullptr) {
				std::cout << "Ingrese cantidad a vender: ";
				std::cin >> cantidadVender;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				encontrado->vender(cantidadVender);
			}
			else {
				std::cout << "Producto no encontrado." << std::endl;
			}
			break;
		}

		case 4: {
			std::string codigoEliminar;
			std::cout << "Ingrese el codigo del producto a eliminar: ";
			std::getline(std::cin, codigoEliminar);

			tienda.eliminar(codigoEliminar);
			break;
		}

		case 5: {
			tienda.mostrarTodos();
			break;
		}

		case 6: {
			std::cout << "Valor total del inventario: "
				<< tienda.calcularValorTotal() << std::endl;
			break;
		}

		case 7: {
			ejecutando = false;
			std::cout << "Saliendo del programa..." << std::endl;
			break;
		}

		default: {
			std::cout << "Opcion invalida." << std::endl;
			break;
		}
		}
	}

	return 0;
}