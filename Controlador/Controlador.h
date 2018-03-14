//
// Created by juan on 9/03/18.
//

#ifndef PROYECTOSUPERMERCADO_CONTROLADOR_H
#define PROYECTOSUPERMERCADO_CONTROLADOR_H


#include "../Modelo/MSupermercado.h"
#include "../Vista/VSupermercado.h"
#include "../Vista/VCajaRegistradora.h"
class Controlador {
private:

    VSupermercado vsup;
    ///////////////////
    MCarritoCompras mcar; // carrito pajuo;
    MCajaRegistradora mcajreg; // caja registradora
    MSupermercado msup; // supermercado
    // esto es para cargalos antes


    bool chequeocajas,chequeocarritos; // chequeopeli,chequeoentrada;  //! los checkeos
public:
    Controlador();
    void CargarCajas();
    void CargarArticulos();
    void ProcesarArticulos();
    void AgregarCarritoCola();
    void ProcesarCarritoCaja();
    void CerrarCajaReporte();
   /* void CargarSalas();
    void CargarPeliculas();
    void ProcesarEntradas();
    void ReporteCinex();
    void ReportePeli();*/
};



#endif //PROYECTOSUPERMERCADO_CONTROLADOR_H
