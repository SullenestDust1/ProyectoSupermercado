//
// Created by marco on 3/9/18.
//

#ifndef PROYECTOSUPERMERCADO_MPRODUCTO_H
#define PROYECTOSUPERMERCADO_MPRODUCTO_H

#include "../Librerias/Genericas/MArticulo.h"

class MProducto: public MArticulo {
private:
    string fechaExp;
    string nombre;
    float peso;

public:
    MProducto();
    const string &getFechaExp() const;
    void setFechaExp(const string &fechaExp);
    float getPeso() const;
    void setPeso(float peso);
    const string &getNombre() const;
    void setNombre(const string &nombre);
    float CalcIva();


};

#endif //PROYECTOSUPERMERCADO_MPRODUCTO_H
