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
    int contCarritosAtendidos;
public:
    MCajaRegistradora();
    double CalcCorteVentas(int n);
    double CalcTotalVentasDia();
    int NumProductosVendidos();
    int NumProdctosVendidos(int n);  // numero de productos vendidos hasta el carrito n
    void AgregarCarrito(MCarritoCompras mcar);
    int ContarCarritos();

    MCajero getMCajero();
    void setCajero(const MCajero &cajero);
    long getNumero() const;
    void setNumero(long numero);
    int getContCarritosAtendidos() const;
    void setContCarritosAtendidos(int contCarritosAtendidos);

};

#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
