//
// Created by juan on 9/03/18.
//

#ifndef PROYECTOSUPERMERCADO_VCAJAREGISTRADORA_H
#define PROYECTOSUPERMERCADO_VCAJAREGISTRADORA_H
#include "../Librerias/Genericas/VGeneral.h"

class VCajaRegistradora: public VGeneral {
public:
    VCajaRegistradora();

    void ImprimirCajaR(int tclientatend, int cantidadprodvend, float montobsf);
};
//

#endif //PROYECTOSUPERMERCADO_VCAJAREGISTRADORA_H
