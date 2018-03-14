cmake_minimum_required(VERSION 3.9)
project(ProyectoSupermercado)

set(CMAKE_CXX_STANDARD 17)

ADD_LIBRARY(LibreriaEstatica STATIC
        Librerias/Genericas/MArticulo.cpp Librerias/Genericas/VGeneral.cpp Librerias/Genericas/VGeneral.cpp
        Vista/VSupermercado.cpp Vista/VCajaRegistradora.cpp
        Modelo/MSupermercado.cpp Modelo/MCajaRegistradora.cpp Modelo/MCajero.cpp
        Modelo/MCarritoCompras.cpp
        Librerias/Genericas/MHumano.cpp
        Controlador/Controlador.cpp
        Modelo/MCliente.cpp Modelo/MProducto.cpp)

add_executable(ProyectoSupermercado main.cpp)

TARGET_LINK_LIBRARIES( ProyectoSupermercado LibreriaEstatica)