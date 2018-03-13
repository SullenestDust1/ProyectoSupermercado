//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
#define PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H

#include "../Librerias/Pila/Pila.h"
#include "MProducto.h"
#include "MCliente.h"

class MCarritoCompras {
private:
    Pila<MProducto> pilaProductos;
    MCliente cliente;
public:
    MCarritoCompras();
    MCarritoCompras(string x); //Construcctor con cedula del cliente
    float CalcularTotalVenta();
    int NumProductos();
    float CalcIvaTotal();
    Pila<MProducto> getPilaProductos();
    MCliente getCliente();
    void setCliente(MCliente mc);

};


#endif //PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
