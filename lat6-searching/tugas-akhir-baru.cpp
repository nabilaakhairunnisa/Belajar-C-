#include<iostream>
using namespace std;

int main(){
	int Nilai [25] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
	int Posisi [25];
	int i, j, Bilangan, Banyak=0;
	bool Ketemu;
	
	//Mencetak Elemen Array
	cout<<"Deretan Bilangan = ";
	for (i=0; i<25; i++)
	cout<<Nilai [i] <<" ";
	
	//Melakukan Pencarian
	for (j=0; j<3; j++){
		
		Ketemu=false;
		Banyak=0;
		
		cout<<"\n\nMasukan Bilangan yang akan dicari = "; cin>>Bilangan;
		
		for (i=0; i<25; i++){
			if (Nilai [i]==Bilangan){
				Ketemu = true;
				Posisi [Banyak] = i;
				Banyak++;
			}
		}	
			
		if (Ketemu){
			cout<<"Bilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak<<" pada posisi ke = ";
			for(i=0; i<Banyak; i++){
				cout<<Posisi [ i ]<<" ";
			}
		} else {
			cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
		}		
	}
} 


