#pragma once
#include "Usuario.h"
#include <string>

class Administrador : public Usuario {
public:
    Administrador(const std::string& user, const std::string& password, int age, const std::string& correo, bool log);

    std::string getCorreo() const;
    void setCorreo(const std::string& correo);

    bool getLog() const;
    void setLog(bool log);

private:
    std::string correo;
    bool log;
};