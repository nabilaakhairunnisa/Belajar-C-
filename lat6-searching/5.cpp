#include <iostream>
using namespace std;

int main(){
	
	int N=10;
	int data[N]={1,2,3,4,5,6,7,8,9,10};
	int cari, awal;
	int akhir = N-1;
	int posisi = -1;	
	int tengah = (awal+akhir)/2;
	
	cout<<"Masukan data yang ingin dicari: "; cin>>cari;
	
	//pencarian data dengan binary search
		
	do{
		if (cari < data[tengah]){
			akhir = tengah - 1;
		}else if(cari > data[tengah]){
			awal = tengah + 1;
		}
		tengah = (awal + akhir)/2;
	}
	while(awal<=akhir && data[tengah] != cari);
	
	if(data[tengah] == cari){
		posisi=tengah;
	}
	
	//output
	cout<<"Data ditemukan pada index ke-"<<posisi;
	
}
