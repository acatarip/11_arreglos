#include <iostream>
using namespace std;

void MULTI(int a[], int b);

int main(){
	int n;
	cout<<"Indique longitud del arreglo: "; cin>>n;
	while (n<=0){
		cout<<"Longitud invalida."<<endl;
		cout<<"Indique longitud del arreglo: "; cin>>n;
	}
	int A[n];
	MULTI(A, n); 
	
	for (int j=0; j<n; j++){
		cout<<A[j]<<" ";
	}
	return 0;
}

void MULTI(int a[], int b){
	int c;
	cout<<"Ingrese un numero: "; cin>>c;
	while (c<=0){
		cout<<"Numero no valido."<<endl;
		cout<<"Ingrese un numero: "; cin>>c;
	}
	for (int i=0; i<b; i++){
		a[i] = c * (i+1);
	}
	
}