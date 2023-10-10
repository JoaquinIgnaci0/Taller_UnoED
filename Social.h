#pragma once
#include "Software.h"
#include "Usuario.h"
#include <vector>

class Social : public Software
{
private:

    std::vector<Usuario> listaAmigos;

public:
    Social(const std::string& name, const std::string& developer, int classification,int price);

    int getCantAmigos();
    void setCantAmigos(int cantAmigos);
    void mostrarAmigos();
    void agregarAmigos(const Usuario& amigo);
    //void eliminarAmigo(const Usuario& amigo);
};