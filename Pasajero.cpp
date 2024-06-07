#include "Pasajero.h"
#include "Trabajo.h"
#include "Premier.h"

// Constructor por defecto
Pasajero::Pasajero() : asiento(nullptr) {}

// Establece el nombre del pasajero
void Pasajero::setNombre(const string& nombre) {
    this->nombre = nombre;
}

// Establece el teléfono del pasajero
void Pasajero::setTelefono(const string& telefono) {
    this->telefono = telefono;
}

// Registra el pasajero con un tipo de asiento (Trabajo o Premier)
void Pasajero::registrarPasajero(bool esTrabajo) {
    if (esTrabajo) {
        asiento = new Trabajo();
    } else {
        asiento = new Premier();
    }
}

// Obtiene el asiento del pasajero
Asiento* Pasajero::getAsiento() const {
    return asiento;
}
