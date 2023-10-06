#pragma once
#include "Software.h"

class Navegador : public Software
{
private:
    std::string historialNave;

public:
    Navegador(const std::string& name, const std::string& developer, int classification, int price, const std::string& historial);

    std::string mostrarHistorial();
    void ingresarHistorial(const std::string& historial);
};
