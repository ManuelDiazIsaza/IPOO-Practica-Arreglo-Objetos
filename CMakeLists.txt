cmake_minimum_required(VERSION 3.9)
project(Ejemplo_de_Clase_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(Ejemplo_de_Clase_2
        Estudiante.cpp
        Estudiante.h
        Grupo.cpp
        Grupo.h
        main.cpp
        Ordenar.cpp
        Ordenar.h)
