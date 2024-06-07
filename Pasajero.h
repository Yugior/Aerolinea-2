#ifndef PASAJERO_H
#define PASAJERO_H

#include "Asiento.h"
#include <string>

using namespace std;

// Clase para representar a un pasajero
class Pasajero {
public:
    Pasajero();
    void setNombre(const string& nombre);
    void setTelefono(const string& telefono);
    // Registra el pasajero con un tipo de asiento (Trabajo o Premier)
    void registrarPasajero(bool esTrabajo);
    // Obtiene el asiento del pasajero
    Asiento* getAsiento() const;

private:
    string nombre;
    string telefono;
    Asiento* asiento;
};

#endif // PASAJERO_H

