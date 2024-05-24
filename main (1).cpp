#include <iostream>
#include <vector>
#include <string>
#include "Pasajero.h"
#include "Trabajo.h"
#include "Premier.h"
#include "Vuelo.h"
#include "Aerolinea.h"

using namespace std;

// Función para mostrar una lista y permitir al usuario seleccionar una opción
template <typename T>
T seleccionarOpcion(const vector<T>& opciones, const string& mensaje) {
    cout << mensaje << endl;
    for (size_t i = 0; i < opciones.size(); ++i) {
        cout << i + 1 << ". " << opciones[i] << endl;
    }
    int seleccion;
    cin >> seleccion;
    return opciones[seleccion - 1];
}

int main() {
    // Listas de opciones
    vector<string> aerolineas = {"Aerolinea 1", "Aerolinea 2", "Aerolinea 3"};
    vector<string> vuelos = {"Vuelo 1", "Vuelo 2", "Vuelo 3"};
    vector<string> fechas = {"01/01/2024", "02/01/2024", "03/01/2024"};
    vector<string> aviones = {"Avion 1", "Avion 2", "Avion 3"};
    vector<string> tiposAsiento = {"Trabajo", "Premier"};
    vector<string> tiposServicios = {"Comida", "Bebidas", "Entretenimiento"};

    // Costos de los asientos
    double costoTrabajo = 500.0;
    double costoPremier = 1500.0;
    // Costos de los servicios
    double costoServicioComida = 50.0;
    double costoServicioBebidas = 30.0;
    double costoServicioEntretenimiento = 40.0;

    // Pedir nombre y teléfono del pasajero
    string nombre, telefono;
    cout << "Ingrese el nombre del pasajero: ";
    cin.ignore(); // Ignorar el salto de línea pendiente
    getline(cin, nombre);
    cout << "Ingrese el teléfono del pasajero: ";
    getline(cin, telefono);

    // Selección de opciones
    string aerolineaSeleccionada = seleccionarOpcion(aerolineas, "Seleccione una aerolínea:");
    string vueloSeleccionado = seleccionarOpcion(vuelos, "Seleccione un vuelo:");
    string fechaSeleccionada = seleccionarOpcion(fechas, "Seleccione una fecha:");
    string avionSeleccionado = seleccionarOpcion(aviones, "Seleccione un avión:");
    string tipoAsientoSeleccionado = seleccionarOpcion(tiposAsiento, "Seleccione un tipo de asiento:");
    
    vector<string> serviciosSeleccionados;
    double costoTotalServicios = 0.0;
    for (const auto& servicio : tiposServicios) {
        cout << "Desea agregar " << servicio << "? (1: Si, 0: No): ";
        int seleccion;
        cin >> seleccion;
        if (seleccion == 1) {
            serviciosSeleccionados.push_back(servicio);
            if (servicio == "Comida") {
                costoTotalServicios += costoServicioComida;
            } else if (servicio == "Bebidas") {
                costoTotalServicios += costoServicioBebidas;
            } else if (servicio == "Entretenimiento") {
                costoTotalServicios += costoServicioEntretenimiento;
            }
        }
    }

    // Imprimir selección
    cout << "\nSelección realizada:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Aerolínea: " << aerolineaSeleccionada << endl;
    cout << "Vuelo: " << vueloSeleccionado << endl;
    cout << "Fecha: " << fechaSeleccionada << endl;
    cout << "Avión: " << avionSeleccionado << endl;
    cout << "Tipo de asiento: " << tipoAsientoSeleccionado << endl;
    cout << "Servicios adicionales: ";
    for (const auto& servicio : serviciosSeleccionados) {
        cout << servicio << " ";
    }
    cout << endl;

    // Crear pasajero y registrar con el tipo de asiento seleccionado
    Pasajero pasajero;
    pasajero.setNombre(nombre);
    pasajero.setTelefono(telefono);

    double costoAsiento = 0.0;
    if (tipoAsientoSeleccionado == "Trabajo") {
        pasajero.registrarPasajero(true);
        costoAsiento = costoTrabajo;
    } else if (tipoAsientoSeleccionado == "Premier") {
        pasajero.registrarPasajero(false);
        costoAsiento = costoPremier;
    }

    // Calcular costo total
    double costoTotal = costoAsiento + costoTotalServicios;

    // Mostrar el costo total
    cout << "Costo total del asiento y servicios: $" << costoTotal << endl;

    // Obtener el asiento del pasajero y mostrar los detalles del asiento
    Asiento* asiento = pasajero.getAsiento();
    if (Trabajo* trabajo = dynamic_cast<Trabajo*>(asiento)) {
        cout << "Asiento de Trabajo - Bebidas: " << trabajo->getBebidas() << endl;
        cout << "Asiento de Trabajo - Entretenimiento: " << trabajo->getEntretenimiento() << endl;
    } else if (Premier* premier = dynamic_cast<Premier*>(asiento)) {
        cout << "Asiento Premier - Masaje: " << premier->getMasaje() << endl;
        cout << "Asiento Premier - Comida: " << premier->getComida() << endl;
    }

    return 0;
}
