//
// Created by marco on 3/9/18.
//

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
   approd = ListaArticulos.ObtPrimero();
    while(approd != nullptr) {  //preguntas si no esta apuntando a null osea que si hay nodos
        if (approd->ObtInfo().GetCodigo() == cod){
            mpro = approd->ObtInfo();
            return true;
        }
        approd=approd->ObtDer();
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
