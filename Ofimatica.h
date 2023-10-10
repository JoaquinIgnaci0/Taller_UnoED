#pragma once
#include "Software.h"

class Ofimatica : public Software
{
private:
    int cantArchCreate;

public:
    Ofimatica(const std::string& name, const std::string& developer, int classification,int price, int archCreate);

    int getCantArchCreate();
    void crearArch();
    void eliminarArch();

};
