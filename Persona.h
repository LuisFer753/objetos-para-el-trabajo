#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <sstream>

//la clase madre Persona contiene todos los atrbutos y métodos que Directivo, Trabajador y Cliente tendrán
class Persona{
    protected:
        std::string nombre;
        int edad;
        std::string rol;
    public:
        Persona();
        Persona(std::string nom, int ed, std::string ro); // el constructor que por defecto también usarán las clases hijas
        std::string get_nombre();
        int get_edad();
        std::string get_rol();
        void set_nombre(std::string);
        void set_edad(int);
        void set_rol(std::string);
};

Persona::Persona(): nombre(""), edad(0), rol(""){};
Persona::Persona(std::string nom, int ed, std::string ro): nombre(nom), edad(ed), rol(ro) {};

void Persona::set_nombre(std::string nom){
    nombre=nom;
}

void Persona::set_edad(int ed){
    edad=ed;
}

void Persona::set_rol(std::string ro){
    rol=ro;
}

std::string Persona::get_nombre(){
    return nombre;
}

int Persona::get_edad(){
    return edad;
}

std::string Persona::get_rol(){
    return rol;
}

#endif