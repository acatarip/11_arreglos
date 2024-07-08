//Programa que pide longitud n de un arreglo, un numero mm
// y escribe los n primeros multiplos de mm
#include <iostream>
using namespace std;

void MULTI(int a[], int b, int c);  //se declara la funcion MULTI

int main(){
	int n, mm;
	// mm - numero del que se calculara sus multiplos
	cout<<"Indique longitud del arreglo: "; cin>>n;
	while (n<=0){  //bucle para que n sea positivo
		cout<<"Longitud invalida."<<endl;
		cout<<"Indique longitud del arreglo: "; cin>>n;
	}
	cout<<"Ingrese un numero: "; cin>>mm;
	while (mm<=0){  //bucle para que mm sea positivo
		cout<<"Numero no valido."<<endl;
		cout<<"Ingrese un numero: "; cin>>mm;
	}
	cout<<endl;
	int A[n];
	MULTI(A, n, mm);  //se llama a la funcion MULTI
	cout<<endl<<"Los primeros "<<n<<" multiplos de "<<mm<<" son: ";
	for (int j=0; j<n; j++){
		cout<<A[j]<<" ";
	}
	return 0;
}
//se define la funcion void
void MULTI(int a[], int b, int c){
	for (int i=0; i<b; i++){
		a[i] = c * (i+1);
	}
	
}