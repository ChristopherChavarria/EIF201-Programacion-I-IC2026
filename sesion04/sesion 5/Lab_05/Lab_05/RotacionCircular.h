#ifndef ROTACION_CIRCULAR_H
#define ROTACION_CIRCULAR_H
#include "NodoLocutor.h"

namespace EIF201 {

	class RotacionCircular {
	private:
		NodoLocutor* cola;
		int cantidad;
		NodoLocutor* getCabeza()const;
	public:
		RotacionCircular();
		~RotacionCircular();

        void insertarAlFinal(const string& nombre);

        // Incorpora un locutor al inicio (se convierte en la nueva cabeza)
        void insertarAlInicio(const string& nombre);

        // Inserta un nuevo locutor justo despues del locutor de referencia.
        // Retorna false si la referencia no existe.
        bool insertarDespuesDe(const string& referencia, const string& nuevo_nombre);

        // Busqueda
        // Verifica si un locutor esta en la rotacion.
        bool existeLocutor(const string& nombre) const;

        // Retorna la posicion (0-indexed desde la cabeza), -1 si no existe.
        int obtenerPosicion(const string& nombre) const;

        // Retorna el nombre del locutor que tiene el turno actual (cabeza).
        string turnoActual() const;

        // eliminacion
        // Elimina un locutor de la rotacion por nombre.
        bool eliminarLocutor(const string& nombre);

        // Elimina al locutor que tiene el turno actual (la cabeza).
        bool eliminarTurnoActual();

        // Rotacion y recorrido
        // Avanza al siguiente turno y retorna el nombre del nuevo turno activo.
        string siguiente();

        // Simula n turnos imprimiendo que locutor corresponde a cada uno.
        void simularTurnos(int n);

        // Imprime la rotacion completa empezando desde la cabeza.
        void imprimirRotacion() const;

        int getCantidad() const;
        bool estaVacia() const;
    };
}
#endif