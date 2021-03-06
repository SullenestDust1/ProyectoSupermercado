//
// Created by marco on 3/9/18.

#include "MSupermercado.h"

int MSupermercado::ClientesAtentidos() {
    return 0;
}

float MSupermercado::CalcTotalVentasDia() {
    return 0;
}

MSupermercado::MSupermercado() {

}

bool MSupermercado::BuscarArticuloCod(string cod, MProducto &mpro) {
   Nodo<MProducto> *auxapprod = ListaArticulos.ObtPrimero(); // cambiando buscar por auxiliar
    while(auxapprod != nullptr) {  //preguntas si no esta apuntando a null osea que si hay nodos
        if (auxapprod->ObtInfo().GetCodigo() == cod){
            mpro = auxapprod->ObtInfo();
            return true;
        }
        auxapprod=auxapprod->ObtDer();
    }
    return false;
}

void MSupermercado::AgregarArticulo(MProducto mpro) {
    if (ListaArticulos.Vacia()) {
        ListaArticulos.InsComienzo(mpro);
        approd = ListaArticulos.ObtPrimero();
    } else {
        ListaArticulos.InsDerecho(approd, mpro);
        approd = approd->ObtDer();
    }

}

void MSupermercado::InicializarCajaRegistradora(MCajaRegistradora mcaj) {

    if (ListaCaja.Vacia()) {
        ListaCaja.InsComienzo(mcaj);
        aplist = ListaCaja.ObtPrimero();
    } else {
        ListaCaja.InsDerecho(aplist, mcaj);
        aplist = aplist->ObtDer();
    }
}

MCajaRegistradora MSupermercado::getCajaRegistradora(int i) {
    aplist = ListaCaja.ObtPrimero();
    while(aplist != nullptr) {  //preguntas si no esta apuntando a null osea que si hay nodos
        if (aplist->ObtInfo().getNumero() == i){
            return aplist->ObtInfo();
        }
        aplist=aplist->ObtDer();
    }

}

void MSupermercado::setCajaRegistradora(int i,MCajaRegistradora caja) {
    aplist = ListaCaja.ObtPrimero();
    if(aplist != nullptr) {
        while (aplist->ObtInfo().getNumero() != i) {  //preguntas si no esta apuntando a null osea que si hay nodos
            aplist = aplist->ObtDer();
        }
    }
    aplist->AsigInfo(caja);

}
