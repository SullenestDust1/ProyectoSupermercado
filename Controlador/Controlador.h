//
// Created by juan on 9/03/18.
//

#ifndef PROYECTOSUPERMERCADO_CONTROLADOR_H
#define PROYECTOSUPERMERCADO_CONTROLADOR_H


#include "../Modelo/MSupermercado.h"
#include "../Vista/VSupermercado.h"
class Controlador {
private:
    MSupermercado msup;
    VSupermercado vsup;
    // esto es para cargalos antes
    Lista<MProducto> listap; // lista de productos
    Nodo<MProducto> *approd; //apuntador de productos

    bool chequeocajas,chequeocarritos; // chequeopeli,chequeoentrada;  //! los checkeos
public:
    Controlador();
    void CargarCajas();
    void CargarArticulos();
   /* void CargarSalas();
    void CargarPeliculas();
    void ProcesarEntradas();
    void ReporteCinex();
    void ReportePeli();*/
};



#endif //PROYECTOSUPERMERCADO_CONTROLADOR_H
