#include <iostream>
using namespace std;

void MULTI(int a[], int b, int c);

int main(){
	int n, mm;
	cout<<"Indique longitud del arreglo: "; cin>>n;
	while (n<=0){
		cout<<"Longitud invalida."<<endl;
		cout<<"Indique longitud del arreglo: "; cin>>n;
	}
	
	
	cout<<"Ingrese un numero: "; cin>>mm;
	while (mm<=0){
		cout<<"Numero no valido."<<endl;
		cout<<"Ingrese un numero: "; cin>>mm;
	}
	
	cout<<endl;
	int A[n];
	MULTI(A, n, mm);
	cout<<endl<<"Los primeros "<<n<<" multiplos de "<<mm<<" son: ";
	for (int j=0; j<n; j++){
		cout<<A[j]<<" ";
	}
	return 0;
}

void MULTI(int a[], int b, int c){
	for (int i=0; i<b; i++){
		a[i] = c * (i+1);
	}
	
}