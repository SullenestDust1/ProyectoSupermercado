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
    long numero; // numero de la caja registradora
public:
    MCajaRegistradora();
    double CalcCorteVentas();
    double CalcTotalVentasDia();
    int ProductosVendidos();
    long getNumero() const;
    void setNumero(long numero);
    void AgregarCarrito(MCarritoCompras mcar);
    int ContarCarritos();
    // bromas del clion//
     MCajero getMCajero();

};

#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
