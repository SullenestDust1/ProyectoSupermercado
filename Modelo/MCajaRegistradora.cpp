//
// Created by marco on 3/9/18.
//

#include "MCajaRegistradora.h"
//

float MCajaRegistradora::CalcCorteVentas() {
    return 0;
}

float MCajaRegistradora::CalcTotalVentasDia() {
    return 0;
}

int MCajaRegistradora::NumClientes() {
    return 0;
}

int MCajaRegistradora::ProductosVendidos() {
    return 0;
}

MCajaRegistradora::MCajaRegistradora() {
totalbsf = 0;
}

MCajero MCajaRegistradora::getMCajero() {
    return this->cajero;
}

long MCajaRegistradora::getNumero() const {
    return numero;
}

void MCajaRegistradora::setNumero(long numero) {
    this->numero = numero;
}

void MCajaRegistradora::AgregarCarrito(MCarritoCompras mcar) {
    this->colaCarros.Insertar(mcar);

}

double MCajaRegistradora::getTotalbsf() const {
    return totalbsf;
}

void MCajaRegistradora::setTotalbsf(double totalbsf) {
    this->totalbsf += totalbsf;
}


