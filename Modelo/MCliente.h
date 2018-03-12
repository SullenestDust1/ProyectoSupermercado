//
// Created by marco on 3/12/18.
//

#ifndef PROYECTOSUPERMERCADO_MCLIENTE_H
#define PROYECTOSUPERMERCADO_MCLIENTE_H

#include "../Librerias/Genericas/MHumano.h"

class MCliente: public MHumano {
private:
    string correo;
public:
    const string &getCorreo() const;
    void setCorreo(const string &correo);

};


#endif //PROYECTOSUPERMERCADO_MCLIENTE_H
