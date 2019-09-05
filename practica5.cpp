#include <bits/stdc++.h>

using namespace std;

struct suscribir{
    char nombre[10];
    int tiempo;
    char revista[10];
};

int main(int argc, char** argv){
    struct suscribir s[10];
    struct suscribir *apuntador;
    apuntador=&s[10];

    int option;
    cout<<"1.- Suscribir: "<<endl;
    cout<<"2.- Borrar: "<<endl;
    cout<<"3.- Buscar: "<<endl;
    cout<<"4.- Salir: "<<endl;
    cout<<"Selecciona la opcion que quieras realizar: ";
    cin>>option;
    switch(option){

    case 1:
        cout<<"AGREGAR USUARIO"<<endl;
        for (int i=0; i<2;i++){
            fflush(stdin);
            cout<<"Nombre: ";
            cin.getline(s[i].nombre,10,'\n');
            cout<<"Tiempo: ";
            cin>>s[i].tiempo;
            fflush(stdin);
            cout<<"Revista que suscribe: ";
            cin>>s[i].revista;
            cout<<endl;
        }
        break;
    case 2:
        cout<<"ELIMINAR USUARIO"<<endl;
        char nombre[10];
        cout<<"Nombre de la persona: "<<endl;
        break;

    }
    return 0;

}


