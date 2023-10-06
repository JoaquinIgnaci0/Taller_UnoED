#pragma once
#include "Software.h"

class Juego : public Software
{
private:
    std::string genero;

public:
    Juego(const std::string& name, const std::string& developer, int classification, int price, const std::string& genero);

    std::string getGenero();
    void setGenero(const std::string& genero);
};