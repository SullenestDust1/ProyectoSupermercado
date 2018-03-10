cmake_minimum_required(VERSION 3.9)
project(ProyectoSupermercado)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoSupermercado main.cpp Vista/VCajero.cpp Vista/VCajero.h Vista/VSupermercado.cpp Vista/VSupermercado.h Vista/VCajaRegistradora.cpp Vista/VCajaRegistradora.h Vista/VCarritoCompras.cpp Vista/VCarritoCompras.h Controlador/Controlador.cpp Controlador/Controlador.h)