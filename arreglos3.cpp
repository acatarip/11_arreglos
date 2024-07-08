#include <iostream>
using namespace std;
int main (){
	float td1[7], td2[7], tdp[7], tmax;
	int d, e, MEN=0;
	
	for (d=0; d<7; d++){
		cout<<"Ingrese min "<<d+1<<": "; cin>>td1[d];
		cout<<"Ingrese max "<<d+1<<": "; cin>>td2[d];
	}
	
	system("cls");
	for (e=0; e<7; e++){
		tdp[e] = (td1[e] + td2[e])/2;
		cout<<"Temperatura media de "<<e+1<<" es "<<tdp[e]<<endl;
		
		if (td1[MEN] > td1[e]){
			MEN=e;
		}
	}
	cout<<"Dia menor temperatura es "<<MEN+1<<" con "<<td1[MEN]<<endl;
	
	bool g=false;
	cout<<"Ingrese temperatura max a comparar: "; cin>>tmax;
	cout<<"Los dias con igual temperatura son: "<<endl;
	for (int f=0; f<7; f++){
		if (tmax==td2[f]){
			cout<<"Dia "<<f+1<<endl;
			g=true;
		}
	}
	if (g==false){
		cout<<"Ningun dia coincide.";
	}
	
	return 0;
}