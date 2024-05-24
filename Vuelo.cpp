#include "Vuelo.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Vuelo::Vuelo() : avion(""), fecha(""), vuelo("") {}

// Getters
string Vuelo::getAvion() const {
    return avion;
}

string Vuelo::getFecha() const {
    return fecha;
}

string Vuelo::getVuelo() const {
    return vuelo;
}

// Setters
void Vuelo::setAvion(const string& avion) {
    this->avion = avion;
}

void Vuelo::setFecha(const string& fecha) {
    this->fecha = fecha;
}

void Vuelo::setVuelo(const string& vuelo) {
    this->vuelo = vuelo;
}

// Método para seleccionar vuelo
void Vuelo::selectVuelo(const vector<string>& aviones, const vector<string>& fechas, const vector<string>& vuelos) {
    int opcion;

    cout << "Seleccione el avion:" << endl;
    for (size_t i = 0; i < aviones.size(); ++i) {
        cout << i + 1 << ". " << aviones[i] << endl;
    }
    cout << "Opción: ";
    cin >> opcion;
    cin.ignore(); // Para ignorar el salto de línea después de ingresar el número
    if (opcion > 0 && opcion <= aviones.size()) {
        setAvion(aviones[opcion - 1]);
    } else {
        cout << "Opción no válida. Seleccionando el primer avión por defecto." << endl;
        setAvion(aviones[0]);
    }

    cout << "Seleccione la fecha:" << endl;
    for (size_t i = 0; i < fechas.size(); ++i) {
        cout << i + 1 << ". " << fechas[i] << endl;
    }
    cout << "Opción: ";
    cin >> opcion;
    cin.ignore(); // Para ignorar el salto de línea después de ingresar el número
    if (opcion > 0 && opcion <= fechas.size()) {
        setFecha(fechas[opcion - 1]);
    } else {
        cout << "Opción no válida. Seleccionando la primera fecha por defecto." << endl;
        setFecha(fechas[0]);
    }

    cout << "Seleccione el vuelo:" << endl;
    for (size_t i = 0; i < vuelos.size(); ++i) {
        cout << i + 1 << ". " << vuelos[i] << endl;
    }
    cout << "Opción: ";
    cin >> opcion;
    cin.ignore(); // Para ignorar el salto de línea después de ingresar el número
    if (opcion > 0 && opcion <= vuelos.size()) {
        setVuelo(vuelos[opcion - 1]);
    } else {
        cout << "Opción no válida. Seleccionando el primer vuelo por defecto." << endl;
        setVuelo(vuelos[0]);
    }
}
