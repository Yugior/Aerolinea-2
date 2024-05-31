#include "Pasajero.h"
#include "Trabajo.h"
#include "Premier.h"

Pasajero::Pasajero() : asiento(nullptr) {}

void Pasajero::setNombre(const string& nombre) {
    this->nombre = nombre;
}

void Pasajero::setTelefono(const string& telefono) {
    this->telefono = telefono;
}

void Pasajero::registrarPasajero(bool esTrabajo) {
    if (esTrabajo) {
        asiento = new Trabajo();
    } else {
        asiento = new Premier();
    }
}

Asiento* Pasajero::getAsiento() const {
    return asiento;
}
