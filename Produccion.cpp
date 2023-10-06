#include "Produccion.h"

Produccion::Produccion(const std::string& name, const std::string& developer, int classification, int price,const std::string& solutionType)
        : Software(name, developer, classification,price)
{
    // Constructor de Produccion
    this->tipoSolucion = solutionType;
}

std::string Produccion::getTipoSolucion()
{
    return this->tipoSolucion;
}

void Produccion::setTipoSolucion(const std::string& solutionType)
{
    this->tipoSolucion = solutionType;
}
