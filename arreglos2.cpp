#include <iostream>
using namespace std;
int main (){
	int pp=0, ii=0, n, i, j, k;
	cout<<"Ingrese cantidad de numeros: "; cin>>n;
	int A[n], PAR[n], IMP[n];
	
	for (i=0; i<n; i++){
		cout<<"Ingrese "<<i+1<<": "; cin>>A[i];
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
	
	for (j=1; j<=ii; j++){
		cout<<IMP[j]<<" ";
	}
	cout<<endl;
	
	for (k=1; k<=pp; k++){
		cout<<PAR[k]<<" ";
	}
	return 0;
}