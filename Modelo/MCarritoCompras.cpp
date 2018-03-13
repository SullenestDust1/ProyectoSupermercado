//
// Created by marco on 3/9/18.
//

#include "MCarritoCompras.h"

MCarritoCompras::MCarritoCompras() {

}

MCarritoCompras::MCarritoCompras(string x) {
    cliente.setCedula(x);
}


float MCarritoCompras::CalcularTotalVenta() {
    return 0;
}

float MCarritoCompras::CalcIvaTotal() {
    return 0;
}

int MCarritoCompras::NumProductos() {
    if(pilaProductos.Vacia())
        return 0;
    else
        do{


        }while(nullptr);

    return 0;
}

MCliente MCarritoCompras::getCliente() {
    return cliente;
}

Pila<MProducto> MCarritoCompras::getPilaProductos() {
    return pilaProductos;
}

void MCarritoCompras::setCliente(MCliente mc) {
    cliente = mc;
}


