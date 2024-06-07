#include "Premier.h"

using namespace std;

// Constructor por defecto
Premier::Premier() : masaje(""), comida("") {}

// Obtiene el masaje disponible en el asiento premier
string Premier::getMasaje() const {
    return masaje;
}

// Establece el masaje disponible en el asiento premier
void Premier::setMasaje(const string& nuevoMasaje) {
    masaje = nuevoMasaje;
}

// Obtiene la comida disponible en el asiento premier
string Premier::getComida() const {
    return comida;
}

// Establece la comida disponible en el asiento premier
void Premier::setComida(const string& nuevaComida) {
    comida = nuevaComida;
}

//No hay una implementación necesaria por lo que queda vaica
void Premier::elegirAsiento(double costo) {
    
}
