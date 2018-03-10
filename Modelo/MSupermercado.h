//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MSUPERMERCADO_H
#define PROYECTOSUPERMERCADO_MSUPERMERCADO_H

#include "../Librerias/Lista/Lista.h"
#include "MCajaRegistradora.h"
class MSupermercado {
private:
    Lista<MCajaRegistradora> ListaCajas;

public:
    float CalcTotalVentasDia();
    int ClientesAtentidos();

};


#endif //PROYECTOSUPERMERCADO_MSUPERMERCADO_H
