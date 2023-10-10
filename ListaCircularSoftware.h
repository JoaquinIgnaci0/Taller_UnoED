
#pragma once
#include "Software.h"
#include "NodoSoftware.h"

class ListaCircularSoftware {
private:
    NodoSoftware* inicio;

public:
    ListaCircularSoftware();
    ~ListaCircularSoftware();

    void agregarSoftware(Software* software);
    void imprimirSoftware();
    void liberarSoftware();
    bool borrarSoftware(const std::string& nombre);
};
