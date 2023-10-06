// ListaCircularUsuarios.cpp
#include "ListaCircularUsuarios.h"
#include "Administrador.h"
#include "NormalUser.h"
#include <iostream>

ListaCircularUsuarios::ListaCircularUsuarios() : inicio(nullptr), fin(nullptr) {}

void ListaCircularUsuarios::agregarUsuario(Usuario* usuario) {
    NodoUsuario* nuevoNodo = new NodoUsuario(usuario);

    if (!inicio) {
        inicio = nuevoNodo;
        fin = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
        nuevoNodo->siguiente = inicio;
        fin = nuevoNodo;
    }
}

void ListaCircularUsuarios::imprimirUsuarios() {
    if (!inicio) {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    NodoUsuario* actual = inicio;
    do {
        Usuario* usuario = actual->usuario;
        std::cout << "Usuario: " << usuario->getUser() << std::endl;

        // Verificar el tipo real del objeto y acceder a métodos específicos de la clase derivada
        if (dynamic_cast<Administrador*>(usuario)) {
            std::cout << "Es un Administrador." << std::endl;
        } else if (dynamic_cast<NormalUser*>(usuario)) {
            std::cout << "Es un Usuario Normal." << std::endl;
        }

        actual = actual->siguiente;
    } while (actual != inicio);
}
