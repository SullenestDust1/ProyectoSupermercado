//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
#define PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H

#include "../Librerias/Pila/Pila.h"
#include "MProducto.h"

class MCarritoCompras {
public:
    Pila<MProducto> pilaProductos;

private:
    float CalcularTotalVenta();
    int NumProductos();
    float CalcIvaTotal();


};


#endif //PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
