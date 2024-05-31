#ifndef PASAJERO_H
#define PASAJERO_H

#include "Asiento.h"
#include <string>

using namespace std;

class Pasajero {
public:
    Pasajero();
    void setNombre(const string& nombre);
    void setTelefono(const string& telefono);
    void registrarPasajero(bool esTrabajo);
    Asiento* getAsiento() const;

private:
    string nombre;
    string telefono;
    Asiento* asiento;
};

#endif // PASAJERO_H
