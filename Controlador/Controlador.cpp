//


//
// Created by juan on 9/03/18.


#include "Controlador.h"

Controlador::Controlador() {
}

void Controlador::CargarCajas() {

vsup.Limpiar();
    if (!this->chequeocajas){
        MCajero mcaj;
        string n,a,c;
        for (int i = 0; i < 5; ++i) { //porque son 5 cajas

            n = vsup.LeerString("\n Nombre: ");
            c = vsup.LeerString("\n Cedula: ");
            mcaj.setNombre(n);
            mcaj.setCedula(c);

        }
    }else{
        vsup.ImprimirMensaje("\n LAS CAJAS YA FUERON CARGADAS!! \n");
    }
}
