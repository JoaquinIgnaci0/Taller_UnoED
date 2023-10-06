#include "Usuario.h"
#include "NodoUsuario.h"
NodoUsuario::NodoUsuario(Usuario* u) : usuario(u), siguiente(nullptr) {}
