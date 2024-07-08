// Programa que pide la temperatura maxima y minima de 7 dias
// luego escribe la temperatura media de cada dia
// escribe el dia con menor temperatura
// escribe que dias coinciden con la temperatura ingresada
#include <iostream>
using namespace std;
int main (){
	float td1[7], td2[7], tdp[7];
	//td1 - temperatura diaria minima
	//td2 - temperatura diaria maxima
	//tdp - temperatura diaria promedio
	int MEN=0;  //variable para determinar el dia con menor temperatura
	
	for (int d=0; d<7; d++){  //ingreso de datos por dia
		cout<<"Ingrese temperatura minima del dia "<<d+1<<": "; cin>>td1[d];
		cout<<"Ingrese temperatura maxima del dia "<<d+1<<": "; cin>>td2[d];
	}
	
	system("cls");
	for (int e=0; e<7; e++){
		tdp[e] = (td1[e] + td2[e])/2;
		cout<<"La temperatura media del dia "<<e+1<<" es "<<tdp[e]<<" grados."<<endl;
		
		if (td1[MEN] > td1[e]){
			MEN=e;
		}
	}
	cout<<endl<<"El dia "<<MEN+1<<" tuvo la menor temperatura, con "<<td1[MEN]<<" grados."<<endl<<endl;
	
	bool g=false;  //variable que indica si hay temperaturas que coinciden con la que se ingresará
	float tmax;  //temperatura que se ingresará
	
	cout<<"Ingrese temperatura maxima a comparar: "; cin>>tmax;
	cout<<"Los dias con igual temperatura son: "<<endl;
	for (int f=0; f<7; f++){
		if (tmax==td2[f]){
			cout<<"Dia "<<f+1<<endl;
			g=true;  //hay al menos 1 dia que coincide
		}
	}
	if (g==false){  //ningun dia coincide
		cout<<"Ningun dia coincide."<<endl;
	}
	
	return 0;
}