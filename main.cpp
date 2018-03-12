/*#include <cstdlib>
#include <iostream>
#include "Librerias/Lista/Lista.h"
using namespace std;
int main()
{
    Lista<int> Lista1;
    Nodo<int> *ap;
    int valor;
    for(int i=0; i<10;i++) {
        cout << "Introduzca un numero: " << endl;
        cin >> valor;
        if (Lista1.Vacia()) {
            Lista1.InsComienzo(valor);
            ap=Lista1.ObtPrimero();
        }
        else {
            Lista1.InsDerecho(ap,valor);
            ap=ap->ObtDer();
        }
    }
    ap=Lista1.ObtPrimero();
    while(ap!=NULL) {
        valor=ap->ObtInfo(ap);
        cout << "valor: " << valor << endl;
        ap=ap->ObtDer();
    }
    //  system("PAUSE");
    return EXIT_SUCCESS;
}*/

#include "Librerias/Genericas/VGeneral.h"
#include "Modelo/MSupermercado.h"
#include "Controlador/Controlador.h"
using namespace std;
int main()
{
    int opc;
    VGeneral  vg;
    Controlador c;
    /*MSupermercado ms;
    MCajaRegistradora mc;
    MCarritoCompras mcc;
    MProducto mp;
    Controlador c;*/
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(2);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
        vg.ImprimirMensaje("   1. CARGAR CAJEROS\n");
        vg.ImprimirMensaje("   2. CARGAR CARRITOS\n");
        vg.ImprimirMensaje("   3. CARGAR ARTICULOS\n");
        vg.ImprimirMensaje("   4. REPORTE\n");
        vg.ImprimirMensaje("   5. FINALIZAR\n\n");
        opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
        switch (opc)
        {
            case 1: //c.CargarPeliculas();
                break;
            case 2: //c.CargarSalas();
                break;
            case 3: //c.ProcesarEntradas();
                break;
            case 4: //c.ReporteCinex();
                break;
        }
    }
    while(opc != 5);
    return 0;
}
