#include "Software.h"

Software::Software(const std::string& name, const std::string& developer,
                   int classification, int price)
{
    this->name = name;
    this->developer = developer;
    this->classification_age = classification;
    this->price = price;
    // La lista listUsers se inicializa automáticamente como una lista vacía
}




std::string Software::getName()
{
    return this->name;
}

void Software::setName(const std::string& name)
{
    this->name = name;
}

std::string Software::getDeveloper()
{
    return this->developer;
}

void Software::setDeveloper(const std::string& developer)
{
    this->developer = developer;
}

int Software::getClassification()
{
    return this->classification_age;
}

void Software::setClassification(int classification)
{
    this->classification_age = classification;
}

std::vector<Usuario> Software::mostrarListUser()
{
    return this->listUsers;
}

void Software::agregarListUser(const Usuario& user)
{
    this->listUsers.push_back(user);
}

int Software::getPrice() const
{
    return this->price;
}

void Software::setPrice(int price)
{
    this->price = price;
}
