#include "persona.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    char emp[25];
    cout<<"Una empresa se funda, como se llamara? ";
    cin>>emp; //getline(cin, emp);
    Empresa here(emp);
    int sigue=1;
    while (sigue==1){
        cout<<"\nque quieres hacer? \n1) Contratar a un directivo\n"
            <<"2) Contratar un trabajador\n3) Tener un cliente\n"
            <<"4) Mostrar directivos\n5) Mostrar trabajadores\n6) Mostrar clientes\n"
            <<"7) Ver dinero de salario a directivos\n8) Ver dinero de salario a trabajadores\n"
            <<"9) Terminar programa\n"<<endl;
        string opcion;
        cin>>opcion; //getline(cin, opcion);
        if (opcion=="1"){
            string nom_d;
            int edd_d;
            string rol_d;
            cout<<"Como se llama tu nuevo directivo?\n";
            cin>>nom_d;
            cout<<"Que edad tiene tu nuevo directivo?\n";
            cin>>edd_d;
            cout<<"Que rol tendra tu nuevo directivo?\n";
            cin>>rol_d;
            here.contratar_d(nom_d, edd_d, rol_d);
        }else if (opcion=="2"){
            string nom_t;
            int edd_t;
            string rol_t;
            cout<<"Como se llama tu nuevo trabajador?\n";
            cin>>nom_t;
            cout<<"Que edad tiene tu nuevo trabajador?\n";
            cin>>edd_t;
            cout<<"Que rol tendra tu nuevo trabajador?\n";
            cin>>rol_t;
            here.contratar_t(nom_t, edd_t, rol_t);
        }else if (opcion=="3"){
            string nom_c;
            int edd_c;
            string rol_c;
            cout<<"Como se llama tu nuevo cliente?\n";
            cin>>nom_c;
            cout<<"Que edad tiene tu nuevo cliente?\n";
            cin>>edd_c;
            cout<<"Que rol tendra tu nuevo cliente?\n";
            cin>>rol_c;
            here.contratar_c(nom_c, edd_c, rol_c);
        }else if (opcion=="4"){
            cout<<here.mostrar_directivos();
        }else if (opcion=="5"){
            cout<<here.mostrar_trabajadores();
        }else if (opcion=="6"){
            cout<<here.mostrar_clientes();
        }else if (opcion=="7"){
            cout<<here.mostrar_salarios(1);
        }else if (opcion=="8"){
            cout<<here.mostrar_salarios(2);
        }else if (opcion=="9"){
            cout<<"Programa termnado\n "<<here.get_nombre()<<" agradece su servicio.";
            sigue=0;
        }else{
            cout<<"Opcion no valida\n\n\n";
        };
    }

    return 0;
}
