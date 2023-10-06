// Nodo.h
#pragma once
#include "Software.h"

class NodoSoftware {
public:
    Software* software;
    NodoSoftware* siguiente;

    NodoSoftware(Software* s);
};
