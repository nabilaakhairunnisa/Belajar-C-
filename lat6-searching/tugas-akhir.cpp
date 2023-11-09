#include<stdio.h> 
#include<iostream> 
#include<conio.h>
#include<iomanip> 
using namespace std;

int main ()
{
	//deklarasi variabel
	int i, j, N;
	int Nilai [25] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
	int temp, awal, akhir, tengah, Bilangan, Banyak, Posisi; 
	
	cout<<"Elemen Sebelum diurut = ";
	for (i=0; i<25; i++)
	cout<<Nilai[i]<<" ";
	
	//proses pengurutan data
	for (i=0; i<25; i++)
	{
		for (j=i+1; j<25; j++)
		{
			if (Nilai [i] > Nilai [j])
			{
				temp = Nilai [i];
				Nilai [i] = Nilai [j];
				Nilai [j] = temp;
			}
		}
	}
	
	cout<<"\nElemen Setelah diurut = ";
	for (i=0; i<25;i++){
		cout<<Nilai [ i ]<<" ";
	}
		 
	cout<<"\nMasukan data yang akan anda cari: "; 
	cin>>Bilangan;
		
	//proses pencarian data
	awal = 0 ;
	akhir = 25-1;
	do{
		 //menentukan nilai tengah
		 tengah = ( akhir + awal ) / 2;
		 //kalo Bilangan yang dicari < dari nilai tengah
		 if ( Bilangan < Nilai [ tengah ] )
		 //maka proses pencarian dari index awal sampai tengah
		 akhir = tengah - 1;
		 else 
		 //jika Bilangan yang dicari > dari nilai tengah
		 //maka proses pencarian dari tengah hingga index terakhir
		 awal = tengah + 1 ;
		 
		 Posisi [Banyak] = i;
		 Banyak++;
	} 
	//terus melakukan looping, membagi data hingga ketemu
	while (( akhir >= awal) && ( Nilai [ tengah ] != Bilangan )) ;
	 
	if ( Nilai [ tengah ] == Bilangan ){
		cout<<"\nData "<<Bilangan<<" ditemukan sebanyak "<<Banyak<<" pada posisi ke ";
		for(int i=0; i<25; i++){
			if (Nilai[i] == Bilangan) cout<<i<<" ";
		}
	} else {
		cout<<"\nData "<<Bilangan<<" tidak ada dalam array\n";
	}
	getch () ;
}
