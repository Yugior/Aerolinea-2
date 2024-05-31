#ifndef ASIENTO_H
#define ASIENTO_H

class Asiento {
public:
    virtual ~Asiento() {}
    virtual void elegirAsiento(double costo) = 0;
};

#endif // ASIENTO_H
