#pragma once
#include "Usuario.h"
#include <string>

class NormalUser : public Usuario {
public:
    NormalUser(const std::string& user, const std::string& password, int age, const std::string& mail);

    std::string getMail() const;
    void setMail(const std::string& mail);

private:
    std::string correo;
};