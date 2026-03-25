#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
namespace EIF201 {


	class Producto
	{
	private:
		std::string nombre;
		double precio;
		int stock;
		std::string codigo;
	public:
		Producto(std::string nombre, double precio, int stock, std::string codigo);

		//Getters
		std::string getNombre() const;
		double getPrecio() const;
		int getStock() const;
		std::string getCodigo() const;

		//Setters
		void setPrecio(double nuevoiPrecio);
		void setStock(int nuevoStock);
		void setNombre(const std::string nombre);

		//Mostrar informacion
		void mostrar() const;
		bool vender(int cantidad);


	};



}


#endif
