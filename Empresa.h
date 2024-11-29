#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Directivo.h"
#include "Trabajador.h"
#include "Cliente.h"

// Clase que contiene composición de las clases hijas Directivo Trabajador y Cliente
class Empresa{
    private:
        // Arreglos que contendrán a los objetos de otras clases en esta
        Directivo directivos[10];
        Trabajador trabajadores[10];
        Cliente clientes[10];
        std::string nombre;
        //Contadores de los objetos de otras clases creados en esta
        int n_directivos=0;
        int n_trabajadores=0;
        int n_clientes=0;
    public:
        Empresa(): nombre(""){};
        Empresa(std::string nom): nombre(nom){};
        std::string get_nombre();
        void set_nombre(std::string );
        void contratar_d(std::string n, int e, std::string r, int exp);
        void contratar_t(std::string n, int e, std::string r, std::string ee);
        void contratar_c(std::string n, int e, std::string r, int s);
        std::string mostrar_directivos();
        std::string mostrar_trabajadores();
        std::string mostrar_clientes();
        std::string mostrar_salarios(int );
};

// métodos referentes al nombre de la Empresa creada por el usuario
std::string Empresa::get_nombre(){
    return nombre;
}

void Empresa::set_nombre(std::string n){
    nombre=n;
}

// métodos que ejecutan la composición al crear objetos de las clases Directivo, Trabajador y Cliente dentro de Empresa
void Empresa::contratar_d(std::string n, int e, std::string r, int exp){
    directivos[n_directivos]=Directivo(n, e, r, exp);
    n_directivos++;
}

void Empresa::contratar_t(std::string n, int e, std::string r, std::string ee){
    trabajadores[n_trabajadores]=Trabajador(n, e, r, ee);
    n_trabajadores++;
}

void Empresa::contratar_c(std::string n, int e, std::string r, int s){
    clientes[n_clientes]=Cliente(n, e, r, s);
    n_clientes++;
}

// métodos que usan un ciclo para recorrer y concatenar la información de los objetos creados en Empresa para mandarla a imprimir
std::string Empresa::mostrar_directivos(){
    std::stringstream aux;
    for (int i = 0; i < n_directivos; i++) {
        aux << i << "-  " << directivos[i].get_nombre() << "  " << directivos[i].get_edad() << "  " << directivos[i].get_rol() << '\n';
    };
    return aux.str();
}

std::string Empresa::mostrar_trabajadores(){
    std::stringstream aux;
    for (int i = 0; i < n_trabajadores; i++) {
        aux << i << "-  " << trabajadores[i].get_nombre() << "  " << trabajadores[i].get_edad() << "  " << trabajadores[i].get_rol() << '\n';
    };
    return aux.str();
}

std::string Empresa::mostrar_clientes(){
    std::stringstream aux;
    for (int i = 0; i < n_clientes; i++) {
        aux << i << "-  " << clientes[i].get_nombre() << "  " << clientes[i].get_edad() << "  " << clientes[i].get_rol() << '\n';
    };
    return aux.str();
}

// método que calcula el salario de los directivos y trabajadores de la empresa basados en el número de directivos y trabajadores que el usuario creó
std::string Empresa::mostrar_salarios(int op){
    std::stringstream aux;
    if (op==1){
        aux << "El dinero destinado al salario de los directivos es $" << n_directivos*24000 << "\n";
        return aux.str();
    }else{
        aux << "El dinero destinado al salario de los trabajadores es $" << n_trabajadores*15000 << "\n";
        return aux.str();
    };
}

#endif