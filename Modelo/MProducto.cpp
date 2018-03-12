//
// Created by marco on 3/9/18.
//
#include "MProducto.h"

MProducto::MProducto() {

}

double MProducto::CalcIva() {
    return pvp * 0.12;
}

const string &MProducto::getFechaExp() const {
    return fechaExp;
}

void MProducto::setFechaExp(const string &fechaExp) {
    MProducto::fechaExp = fechaExp;
}

double MProducto::getPeso() const {
    return peso;
}

void MProducto::setPeso(double peso) {
    MProducto::peso = peso;
}

const string &MProducto::getNombre() const {
    return nombre;
}

void MProducto::setNombre(const string &nombre) {
    MProducto::nombre = nombre;
}

