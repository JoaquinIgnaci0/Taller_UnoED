#include "Ofimatica.h"

Ofimatica::Ofimatica(const std::string& name, const std::string& developer, int classification,int price, int archCreate)
        : Software(name, developer, classification,price)
{
    // Constructor de Ofimatica
    this-> cantArchCreate = archCreate;
}

int Ofimatica::getCantArchCreate()
{
    return this->cantArchCreate;
}

void Ofimatica::setCantArchCreate(int archCreate)
{
    this->cantArchCreate = archCreate;
}
