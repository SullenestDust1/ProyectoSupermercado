//
// Created by marco on 3/9/18.
//

#include "MCajaRegistradora.h"

MCajaRegistradora::MCajaRegistradora() {

}

//

int MCajaRegistradora::NumProductosVendidos() {
    int numCarritos = ContarCarritos();
    MCarritoCompras aux;
    int productosVendidos = 0;
    for (int i = 0; i < numCarritos; ++i) {
        colaCarros.Remover(aux);
        productosVendidos += aux.NumProductos();
        colaCarros.Insertar(aux);
    }
    return productosVendidos;
}

int MCajaRegistradora::NumProdctosVendidos(int n) {
    MCarritoCompras aux;
    int productosVendidos = 0;
    for (int i = 0; i < n; ++i) {
        colaCarros.Remover(aux);
        productosVendidos += aux.NumProductos();
        colaCarros.Insertar(aux);
    }
    return productosVendidos;
}


int MCajaRegistradora::ContarCarritos() {
    MCarritoCompras aux;
    MCarritoCompras sent("9999999");
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

void MCajaRegistradora::ProcesarCarrito(MCarritoCompras m) {
    acumVentas += m.CalcularTotalVenta();
}





