//
// Created by juan on 11/03/18.
//

#include "MHumano.h"

const string &MHumano::getCedula() const {
    return cedula;
}

void MHumano::setCedula(const string &cedula) {
    MHumano::cedula = cedula;
}

const string &MHumano::getNombre() const {
    return nombre;
}

void MHumano::setNombre(const string &nombre) {
    MHumano::nombre = nombre;
}

const string &MHumano::getDir() const {
    return dir;
}

void MHumano::setDir(const string &dir) {
    MHumano::dir = dir;
}

const string &MHumano::getTlf() const {
    return tlf;
}

void MHumano::setTlf(const string &tlf) {
    MHumano::tlf = tlf;
}

char MHumano::getSexo() const {
    return sexo;
}

void MHumano::setSexo(char sexo) {
    MHumano::sexo = sexo;
}

char MHumano::getEdocivil() const {
    return edocivil;
}

void MHumano::setEdocivil(char edocivil) {
    MHumano::edocivil = edocivil;
}

int MHumano::getEdad() const {
    return edad;
}

void MHumano::setEdad(int edad) {
    MHumano::edad = edad;
}

MHumano::MHumano() {}
