//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
#define PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H

#include "../Librerias/Pila/Pila.h"
#include "MProducto.h"
#include "MCliente.h"

class MCarritoCompras {
public:
    Pila<MProducto> pilaProductos;
    MCliente cliente;
private:
    float CalcularTotalVenta();
    int NumProductos();
    float CalcIvaTotal();
    MCliente getCliente();


};


#endif //PROYECTOSUPERMERCADO_MCARRITOCOMPRAS_H
