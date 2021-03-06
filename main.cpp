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
    vg.Pausa();
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(2);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
        vg.ImprimirMensaje("   1. CARGAR CAJAS\n");
        vg.ImprimirMensaje("   2. CARGAR ARTICULOS\n");
        vg.ImprimirMensaje("   3. AGRAGAR ARTICULOS AL CARRITO\n");
        vg.ImprimirMensaje("   4. AÑADIR CARRITO A LA COLA\n");
        vg.ImprimirMensaje("   5. PROCESAR CAJA \n");
        vg.ImprimirMensaje("   6. CERRAR Y MOSTRAR REPORTE\n");
        vg.ImprimirMensaje("   7. FINALIZAR\n\n");
        opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,6);
        switch (opc)
        {
            case 1: c.CargarCajas();
                break;
            case 2: c.CargarArticulos();
                break;
            case 3: c.ProcesarArticulos();
                break;
            case 4:  c.AgregarCarritoCola();
                break;
            case 5:  c.ProcesarCarritoCaja();
                break;
            case 6:  c.CerrarCajaReporte();
                break;
        }
    }
    while(opc != 7);


    return 0;
}

/*
MCajaRegistradora caja;
MCarritoCompras carrito;

MProducto jabon;
jabon.SetPvp(200);
jabon.setNombre("Jabon");

carrito.AgregarProducto(jabon);
carrito.AgregarProducto(jabon);

caja.AgregarCarrito(carrito);
caja.ProcesarCarrito();
cout<<carrito.NumProductos()<<endl;
*/