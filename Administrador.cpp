#include "Administrador.h"

Administrador::Administrador(const std::string& user, const std::string& password, int age, const std::string& correo, bool log)
        : Usuario(user, password, age), correo(correo), log(log) {}

std::string Administrador::getCorreo() const {
    return correo;
}

void Administrador::setCorreo(const std::string& correo) {
    this->correo = correo;
}

bool Administrador::getLog() const {
    return log;
}

void Administrador::setLog(bool log) {
    this->log = log;
}