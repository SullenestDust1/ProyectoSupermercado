//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_CARRITOCOMPRAS_H
#define PROYECTOSUPERMERCADO_CARRITOCOMPRAS_H

#include "../Librerias/Pila/Pila.h"
#include "MProducto.h"

class MCarritoCompras {
public:
    Pila<MProducto> pilaProductos;

private:
    float CalcularTotalVenta();
    int CalcNumProductos();
    float CalcIva();


};


#endif //PROYECTOSUPERMERCADO_CARRITOCOMPRAS_H
