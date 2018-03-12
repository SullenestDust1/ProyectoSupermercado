//


//
// Created by juan on 9/03/18.


#include "Controlador.h"

Controlador::Controlador() {
    this->chequeocajas = false;
    this->chequeocarritos = false;

}

void Controlador::CargarCajas() {

vsup.Limpiar();
    if (!this->chequeocajas){
        MCajaRegistradora mcajreg;
        string n,a,c;
        for (int i = 0; i < 5; ++i) { //porque son 5 cajas

            n = vsup.LeerString("\n Nombre: ");
            c = vsup.LeerString("\n Cedula: ");

            mcajreg.getMCajero().setNombre(n);
            mcajreg.getMCajero().setCedula(c);
          //  mca



        }
        this->chequeocajas = true;
    }else{
        vsup.ImprimirMensaje("\n LAS CAJAS YA FUERON CARGADAS!! \n");
    }
}

void Controlador::CargarArticulos() {
    if (this->chequeocajas && this->chequeocarritos){


    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR CARGADAS LAS CAJAS \n");
    }

}
