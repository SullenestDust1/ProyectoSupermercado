//
// Created by marco on 3/9/18.
//

#include "MCajaRegistradora.h"

MCajaRegistradora::MCajaRegistradora() {

}

//


int MCajaRegistradora::ContarCarritos() {
    MCarritoCompras aux;
    MCarritoCompras sent;
    MCliente clienteAux;
    clienteAux.setCedula("000000000009");
    sent.setCliente(clienteAux);
    int cont = 0;

    if (colaCarros.Vacia())
        return 0;
    else {
        colaCarros.Remover(aux);
        if (colaCarros.Vacia()) {
            colaCarros.Insertar(aux);
            return 1;
        }
        colaCarros.Insertar(sent);
        while (aux.getCliente().getCedula().compare(sent.getCliente().getCedula()) != 0) {
            colaCarros.Insertar(aux);
            colaCarros.Remover(aux);
            cont++;
        }

        return cont;
    }

}

int MCajaRegistradora::getContProductosVendidos() const {
    return contProductosVendidos;
}

void MCajaRegistradora::setContProductosVendidos(int contProductosVendidos) {
    MCajaRegistradora::contProductosVendidos = contProductosVendidos;
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

MCajero MCajaRegistradora::getMCajero() {
    return this->cajero;
}

void MCajaRegistradora::setCajero(const MCajero &cajero) {
    MCajaRegistradora::cajero = cajero;
}

int MCajaRegistradora::getContCarritosAtendidos() const {
    return contCarritosAtendidos;
}

void MCajaRegistradora::setContCarritosAtendidos(int contCarritosAtendidos) {
    MCajaRegistradora::contCarritosAtendidos = contCarritosAtendidos;
}

double MCajaRegistradora::getAcumVentas() const {
    return acumVentas;
}

void MCajaRegistradora::setAcumVentas(double acumVentas) {
    MCajaRegistradora::acumVentas = acumVentas;
}

bool MCajaRegistradora::ProcesarCarrito() {
    MCarritoCompras aux;
    if(!colaCarros.Vacia()){
        colaCarros.Remover(aux);
        acumVentas += aux.CalcularTotalVenta();
        contCarritosAtendidos++;
        contProductosVendidos += aux.NumProductos();
        return true;
    }else
        return false;
}







