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
    double acumVentas;  // con esto se consiguen el corte de ventas y el total

public:
    MCajaRegistradora();
    void ProcesarCarrito(MCarritoCompras m);
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
    double getAcumVentas() const;
    void setAcumVentas(double acumVentas);


};

#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
