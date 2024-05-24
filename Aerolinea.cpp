#include "Aerolinea.h"

Aerolinea::Aerolinea() : aerolinea(""), vuelo(""), fecha(""), avion(""), tipoServicios("") {}

void Aerolinea::seleccionarAerolinea() {
    cout << "Seleccione la aerolínea: ";
    cin >> aerolinea;
}

void Aerolinea::seleccionarVuelo() {
    cout << "Seleccione el vuelo: ";
    cin >> vuelo;
}

void Aerolinea::seleccionarFecha() {
    cout << "Seleccione la fecha: ";
    cin >> fecha;
}

void Aerolinea::seleccionarAvion() {
    cout << "Seleccione el avión: ";
    cin >> avion;
}

void Aerolinea::seleccionarTipoServicios() {
    cout << "Seleccione el tipo de servicios: ";
    cin >> tipoServicios;
}

void Aerolinea::imprimirSeleccion() const {
    cout << "Aerolínea: " << aerolinea << endl;
    cout << "Vuelo: " << vuelo << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Avión: " << avion << endl;
    cout << "Tipo de servicios: " << tipoServicios << endl;
}
