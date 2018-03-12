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
    if (!this->chequeocajas){ //revisar
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
    if (this->chequeocajas && this->chequeocarritos){ // revisar
        string n,f,c,d;
        MProducto mpro;
        double p,pr;
        c = vsup.LeerString("\n Codigo: ");
        n = vsup.LeerString("\n Nombre: ");
        pr = vsup.LeerNroDecimal("\n Precio: ");
        d = vsup.LeerString("\n Descripción: ");
        f = vsup.LeerString("\n Fecha de expiracion: ");
        p = vsup.LeerNroDecimal("\n Peso: ");

        mpro.setNombre(n);
        mpro.SetCodigo(c);
        mpro.SetPvp(pr);
        mpro.SetDesc(d);
        mpro.setFechaExp(f);
        mpro.setPeso(p);

        

    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR CARGADAS LAS CAJAS \n");
    }

}
