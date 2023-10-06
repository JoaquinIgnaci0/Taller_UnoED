#include "Juego.h"

Juego::Juego(const std::string& name, const std::string& developer, int classification, int price, const std::string& genero)
        : Software(name, developer, classification, price)
{
    // Constructor de Juego
    this->genero = genero;
}

std::string Juego::getGenero()
{
    return this->genero;
}

void Juego::setGenero(const std::string& genero)
{
    this->genero = genero;
}