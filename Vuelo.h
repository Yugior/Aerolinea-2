#ifndef VUELO_H
#define VUELO_H

#include <string>
#include <vector>

using namespace std;

class Vuelo {
private:
    string avion;
    string fecha;
    string vuelo;

public:
    // Constructor por defecto
    Vuelo();

    // Getters
    string getAvion() const;
    string getFecha() const;
    string getVuelo() const;

    // Setters
    void setAvion(const string& avion);
    void setFecha(const string& fecha);
    void setVuelo(const string& vuelo);

    // Método para seleccionar vuelo
    void selectVuelo(const vector<string>& aviones, const vector<string>& fechas, const vector<string>& vuelos);
};

#endif // VUELO_H
