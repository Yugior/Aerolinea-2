#ifndef AEROLINEA_H
#define AEROLINEA_H

#include <iostream>
#include <string>

using namespace std;

class Aerolinea {
private:
    string aerolinea;
    string vuelo;
    string fecha;
    string avion;
    string tipoServicios;

public:
    Aerolinea();

    // Métodos para seleccionar la aerolínea, vuelo, fecha, avión y tipo de servicios
    void seleccionarAerolinea();
    void seleccionarVuelo();
    void seleccionarFecha();
    void seleccionarAvion();
    void seleccionarTipoServicios();

    // Método para imprimir la información seleccionada
    void imprimirSeleccion() const;
};

#endif // AEROLINEA_H
