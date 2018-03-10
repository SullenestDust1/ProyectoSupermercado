cmake_minimum_required(VERSION 3.9)
project(ProyectoSupermercado)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoSupermercado main.cpp Librerias/Genericas/VGeneral.cpp Librerias/Genericas/MArticulo.cpp Controlador/Controlador.cpp
        Vista/VCajaRegistradora.cpp Vista/VCarritoCompras.cpp Vista/VSupermercado.cpp
        Modelo/MSupermercado.cpp Modelo/MCarritoCompras.cpp Modelo/MProducto.cpp)