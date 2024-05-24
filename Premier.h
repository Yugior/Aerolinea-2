#ifndef PREMIER_H
#define PREMIER_H

#include "Asiento.h"
#include <string>

using namespace std;

class Premier : public Asiento {
public:
    Premier();
    string getMasaje() const;
    void setMasaje(const string& masaje);
    string getComida() const;
    void setComida(const string& comida);
    void elegirAsiento(double costo) override;

private:
    string masaje;
    string comida;
};

#endif
