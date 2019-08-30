#include <bits/stdc++.h>

using namespace std;

struct lugar{
    char habitad[20];
    char ciudad[20];
};
struct animal{
    char nombre[20];
    int edad;
    float estatura;
    struct lugar lugr;
};

int main(int argc, char** argv){
    struct animal P1[5];
    struct animal *apuntador;

    apuntador=&P1[0];

    for (int i=0; i<2;i++){
       cout<<"Nombre: ";
       cin.getline(P1[i].nombre,20,'\n');
       cout<<"Edad: ";
       cin>>P1[i].edad;
       cout<<"Estatura: ";
       cin>>P1[i].estatura;
       cout<<"habitad: ";
       fflush(stdin);
       cin.getline(P1[i].lugr.habitad,20,'\n');
       cout<<endl;
    }


    cout<<" Nombre guardado: "<<P1[0].nombre<<endl;
    cout<<" Edad guardada: "<<P1[0].edad<<endl;
    cout<<" Estarura guardada: "<<P1[0].estatura<<endl;
    cout<<" habitad guardada: "<<P1[0].lugr.habitad<<endl;

    system("pause");
    return 0;
}
