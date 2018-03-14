//
// Created by marco on 3/9/18.
//
//
#ifndef PROYECTOSUPERMERCADO_MSUPERMERCADO_H
#define PROYECTOSUPERMERCADO_MSUPERMERCADO_H
#include "../Librerias/Lista/Lista.h"
#include "MCajaRegistradora.h"

class MSupermercado {
private:
    Lista<MCajaRegistradora> ListaCaja;
    Nodo<MCajaRegistradora> *aplist; //apuntador de MCajaRegistradora
    ////////////////// para los productos /////////////////
    Lista<MProducto> ListaArticulos;  //lista de articulos para el supermercado
    Nodo<MProducto> *approd; //apuntador de productos

public:
    MSupermercado();
    bool BuscarArticuloCod(string cod, MProducto &mpro);
    void AgregarArticulo(MProducto mpro);
    ///////////////////////////
    float CalcTotalVentasDia();
    int ClientesAtentidos();
    /////////////////////////
    void InicializarCajaRegistradora(MCajaRegistradora mcaj);
    MCajaRegistradora getCajaRegistradora(int i);
    void setCajaRegistradora(int i,MCajaRegistradora caja);

};




#endif //PROYECTOSUPERMERCADO_MSUPERMERCADO_H
