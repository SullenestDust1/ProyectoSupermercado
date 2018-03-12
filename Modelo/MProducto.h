//
// Created by marco on 3/9/18.
//
//
#ifndef PROYECTOSUPERMERCADO_MPRODUCTO_H
#define PROYECTOSUPERMERCADO_MPRODUCTO_H

#include "../Librerias/Genericas/MArticulo.h"

class MProducto: public MArticulo {
private:
    string fechaExp;
    string nombre;
    double peso;

public:
    MProducto();
    const string &getFechaExp() const;
    void setFechaExp(const string &fechaExp);
    double getPeso() const;
    void setPeso(double peso);
    const string &getNombre() const;
    void setNombre(const string &nombre);
    double CalcIva();

};

#endif //PROYECTOSUPERMERCADO_MPRODUCTO_H
