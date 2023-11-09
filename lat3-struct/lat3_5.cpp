#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct NILAI {
	int NIM;
	string Nama;
	int NilaiTugas;
	int	NilaiUTS;
	int NilaiUAS;
	int NilaiAkhir;
	int NilaiHuruf;
};

int main(){
	
	NILAI mhs;
	
	cout<<"NIM  	    : "; cin>>mhs.NIM;
	cout<<"Nama 	    : "; cin>>mhs.Nama;
	cout<<"Nilai Tugas  : "; cin>>mhs.NilaiTugas;
	cout<<"Nilai UTS    : "; cin>>mhs.NilaiUTS;
	cout<<"Nilai UAS    : "; cin>>mhs.NilaiUAS;
	
	
	mhs.NilaiAkhir = ( 0.2 * mhs.NilaiTugas ) + 
					 ( 0.35 * mhs.NilaiUTS ) + 
					 ( 0.45 * mhs.NilaiUAS);
	
	cout<<"\nNilai Akhir : "<<mhs.NilaiAkhir;
	cout<<"\nNilai Huruf : ";

	if (85 < mhs.NilaiAkhir <= 100) {
		cout<<"A";
	}
	else if ( 70 < mhs.NilaiAkhir <= 80 ) {
		cout<<"B";
	}
	else if ( 55 < mhs.NilaiAkhir <= 70 ) {
		cout<<"C";
	}
	else if ( 40 < mhs.NilaiAkhir <= 55 ) {
		cout<<"D";
	}
	else if ( 0 < mhs.NilaiAkhir <= 40 ) {
		cout<<"E";
	}
}

