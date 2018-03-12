//
// Created by marco on 3/9/18.
//
#include "../Librerias/Cola/Cola.h"
#include "MCarritoCompras.h"
#include "MCajero.h"

#ifndef PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
#define PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
//

class MCajaRegistradora {
private:
    Cola<MCarritoCompras> colaCarros;
    MCajero cajero;


public:
    MCajaRegistradora();

    float CalcCorteVentas();
    float CalcTotalVentasDia();
    int NumClientes();
    int ProductosVendidos();

    // bromas del clion//
     MCajero getMCajero();

};


#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
