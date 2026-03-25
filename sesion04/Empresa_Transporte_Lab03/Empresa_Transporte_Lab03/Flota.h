#ifndef FLOTA_H
#define FLOTA_H

#include "Vehiculo.h"
#include <string>


namespace EIF201 
{
class Flota
{
private:
	Vehiculo** vehiculos;
	int cantidad;
	int capacidad;

	void redimensionar();

public:
	Flota(int capacidad = 3);
	~Flota();

	void agregar(Vehiculo* nuevo);
	Vehiculo* buscarPorPlaca(std::string placa);
	void mostrarPorMarca(std::string marca);
	bool eliminar(std::string placa);
	int contarActivos();
	void mostrarTodos();

};


}


#endif
