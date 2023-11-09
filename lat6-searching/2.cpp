#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int Nilai [20];
	int Posisi [ 20 ];
	int i, N, Bilangan, Banyak= 0;
	bool Ketemu;
	cout<<"Masukan Banyaknya Bilangan = ";
	cin>>N;
	
	//Membaca elemen Array
	for(i=0; i<N;i++){
		cout<<"Masukan elemen ke-"<<i<<" = "; 
		cin>>Nilai [ i ];
	}
	
	//Mencetak Elemen Array
	cout<<"\nDeretan Bilangan = ";
	for (i=0; i<N; i++)
	cout<<Nilai [i] <<" ";
	cout<<"\n\nMasukan Bilangan yang akan dicari = ";
	cin>>Bilangan;
	
	//Melakukan Pencarian
	for (i=0; i<N; i++)
	{
		if (Nilai [i]==Bilangan)
		{
			Ketemu = true;
			Posisi [Banyak] = i;
			Banyak++;
		}
	}
	
	if (Ketemu)
	{
		cout<<"\nBilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak<<" pada posisi ke = ";
		for(i=0; i<Banyak; i++){
			cout<<Posisi [ i ]<<" ";
		}
	} else {
		cout<<"\nBilangan "<<Bilangan<<" tidak ditemukan";
		}
	
	getch ();	
} 


