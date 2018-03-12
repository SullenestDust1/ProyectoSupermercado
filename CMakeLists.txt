cmake_minimum_required(VERSION 3.9)
project(ProyectoSupermercado)

set(CMAKE_CXX_STANDARD 17)

add_executable(unititled1 main.cpp Librerias/Genericas/MArticulo.cpp
        Librerias/Genericas/MArticulo.h Librerias/Genericas/VGeneral.cpp Librerias/Genericas/VGeneral.cpp
        Vista/VSupermercado.cpp Vista/VSupermercado.h
        Modelo/MSupermercado.cpp Modelo/MSupermercado.h Modelo/MCajaRegistradora.h Modelo/MCajaRegistradora.cpp Modelo/MCajero.cpp Modelo/MCajero.h
        Modelo/MCarritoCompras.cpp Modelo/MCarritoCompras.h Librerias/Genericas/MHumano.cpp Librerias/Genericas/MHumano.h Controlador/Controlador.cpp Controlador/Controlador.h
        Librerias/Lista/Lista.cpp Librerias/Lista/Lista.h Librerias/Cola/Cola.cpp Librerias/Cola/Cola.h Librerias/Pila/Pila.cpp Librerias/Pila/Pila.h
        Librerias/Lista/Nodo.cpp Librerias/Lista/Nodo.h)