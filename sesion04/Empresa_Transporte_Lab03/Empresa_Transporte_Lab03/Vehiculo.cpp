#include "Vehiculo.h"
#include <iostream>

namespace EIF201 {

	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje)
		: placa(placa), marca(marca), anio(anio), kilometraje(kilometraje) {

	}
      
	std::string Vehiculo::getPlaca()const {
		return placa;
	}

	std::string Vehiculo::getMarca()const {
		return marca;
	}

	int Vehiculo::getAnio()const {
		return anio;
	}

	double Vehiculo::getKilometraje()const {
		return kilometraje;
	}

	bool Vehiculo::getActivo()const {
		return activo;
	}

	void Vehiculo::registrarKilometros(double km) {
		if (km <= 0) {
			std::cout << "Error: Kilometros invalidos" << std::endl;
			return;
		}

		if (!activo) {
			std::cout << "ERROR:El vehiculo esta fuera de servicio" << std::endl;
		}

		kilometraje = kilometraje + km;

	}

	void Vehiculo::desactivar() {
		if (!activo) {
			std::cout << "El vehiculo esta fuera de Servicio" << std::endl;
			return;
		}

		activo = false;
	}

	void Vehiculo::reactivar() {
		if (activo) {
			std::cout << "El vehicuo se encuentra Activo" << std::endl;
			return;
		}
		
		activo = true;
	}

	void Vehiculo::mostrar()const {
		std::cout << "Placa:" << placa << std::endl;
		std::cout << "Marca:" << marca << std::endl;
		std::cout << "Anio:" << anio << std::endl;
		std::cout << "Kilometraje:" << kilometraje << std::endl;
		std::cout << "Estado: ";
		
			
		if (activo) {
			std::cout << "Activo";
		}
		else {
			std::cout << "Fuera de Servicio";
		}

		std::cout << std::endl;


	}












}
