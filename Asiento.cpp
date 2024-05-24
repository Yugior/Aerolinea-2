#include "Asiento.h"

using namespace std;

// Constructor por defecto
Asiento::Asiento() : costo(0.0) {}

// Getter
double Asiento::getCosto() const {
    return costo;
}
