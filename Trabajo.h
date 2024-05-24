#ifndef TRABAJO_H
#define TRABAJO_H

#include "Asiento.h"
#include <string>

using namespace std;

class Trabajo : public Asiento {
public:
    Trabajo();
    string getBebidas() const;
    void setBebidas(const string& bebidas);
    string getEntretenimiento() const;
    void setEntretenimiento(const string& entretenimiento);
    void elegirAsiento(double costo) override;

private:
    string bebidas;
    string entretenimiento;
};

#endif
