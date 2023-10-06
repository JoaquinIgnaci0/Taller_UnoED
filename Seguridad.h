#pragma once
#include "Software.h"

class Seguridad : public Software
{
private:
    std::string tipoMalware;

public:
    Seguridad(const std::string& name, const std::string& developer,int classification,int price, const std::string& malwareType);

    std::string getTipoMalware();
    void setTipoMalware(const std::string& malwareType);
};
