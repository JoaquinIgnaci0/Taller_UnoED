#include "Navegador.h"

Navegador::Navegador(const std::string& name, const std::string& developer, int classification, int price, const std::string& historial)
        : Software(name, developer, classification, price)
{
    // Constructor de Navegador
    this->historialNave = historialNave;
}

std::string Navegador::mostrarHistorial()
{
    return this->historialNave;
}

void Navegador::ingresarHistorial(const std::string& historial)
{
    this->historialNave = historial;
}