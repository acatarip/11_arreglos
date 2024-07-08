// Programa que pide n numeros, los guarda en un arreglo,
// escribe la sumatoria de numeros y escribe el porcentaje de ceros
#include <iostream>
using namespace std;
int main (){
    system("cls");
    int ss=0, n;
    float pp=0, p100;

    cout<<"Ingrese la cantidad de numeros para el arreglo: "; cin>>n;
    int A[n];

    if (n>0){
        for (int i=0;i<n;i++){
            cout<<"Ingrese valor "<<i+1<<": "; cin>>A[i];
            ss=ss+A[i];
            if (A[i]==0){
                pp=pp+1;
            }
        }
        p100=(pp/n)*100;
        cout<<"La sumatoria de los numeros es "<<ss<<endl;
        cout<<"El porcentaje de ceros en el arreglo es del "<<p100<<"%";

    }
    else {
        cout<<"Cantidad de numeros para el arreglo no valido.";
    }
    return 0;
}