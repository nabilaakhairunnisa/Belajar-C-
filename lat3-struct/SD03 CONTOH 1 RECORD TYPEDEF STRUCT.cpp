#include<iostream>

using namespace std;

typedef struct 
{
	char NIM[10]; 
	char nama[20]; 
	int nilai; 
}
mhs; 
mhs mahasiswa; 

int main(void) 
{ 
	//Menginput dari kb 
	cout<<"Masukan NIM : ";
	cin>>mahasiswa.NIM;
	cout<<"Masukan Nama : ";
	cin>>mahasiswa.nama;
	cout<<"Masukan Nilai : ";
	cin>>mahasiswa.nilai; 
	
	//Mencetak hasil inputan 
	cout<<"NIM : "<<mahasiswa.NIM<<endl; 
	cout<<"Nama : "<<mahasiswa.nama<<endl; 
	cout<<"Nilai : "<<mahasiswa.nilai<<endl; 
}
