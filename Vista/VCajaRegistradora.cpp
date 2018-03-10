//
// Created by juan on 9/03/18.
//

#include "VCajaRegistradora.h"

VCajaRegistradora::VCajaRegistradora() {}

void VCajaRegistradora::ImprimirCajaR(int tclientatend, int cantidadprodvend, float montobsf) {
    Limpiar();
    ImprimirEncabezado("  INFORMACION DE CAJAS REGISTRADORAS",
                       "  ======================");
    ImprimirNro("\n\n  Total de clientes atendidos: ", tclientatend);
    ImprimirNro("\n\n  Cantidad de productos vendidos: ", cantidadprodvend);
    ImprimirNroDecimal("\n\n  Monto de los productos (BSF): ", montobsf);
    ImprimirLineasBlanco(2);
    //Pausa();

}
