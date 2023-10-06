#include "Social.h"
#include "Software.h"
#include "Usuario.h"
#include <algorithm> // Para std::find

Social::Social(const std::string& name, const std::string& developer, int classification,int price, int cantAmigos)
        : Software(name, developer, classification,price)
{
    // Constructor de Social
    this->cantidadAmigos = cantAmigos;
    this->listaAmigos = listaAmigos;

}

int Social::getCantAmigos()
{
    return this->cantidadAmigos;
}

void Social::setCantAmigos(int cantAmigos)
{
    this->cantidadAmigos = cantAmigos;
}

void Social::mostrarAmigos()
{
    std::cout << "Amigos de " << this->getName() << ":" << std::endl;

    if (!listaAmigos.empty())
    {
        for (Usuario & amigo : listaAmigos)
        {
            std::cout << amigo.getUser() << std::endl;
        }
    }
    else
    {
        // Si la lista de amigos está vacía, puedes devolver un objeto Usuario vacío o lanzar una excepción.
        // Aquí devolvemos un objeto Usuario vacío.
        std::cout << "No hay nada en la lista "<< std::endl;
    }
}

void Social::agregarAmigos(const Usuario& amigo)
{
    listaAmigos.push_back(amigo);
}
/*
void Social::eliminarAmigo(const Usuario& amigo)
{
    // Utiliza un iterador para buscar al amigo en la lista de amigos.
    auto it = std::find(listaAmigos.begin(), listaAmigos.end(), amigo);

    // Verifica si se encontró al amigo en la lista.
    if (it != listaAmigos.end())
    {
        // Si se encontró al amigo, elimínalo de la lista.
        listaAmigos.erase(it);
        std::cout << "Amigo " << amigo.getNombre() << " eliminado de la lista de amigos." << std::endl;
    }
    else
    {
        std::cout << "Amigo " << amigo.getNombre() << " no encontrado en la lista de amigos." << std::endl;
    }
}*/
