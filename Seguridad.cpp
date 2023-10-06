#include "Seguridad.h"

Seguridad::Seguridad(const std::string& name, const std::string& developer, int classification,int price, const std::string& malwareType)
        : Software(name, developer, classification,price)
{
    // Constructor de Seguridad
    this-> tipoMalware = malwareType;
}

std::string Seguridad::getTipoMalware()
{
    return this->tipoMalware;
}

void Seguridad::setTipoMalware(const std::string& malwareType)
{
    this->tipoMalware = malwareType;
}
