//
// Created by marco on 3/9/18.
//

#include "MCarritoCompras.h"

MCarritoCompras::MCarritoCompras() {

}

MCarritoCompras::MCarritoCompras(string x) {
    cliente.setCedula(x);
}

//falta probar el ciclo para los dos metodos
double MCarritoCompras::CalcularTotalVenta() {
    int x = pilaProductos.numElementos();
    MProducto productoAux;
    double acumVentas;
    for (int i = 0; i < x; ++i) {
        pilaProductos.Remover(productoAux);
        acumVentas += productoAux.GetPvp();
        pilaProductos.Insertar(productoAux);
    }
    acumVentas += CalcIvaTotal();
    return acumVentas;
}

double MCarritoCompras::CalcIvaTotal() {
    int x = pilaProductos.numElementos();
    MProducto productoAux;
    double acumIva;
    for (int i = 0; i < x; ++i) {
        pilaProductos.Remover(productoAux);
        acumIva += productoAux.CalcIva();
        pilaProductos.Insertar(productoAux);
    }
    return acumIva;
}

int MCarritoCompras::NumProductos() {
    return pilaProductos.numElementos();
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

void MCarritoCompras::AgregarProducto(MProducto prod) {
    pilaProductos.Insertar(prod);
}


