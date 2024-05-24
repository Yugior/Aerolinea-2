#ifndef PASAJERO_H
#define PASAJERO_H

#include <string>
#include "Asiento.h"

using namespace std;

class Pasajero {
public:
    Pasajero();
    void setNombre(const std::string& nombre);
    void setTelefono(const std::string& telefono);
    void registrarPasajero(bool esTrabajo);
    Asiento* getAsiento() const;

private:
    string nombre;
    string telefono;
    Asiento* asiento;
};

#endif