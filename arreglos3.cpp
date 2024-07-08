#include <iostream>
using namespace std;
int main (){
	float td1[7], td2[7], tdp[7];
	int d, e, MEN=0;
	
	for (d=0; d<7; d++){
		cout<<"Ingrese min "<<d+1<<": "; cin>>td1[d];
		cout<<"Ingrese max "<<d+1<<": "; cin>>td2[d];
	}
	
	for (e=0; e<7; e++){
		tdp[e] = (td1[e] + td2[e])/2;
		cout<<"Temperatura media de "<<e+1<<" es "<<tdp[e]<<endl;
		
		if (td1[MEN] > td1[e]){
			MEN=e;
		}
	}
	cout<<"Dia menor temperatura es "<<MEN+1<<" con "<<td1[MEN]<<endl;
	
	return 0;
}