//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
#define PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H

#include "../Librerias/Cola/Cola.h"
#include "MCarritoCompras.h"
#include "MCajero.h"
class MCajaRegistradora {
private:
    Cola<MCarritoCompras> colaCarros;
    MCajero cajero;

public:

};


#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
