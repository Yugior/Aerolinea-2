#include "Premier.h"

using namespace std;

Premier::Premier() : masaje(""), comida("") {}

string Premier::getMasaje() const {
    return masaje;
}

void Premier::setMasaje(const string& nuevoMasaje) {
    masaje = nuevoMasaje;
}

string Premier::getComida() const {
    return comida;
}

void Premier::setComida(const string& nuevaComida) {
    comida = nuevaComida;
}

void Premier::elegirAsiento(double costo) {
   
}
