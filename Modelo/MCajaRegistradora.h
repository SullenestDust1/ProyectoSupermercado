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
    int numero; // numero de la caja registradora
    int contCarritosAtendidos;
    int contProductosVendidos;
    double acumVentas;  // con esto se consiguen el corte de ventas y el total

public:
    int getContProductosVendidos() const;

    void setContProductosVendidos(int contProductosVendidos);

    MCajaRegistradora();
    bool ProcesarCarrito();
    void AgregarCarrito(MCarritoCompras mcar);
    int ContarCarritos();
    MCajero getMCajero();
    void setCajero(const MCajero &cajero);
    int getNumero() const;
    void setNumero(int numero);
    int getContCarritosAtendidos() const;
    void setContCarritosAtendidos(int contCarritosAtendidos);
    double getAcumVentas() const;
    void setAcumVentas(double acumVentas);


};

#endif //PROYECTOSUPERMERCADO_MCAJAREGISTRADORA_H
