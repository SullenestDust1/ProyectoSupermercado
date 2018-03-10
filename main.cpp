#include <iostream>
/*#include "Librerias/Lista/Lista.h"
#include "Librerias/Cola/Cola.h"
#include "Librerias/Pila/Pila.h"
int main() {
    Lista<int> lista;
    Cola<int> cola;
    Pila<int> pila;
    return 0;
}
//*/


#include "Controlador/Controlador.h"
#include "Librerias/Genericas/VGeneral.h"

int main()
{
    int opc;
    VGeneral  vg;
    Controlador c;
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
