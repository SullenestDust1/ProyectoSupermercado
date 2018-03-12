//
// Created by marco on 3/9/18.
//
#ifndef PROYECTOSUPERMERCADO_MCAJERO_H
#define PROYECTOSUPERMERCADO_MCAJERO_H

#include "../Librerias/Genericas/MArticulo.h"
#include "../Librerias/Genericas/MHumano.h"

class MCajero: public MHumano{
private:
    string codigo;
public:
    const string &getCodigo() const;
    void setCodigo(const string &codigo);

};


#endif //PROYECTOSUPERMERCADO_MCAJERO_H
