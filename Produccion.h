#pragma once
#include "Software.h"

class Produccion : public Software
{
private:
    std::string tipoSolucion;

public:
    Produccion(const std::string& name, const std::string& developer, int classification,int price, const std::string& solutionType);

    std::string getTipoSolucion();
    void setTipoSolucion(const std::string& solutionType);
};
