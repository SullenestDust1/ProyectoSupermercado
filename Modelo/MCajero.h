//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MCAJERO_H
#define PROYECTOSUPERMERCADO_MCAJERO_H

#include "../Librerias/Genericas/MPersona.cpp"

class MCajero: public MPersona {
public:
    string codigo;

    const string &getCodigo() const;

    void setCodigo(const string &codigo);

private:


};


#endif //PROYECTOSUPERMERCADO_MCAJERO_H
