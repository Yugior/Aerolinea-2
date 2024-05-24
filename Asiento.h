#ifndef ASIENTO_H
#define ASIENTO_H

#include <string>

using namespace std;

// Declaración adelantada de las clases Trabajo y Premier
class Trabajo;
class Premier;

class Asiento {
protected:
    double costo;

public:
    // Constructor por defecto
    Asiento();

    // Método virtual para elegir asiento
    virtual void elegirAsiento(double costo) = 0;

    // Getter
    double getCosto() const;
};

#endif // ASIENTO_H
