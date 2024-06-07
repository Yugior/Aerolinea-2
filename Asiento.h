#ifndef ASIENTO_H
#define ASIENTO_H

// Clase base abstracta para los asientos
class Asiento {
public:
    virtual ~Asiento() {}
    // Función virtual pura para elegir un asiento, debe ser implementada por las clases derivadas
    virtual void elegirAsiento(double costo) = 0;
};

#endif // ASIENTO_H
