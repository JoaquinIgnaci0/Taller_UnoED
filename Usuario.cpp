#include "Usuario.h"
#include <iostream>

Usuario::Usuario(const std::string& user, const std::string& password, int age) {
    this->user = user;
    this->password = password;
    this->age = age;
}

std::string Usuario::getUser() const {
    return this->user;
}

void Usuario::setUser(const std::string& user) {
    this->user = user;
}

std::string Usuario::getPassword() const {
    return this->password;
}

void Usuario::setPassword(const std::string& password) {
    this->password = password;
}

int Usuario::getAge() const {
    return this->age;
}

void Usuario::setAge(int age) {
    this->age = age;
}