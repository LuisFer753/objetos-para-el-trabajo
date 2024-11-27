#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <sstream>

class Persona{
    protected:
        std::string nombre;
        int edad;
        std::string rol;
    public:
        Persona(): nombre(""), edad(0), rol(""){};
        Persona(std::string nom, int ed, std::string ro): nombre(nom), edad(ed), rol(ro){};
        std::string get_nombre();
        int get_edad();
        std::string get_rol();
        void set_nombre(std::string);
        void set_edad(int);
        void set_rol(std::string);
};

#endif

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

class Directivo: public Persona{
    public:
        Directivo(): Persona(){};
        Directivo(std::string nom, int ed, std::string ro): Persona(nom, ed, ro){};
};


class Trabajador: public Persona{
    public:
        Trabajador(): Persona(){};
        Trabajador(std::string nom, int ed, std::string ro): Persona(nom, ed, ro){};
};


class Cliente: public Persona{
    public:
        Cliente(): Persona(){};
        Cliente(std::string nom, int ed, std::string ro): Persona(nom, ed, ro){};
};


class Empresa{
    private:
        Directivo directivos[10];
        Trabajador trabajadores[10];
        Cliente clientes[10];
        std::string nombre;
        int n_directivos=0;
        int n_trabajadores=0;
        int n_clientes=0;
    public:
        Empresa(): nombre(""){};
        Empresa(std::string nom): nombre(nom){};
        std::string get_nombre();
        void set_nombre(std::string);
        void contratar_d(std::string, int, std::string);
        void contratar_t(std::string, int, std::string);
        void contratar_c(std::string, int, std::string);
        std::string mostrar_directivos();
        std::string mostrar_trabajadores();
        std::string mostrar_clientes();
        std::string mostrar_salarios(int);
};

std::string Empresa::get_nombre(){
    return nombre;
}

void Empresa::set_nombre(std::string n){
    nombre=n;
}

void Empresa::contratar_d(std::string n, int e, std::string r){
    directivos[n_directivos]=Directivo(n, e, r);
    n_directivos++;
}

void Empresa::contratar_t(std::string n, int e, std::string r){
    trabajadores[n_trabajadores]=Trabajador(n, e, r);
    n_trabajadores++;
}

void Empresa::contratar_c(std::string n, int e, std::string r){
    clientes[n_clientes]=Cliente(n, e, r);
    n_clientes++;
}

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


