#ifndef DIRECTIVO_H
#define DIRECTIVO_H

#include <string>
#include "Persona.h"

//Clase hija de Persona
class Directivo: public Persona::Persona {
    private:
        int anosExperiencia;
    public:
        Directivo(): Persona::Persona(), anosExperiencia(0){};
        Directivo(std::string n, int e, std::string r, int exp): Persona::Persona(n, e, r), anosExperiencia(exp){};
        std::string supervisar();
        int getExperiencia();
};

// Funciones que son métodos de la clase Directivo
std::string Directivo::supervisar(){
    return "Los trabajadores se ven supervisados";
}

int Directivo::getExperiencia(){
    return anosExperiencia;
}

#endif