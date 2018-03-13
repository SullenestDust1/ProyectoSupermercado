//
// Created by marco on 3/9/18.
//

#include "MCajaRegistradora.h"

MCajaRegistradora::MCajaRegistradora() {

}

float MCajaRegistradora::CalcCorteVentas() {
    return 0;
}

float MCajaRegistradora::CalcTotalVentasDia() {
    return 0;
}

int MCajaRegistradora::ProductosVendidos() {
    return 0;
}


MCajero MCajaRegistradora::getMCajero() {
    return this->cajero;
}

int MCajaRegistradora::ContarCarritos() {
        MCarritoCompras aux;
        MCarritoCompras sent("9999999");
        int cont=0;

        if(colaCarros.Vacia())
            return 0;
        else{
            colaCarros.Remover(aux);
            if(colaCarros.Vacia()){
                colaCarros.Insertar(aux);
                return 1;
            }
            colaCarros.Insertar(sent);
            while(aux.getCliente().getCedula().compare(sent.getCliente().getCedula()) != 0){
                colaCarros.Insertar(aux);
                colaCarros.Remover(aux);
                cont++;
            }
                //colaCarros.Remover(aux);
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


