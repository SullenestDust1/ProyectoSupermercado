//
// Created by juan on 11/03/18.
//

#ifndef PROYECTOSUPERMERCADO_MHUMANO_H
#define PROYECTOSUPERMERCADO_MHUMANO_H
#include <string>
using namespace std;

class MHumano {
protected:
    string cedula,nombre,dir,tlf;
    char sexo,edocivil;
public:
    MHumano();

    const string &getCedula() const;

    void setCedula(const string &cedula);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getDir() const;

    void setDir(const string &dir);

    const string &getTlf() const;

    void setTlf(const string &tlf);

    char getSexo() const;

    void setSexo(char sexo);

    char getEdocivil() const;

    void setEdocivil(char edocivil);

    int getEdad() const;

    void setEdad(int edad);

protected:
    int edad;

};


#endif //PROYECTOSUPERMERCADO_MHUMANO_H
