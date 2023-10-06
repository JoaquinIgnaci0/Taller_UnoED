#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"

class Software
{
private:
    std::string name;
    std::string developer;
    int classification_age;
    std::vector<Usuario> listUsers;
    int price;

public:
    Software(const std::string& name, const std::string& developer, int classification, int price);  // Constructor
    std::string getName();
    void setName(const std::string& name);
    std::string getDeveloper();
    void setDeveloper(const std::string& developer);
    int getClassification();
    void setClassification(int classification);
    std::vector<Usuario> mostrarListUser();
    void agregarListUser(const Usuario& user);
    int getPrice() const;
    void setPrice(int price);
};
