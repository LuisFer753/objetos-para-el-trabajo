#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include "Persona.h"

// clase hija de Persona
class Trabajador: public Persona::Persona{
    private:
        std::string estadoEmocional;
    public:
        Trabajador(): Persona::Persona(){};
        Trabajador(std::string n, int e, std::string r, std::string ee): Persona::Persona(n, e, r), estadoEmocional(ee) {};
        std::string atender();
        std::string getEstadoEmocional();
};

// funciones que son métodos de la clase Trabajador
std::string Trabajador::atender(){
    return "Los clientes están sendo atendidos";
}

std::string Trabajador::getEstadoEmocional() {
    return estadoEmocional;
}

#endif