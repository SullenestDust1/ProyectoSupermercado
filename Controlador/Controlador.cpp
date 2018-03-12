//


//
// Created by juan on 9/03/18.


#include "Controlador.h"

Controlador::Controlador() {
    this->chequeocajas = true;
    this->chequeocarritos = true;

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
        int resp;
        MProducto mpro;
        double p,pr;

        do {
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

            if (listap.Vacia()) {
                listap.InsComienzo(mpro);
                approd = listap.ObtPrimero();
            } else {

                listap.InsDerecho(approd, mpro);
                approd = approd->ObtDer();
            }
          //  cout<<"broma. "<<listap.BuscarElemento("123")<<endl;

        resp = vsup.LeerValidarNro("\n Desea Agregar otro articulo ? (1)Si (2)No : ", 1, 2);
    }while(resp==1);


    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR CARGADAS LAS CAJAS \n");
    }

}
