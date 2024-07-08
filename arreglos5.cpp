#include <iostream>
using namespace std;
int main (){
	int nfp, npg, MAX;
	cout<<"Indique cantidad de estudiantes en Fundamentos de Programacion: "; cin>>nfp;
	string FP[nfp];
	for (int i=0; i<nfp; i++){
		cout<<"(reemplace los espacios entre nombres con el signo _ )"<<endl;
		cout<<"Ingrese nombre del estudiante "<<i+1<<": "; cin>>FP[i];
	}
	
	cout<<endl<<"Indique cantidad de estudiantes en Programacion Grafica: "; cin>>npg;
	cout<<"(reemplace los espacios entre nombres con el signo _ )"<<endl;
	string PG[npg];
	for (int j=0; j<npg; j++){
		cout<<"Ingrese nombre del estudiante "<<j+1<<": "; cin>>PG[j];
	}
	
	if (nfp<npg){
		MAX=npg;
	}
	else{
		MAX=nfp;
	}
	string c[MAX];
	int t=0; 
	for (int k=0; k<MAX; k++){
		for (int p=0; p<npg; p++){
			if (FP[k]==PG[npg]){
				t++;
				c[k]=FP[k];
			}
		}
	}
	cout<<"Estudiantes comunes: "<<endl;
	for (int q=0; q<MAX; q++){
		cout<<c[q]<<" ";
	}
	return 0;
}