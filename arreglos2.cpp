#include <iostream>
using namespace std;
int main (){
	int pp=0, ii=0, n, i, j, k;
	cout<<"Ingrese la cantidad de elementos: "; cin>>n; cout<<endl;
	int A[n], PAR[n], IMP[n];
	
	for (i=0; i<n; i++){
		cout<<"Ingrese el elemento "<<i+1<<": "; cin>>A[i];
		if (A[i] % 2 == 0){
			pp++;
			PAR[pp] = A[i];
		}
		else{
			ii++;
			IMP[ii] = A[i];
		}
	}
	system("PAUSE");
	cout<<endl;
	
	cout<<"Lista de los elementos impares:";
	for (j=1; j<=ii; j++){
		cout<<" "<<IMP[j];
	}
	cout<<endl;
	
	cout<<"Lista de los elementos pares:";
	for (k=1; k<=pp; k++){
		cout<<" "<<PAR[k];
	}
	return 0;
}