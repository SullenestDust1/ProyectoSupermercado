//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MPRODUCTO_H
#define PROYECTOSUPERMERCADO_MPRODUCTO_H

#include "../Librerias/Genericas/MArticulo.h"

class MProducto: public MArticulo {
private:
    string fechaExp;
    float peso;

public:
    const string &getFechaExp() const;
    void setFechaExp(const string &fechaExp);
    float getPeso() const;
    void setPeso(float peso);
    float CalcIva();


};


#endif //PROYECTOSUPERMERCADO_MPRODUCTO_H
