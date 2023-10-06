#include "NormalUser.h"

NormalUser::NormalUser(const std::string& user, const std::string& password, int age, const std::string& mail)
        : Usuario(user, password, age), correo(mail) {}

std::string NormalUser::getMail() const {
    return correo;
}

void NormalUser::setMail(const std::string& mail) {
    this->correo = mail;
}