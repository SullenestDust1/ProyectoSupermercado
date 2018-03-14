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
    if (this->chequeocajas){ //revisar

        string n,a,c;
        for (int i = 0; i < 5; ++i) { //porque son 5 cajas

            n = vsup.LeerString("\n Nombre: ");
            c = vsup.LeerString("\n Cedula: ");
            MCajero mcaj;
            mcaj.setCedula(c);
            mcaj.setNombre(n);
            mcajreg.setCajero(mcaj);
            //  mca
            mcajreg.setNumero(i);
            msup.InicializarCajaRegistradora(mcajreg);
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
            msup.AgregarArticulo(mpro);

            resp = vsup.LeerValidarNro("\n Desea Agregar otro articulo ? (1)Si (2)No : ", 1, 2);
        }while(resp==1);


    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR CARGADAS LAS CAJAS \n");
    }

}

void Controlador::ProcesarArticulos() {
    if (this->chequeocajas && this->chequeocarritos) { // revisar
        int resp;
        // cargamos los datos del cliente
        string n,c,e;
        string cod;

        n = vsup.LeerString("\n Nombre: ");
        c =  vsup.LeerString("\n Cedula: ");
        e = vsup.LeerString("\n Correo: ");
        MCliente mcli;
        mcli.setNombre(n);
        mcli.setCedula(c);
        mcli.setCorreo(e);
        mcar.setCliente(mcli);
        do{
            cod = vsup.LeerString("\n Codigo del articulo: ");
            MProducto mpro;
            while (msup.BuscarArticuloCod(cod, mpro) == false){
                vsup.ImprimirMensaje ("\n El Codigo no existe en la base de datos: \n");
                vsup.Pausa();
                cod = vsup.LeerString("\n Codigo del articulo: ");
            }
            mcar.AgregarProducto(mpro);
            cout<<"broma. "<<mcar.<<endl;
            resp = vsup.LeerValidarNro("\n Desea Agregar otro articulo al carrito? (1)Si (2)No : ", 1, 2);
        }while(resp==1);



    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR CARGADAS LAS CAJAS  Y LOS ARTICULOS \n");
    }

}

void Controlador::AgregarCarritoCola() { // el carrito lo paso a la caja
    if (this->chequeocajas && this->chequeocarritos) { // revisar{
        long numcola;
        numcola = vsup.LeerValidarNro("\n  A Que cola te quieres ir (1,5) : ",1,5);
        cout<<"nombre "<< mcar.getCliente().getNombre();
       //     msup.se
        mcajreg.AgregarCarrito(mcar);
       // mcajreg.setNumero(numcola)
        msup.setCajaRegistradora(numcola, mcajreg);

       // msup.getCajaRegistradora(numcola).AgregarCarrito(mcar);// setear carrito

        //setear carrito vacio
        //here
        vsup.ImprimirMensaje("\n Carrito Procesados en caja  \n");

    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR PROCESADOS LOS ARTICULOS \n");
    }

}

void Controlador::ProcesarCarritoCaja() {
    if (this->chequeocajas && this->chequeocarritos) {
        long numcaja;
        numcaja = vsup.LeerValidarNro("\n  Que caja quieres procesar (1,5) : ",1,5);
        do{
            if (msup.getCajaRegistradora(numcaja).ProcesarCarrito() == true){
                vsup.ImprimirMensaje("\n CARRITO PROCESARO CON EXITO! \n");
            }else{
                vsup.ImprimirMensaje("\n NO HAY MAS CARRITOS PARA PROCESAR! \n");
            }
            numcaja = vsup.LeerValidarNro("\n  Que caja quieres procesar (1,5) 6 para salir : ",1,6);
        }while(numcaja != 6);
    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR PROCESADOS LOS ARTICULOS \n");
    }

}

void Controlador::CerrarCajaReporte() {
    if (this->chequeocajas && this->chequeocarritos) {
        long numcaja;
        VCajaRegistradora vcaj;
        numcaja = vsup.LeerValidarNro("\n  Que caja quieres CERRAR (1,5) : ",1,5);
        MCajaRegistradora mcaj = msup.getCajaRegistradora(numcaja);
        vcaj.ImprimirCajaR(mcaj.getContCarritosAtendidos(), mcaj.getContProductosVendidos(), mcaj.getAcumVentas());
    }else{
        vsup.ImprimirMensaje("\n TIENEN QUE ESTAR PROCESADOS LOS ARTICULOS \n");
    }

}
