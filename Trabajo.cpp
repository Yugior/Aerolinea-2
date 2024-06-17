#include "Trabajo.h"

using namespace std;

// Constructor por defecto
Trabajo::Trabajo() : bebidas(""), entretenimiento("") {}

// Obtiene las bebidas disponibles en el asiento de trabajo
string Trabajo::getBebidas() const {
    return bebidas;
}

// Establece las bebidas disponibles en el asiento de trabajo
void Trabajo::setBebidas(const string& nuevasBebidas) {
    bebidas = nuevasBebidas;
}

// Obtiene el entretenimiento disponible en el asiento de trabajo
string Trabajo::getEntretenimiento() const {
    return entretenimiento;
}

// Establece el entretenimiento disponible en el asiento de trabajo
void Trabajo::setEntretenimiento(const string& nuevoEntretenimiento) {
    entretenimiento = nuevoEntretenimiento;
}

// No hay una implementación necesaria por lo que queda vaica
void Trabajo::elegirAsiento(double costo) {
    
}
