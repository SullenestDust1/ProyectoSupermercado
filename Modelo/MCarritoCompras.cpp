//
// Created by marco on 3/9/18.
//

#include "MCarritoCompras.h"

float MCarritoCompras::CalcularTotalVenta() {
    return 0;
}

float MCarritoCompras::CalcIvaTotal() {
    return 0;
}

int MCarritoCompras::NumProductos() {
    return 0;
}

MCliente MCarritoCompras::getCliente() {
    return cliente;
}

Pila<MProducto> MCarritoCompras::getPilaProductos() {
    return pilaProductos;
}
