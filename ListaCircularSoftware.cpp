// ListaCircularSoftware.cpp
#include "ListaCircularSoftware.h"
#include <iostream>

ListaCircularSoftware::ListaCircularSoftware() : inicio(nullptr) {}

ListaCircularSoftware::~ListaCircularSoftware() {
    if (!inicio) return; // La lista está vacía

    NodoSoftware* actual = inicio;
    do {
        NodoSoftware* siguiente = actual->siguiente;
        delete actual->software; // Libera la memoria del objeto Software
        delete actual;
        actual = siguiente;
    } while (actual != inicio);

    inicio = nullptr;
}

void ListaCircularSoftware::agregarSoftware(Software* software) {
    NodoSoftware* nuevoNodo = new NodoSoftware(software);

    if (!inicio) {
        nuevoNodo->siguiente = nuevoNodo; // Si la lista está vacía, el nuevo nodo se apunta a sí mismo
        inicio = nuevoNodo;
    } else {
        NodoSoftware* ultimo = inicio;
        while (ultimo->siguiente != inicio) {
            ultimo = ultimo->siguiente;
        }
        nuevoNodo->siguiente = inicio; // El nuevo nodo apunta al inicio
        ultimo->siguiente = nuevoNodo; // El último nodo apunta al nuevo nodo
    }
}

void ListaCircularSoftware::imprimirSoftware() {
    if (!inicio) {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    NodoSoftware* actual = inicio;
    do {
        Software* software = actual->software;
        std::cout << "Nombre: " << software->getName() << std::endl;
        // Imprime otros atributos de software según sea necesario

        actual = actual->siguiente;
    } while (actual != inicio);
}

void ListaCircularSoftware::liberarSoftware() {
    if (!inicio) return; // La lista está vacía

    NodoSoftware* actual = inicio;
    do {
        NodoSoftware* siguiente = actual->siguiente;
        delete actual->software; // Libera la memoria del objeto Software
        delete actual;
        actual = siguiente;
    } while (actual != inicio);

    inicio = nullptr;
}
bool ListaCircularSoftware::borrarSoftware(const std::string& nombre) {
    if (!inicio) {
        return false; // La lista está vacía, no se puede borrar nada.
    }

    NodoSoftware* actual = inicio;
    NodoSoftware* anterior = nullptr;

    do {
        Software* software = actual->software;

        // Verifica si el nombre del software coincide
        if (software->getName() == nombre) {
            // Elimina el nodo actual de la lista
            if (actual == inicio) {
                if (inicio->siguiente == inicio) {
                    // La lista solo tiene un elemento
                    inicio = nullptr;
                } else {
                    // Actualiza el inicio de la lista
                    inicio = inicio->siguiente;
                }
            } else {
                // Elimina el nodo actual de la lista
                anterior->siguiente = actual->siguiente;
            }

            // Libera la memoria del software y el nodo actual
            delete software;
            delete actual;

            return true; // Software encontrado y eliminado
        }

        anterior = actual;
        actual = actual->siguiente;
    } while (actual != inicio);

    return false; // Software no encontrado en la lista
}
