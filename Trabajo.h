#ifndef TRABAJO_H
#define TRABAJO_H

#include "Asiento.h"
#include <string>

using namespace std;

// Clase derivada de Asiento para asientos de trabajo
class Trabajo : public Asiento {
public:
    Trabajo();
    string getBebidas() const;
    void setBebidas(const string& nuevasBebidas);
    string getEntretenimiento() const;
    void setEntretenimiento(const string& nuevoEntretenimiento);
    void elegirAsiento(double costo) override;

private:
    string bebidas;
    string entretenimiento;
};

#endif // TRABAJO_H

