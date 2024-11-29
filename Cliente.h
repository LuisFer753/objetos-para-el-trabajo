#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

//Clase hija de Persona
class Cliente: public Persona{
    private:
        int satisfaccion;
    public:
        Cliente(): Persona(){};
        Cliente(std::string n, int e, std::string r, int s): Persona(n, e, r), satisfaccion(s){};
        std::string comprar();
        int getSatisfaccion();
};

// funciones que representan métodos para la clase Cliente
std::string Cliente::comprar(){
    return "Se están llevando a cabo compras";
}

int Cliente::getSatisfaccion(){
    return satisfaccion;
}

#endif 