//
// Created by marco on 3/12/18.
//

#include "MCliente.h"

const string &MCliente::getCorreo() const {
    return correo;
}

void MCliente::setCorreo(const string &correo) {
    MCliente::correo = correo;
}
