#include "persona.h"
#include <iostream>

using namespace std;

int main(){
    Empresa here("Here's it");
    cout << here.get_nombre() << " es una empresa de comercio exterior\n"
        << "Esta tiene empleados activos y en vacaciones, al igual que clientes activos e inactivos\n\n";
    
    here.contratar_d("Walter Strikler", 38, "supervisor");
    here.contratar_t("James Lake", 24, "investigador");
    cout << "Los nombres, edades y puestos de los actuales miembros de la empresa en vacaciones son:\n"
        << here.mostrar_directivos() << here.mostrar_trabajadores() << "\n";

    here.contratar_c("Tobias Domsalsky", 40, "comprador");
    cout << "Mientras que uno de los clientes más destacados de la empresa es:\n"
        << here.mostrar_clientes() << "\n";

    Directivo dominic("Dominic Parmic", 50, "supervisor");
    Trabajador cisco("Francisco Wells", 26, "investigador");
    cout << "Por otro lado, los actuales miembros de la empresa que estan activos son:\n"
        << dominic.get_nombre() << "  " << dominic.get_edad() << "  " << dominic.get_rol() << "\n"
        << cisco.get_nombre() << "  " << cisco.get_edad() << "  " << cisco.get_rol() << "\n\n";

    Cliente martin("Martin Stein", 60, "socio");
    cout << "A su vez, de las personas externas mas importantes para " << here.get_nombre() << " es:\n"
        << martin.get_nombre() << "  " << martin.get_edad() << "  " << martin.get_rol() << "\n\n";

    cout << dominic.get_nombre() << " al ser " << dominic.get_rol() << ", se encarga de estar " << dominic.admin_s() << ", entre otras cosas.\n"
        << cisco.get_nombre() << " al ser un " << cisco.get_rol() << " ejemplar, es el que casi siempre se la pasa " << cisco.atender() << " por telefono.\n"
        << "Y " << martin.get_nombre() << " al ser un gran " << martin.get_rol()<< ", " << martin.aportar() << " seguido.";

    return 0;
}