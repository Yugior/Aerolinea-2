#ifndef PREMIER_H
#define PREMIER_H

#include "Asiento.h"
#include <string>

using namespace std;

// Clase derivada de Asiento para asientos premier
class Premier : public Asiento {
public:
    Premier();
    string getMasaje() const;
    void setMasaje(const string& nuevoMasaje);
    string getComida() const;
    void setComida(const string& nuevaComida);
    void elegirAsiento(double costo) override;

private:
    string masaje;
    string comida;
};

#endif // PREMIER_H
