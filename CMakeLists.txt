cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        Software.cpp
        Software.h
        Usuario.cpp
        Usuario.h
        Administrador.cpp
        Administrador.h
        Juego.cpp
        Juego.h
        Navegador.cpp
        Navegador.h
        Social.cpp
        Social.h
        Seguridad.cpp
        Seguridad.h
        NormalUser.cpp
        NormalUser.h
        Ofimatica.cpp
        Ofimatica.h
        Produccion.cpp
        Produccion.h
        NodoUsuario.cpp
        NodoUsuario.h
        ListaCircularUsuarios.cpp
        ListaCircularUsuarios.h
        NodoSoftware.cpp
        NodoSoftware.h
        ListaCircularSoftware.cpp
        ListaCircularSoftware.h
)
