#include<iostream>
using namespace std;

int main (){
	int Nilai [8] = {2,3,5,7,6,1,9,10};
	int i, Bilangan, ketemu;

	cout<<"Masukan Bilangan yang akan dicari = "; cin>>Bilangan;

	for(i=0; i<8; i++){
		if(Nilai [i] == Bilangan)
		ketemu = true;
	}
	
	if (ketemu){
		cout<<"Bilangan "<<Bilangan<<" ditemukan";
	} else {
		cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
	}
}

