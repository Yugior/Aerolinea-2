#include "Trabajo.h"

using namespace std;

Trabajo::Trabajo() : bebidas(""), entretenimiento("") {}

string Trabajo::getBebidas() const {
    return bebidas;
}

void Trabajo::setBebidas(const string& nuevasBebidas) {
    bebidas = nuevasBebidas;
}

string Trabajo::getEntretenimiento() const {
    return entretenimiento;
}

void Trabajo::setEntretenimiento(const string& nuevoEntretenimiento) {
    entretenimiento = nuevoEntretenimiento;
}

void Trabajo::elegirAsiento(double costo) {
    // Implementar lógica específica para elegir asiento de trabajo
}

