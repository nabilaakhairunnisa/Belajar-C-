#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int Nilai [ 20 ];
	int i, N, angka, Bilangan;
	cout<<"Masukan Banyaknya Bilangan = ";
	cin>>N;
	
	//Membaca elemen array
	for(i=0; i<N; i++){
		cout<<"Masukan elemen ke-"<<i<<" = ";
		cin>>Nilai [i];
	}
	
	//Mencetak elemen array
	cout<<"\nDeretan Bilangan = ";
	for(i=0; i<N;i++){
		cout<<Nilai [ i ]<<" ";
	}
	cout<<"\n\nMasukan Bilangan yang akan dicari = ";
	cin>>Bilangan;
	
	//melakukan pencarian
	i=0;
	do{
		if(Nilai [i] == Bilangan)
			angka = Nilai [i];
		i++;
	}
	while (i<N);
	
	if (angka == Bilangan ){
		cout<<"\nBilangan "<<Bilangan<<" ditemukan";
	} else {
		cout<<"\nBilangan "<<Bilangan<<" tidak ditemukan";
	}
	
	getch ();
}


