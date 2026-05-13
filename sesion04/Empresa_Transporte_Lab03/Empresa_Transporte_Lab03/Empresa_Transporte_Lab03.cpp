
#include <iostream>

#include <iostream>
#include "Flota.h"

using namespace EIF201;

int main() {

    Flota flota;
    int opcion;

    do {
        std::cout << std::endl << "===== MENU =====" << std::endl;
        std::cout << "1. Registrar vehiculo" << std::endl;
        std::cout << "2. Buscar vehiculo por placa" << std::endl;
        std::cout << "3. Mostrar vehiculos por marca" << std::endl;
        std::cout << "4. Registrar kilometros" << std::endl;
        std::cout << "5. Desactivar vehiculo" << std::endl;
        std::cout << "6. Reactivar vehiculo" << std::endl;
        std::cout << "7. Eliminar vehiculo" << std::endl;
        std::cout << "8. Mostrar todos todos los vehiculos" << std::endl;
        std::cout << "9. Contar Vehiculos activos" << std::endl;
        std::cout << "10. Salir" << std::endl;
        std::cout << "Seleccione: ";
        std::cin >> opcion;

        switch (opcion) {

        case 1: {
            std::string placa, marca;
            int anio;
            double km;

            std::cout << "Placa: ";
            std::cin >> placa;

            std::cout << "Marca: ";
            std::cin >> marca;

            std::cout << "Anio: ";
            std::cin >> anio;

            std::cout << "Kilometraje: ";
            std::cin >> km;

            Vehiculo* v = new Vehiculo(placa, marca, anio, km);
            flota.agregar(v);

            break;
        }

        case 2: {
            std::string placa;
            std::cout << "Ingrese placa: ";
            std::cin >> placa;

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->mostrar();
            }
            else {
                std::cout << "No encontrado" << std::endl;
            }

            break;
        }

        case 3: {
            std::string marca;
            std::cout << "Ingrese marca: ";
            std::cin >> marca;

            flota.mostrarPorMarca(marca);
            break;
        }

        case 4: {
            std::string placa;
            double km;

            std::cout << "Placa: ";
            std::cin >> placa;

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                std::cout << "Kilometros a agregar: ";
                std::cin >> km;
                v->registrarKilometros(km);
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }

            break;
        }

        case 5: {
            std::string placa;
            std::cout << "Placa: ";
            std::cin >> placa;

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->desactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }

            break;
        }

        case 6: {
            std::string placa;
            std::cout << "Placa: ";
            std::cin >> placa;

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->reactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }

            break;
        }

        case 7: {
            std::string placa;
            std::cout << "Placa: ";
            std::cin >> placa;

            flota.eliminar(placa);
            break;
        }

        case 8:
            flota.mostrarTodos();
            std::cout << std::endl;
            break;

        case 9:
            std::cout << "Activos: " << flota.contarActivos() << std::endl;
            break;

        case 10:
            std::cout << "Saliendo..." << std::endl;
            break;

        default:
            std::cout << "Opcion invalida" << std::endl;
        }

    } while (opcion != 10);

    return 0;
}


