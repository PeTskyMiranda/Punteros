#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv){

    int arreglo[10];
    int mayor=INT_MIN;
    int *puntero=arreglo;

    for (;puntero<=&arreglo[9];puntero++){
        cout<<"Ingresa un valor: "<<endl;
        cin>>*puntero;
        if(*puntero>mayor) mayor=*puntero;

     }
    cout<<"El valor mas grande:"<<mayor<<endl;
    return 0;
}

