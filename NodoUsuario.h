// Nodo.hpp
#pragma once
#include "Usuario.h"

struct NodoUsuario {
    Usuario* usuario;
    NodoUsuario* siguiente;

    NodoUsuario(Usuario* u);
};
