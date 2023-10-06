// ListaCircularUsuarios.hpp
#pragma once
#include "NodoUsuario.h"

class ListaCircularUsuarios {
private:
    NodoUsuario* inicio;
    NodoUsuario* fin;

public:
    ListaCircularUsuarios();

    void agregarUsuario(Usuario* usuario);
    void imprimirUsuarios();
};

