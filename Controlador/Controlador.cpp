//
// Created by juan on 9/03/18.
//

#include "Controlador.h"

void Controlador::CargarCajas() {

vsup.Limpiar();
    if (!this->chequeocajas){
        string n,a,c;
        for (int i = 0; i < 5; ++i) { //porque son 5 cajas

            n = vsup.LeerString("\n Nombre: ");
            a = vsup.LeerString("\n Apellido: ");
            c = vsup.LeerString("\n Cedula: ");

        }
    }else{
        vsup.ImprimirMensaje("\n LAS CAJAS YA FUERON CARGADAS!! \n");
    }
}

Controlador::Controlador() {
    this->chequeocajas=false;
}
