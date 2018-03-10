//
// Created by juan on 9/03/18.
//

#include "Controlador.h"

void Controlador::CargarCajas() {
vsup.Limpiar();
    if (!this->chequeocajas){
        for (int i = 0; i < 5; ++i) { //porque son 5 cajas
            /*=vemp.LeerString("\n Codigo: ");
            cod=vemp.LeerString("\n Codigo: ");
            cod=vemp.LeerString("\n Codigo: ");*/
        }
    }else{
        vsup.ImprimirMensaje("\n LAS CAJAS YA FUERON CARGADAS!! \n");
    }
}

Controlador::Controlador() {
    this->chequeocajas=false;
}
