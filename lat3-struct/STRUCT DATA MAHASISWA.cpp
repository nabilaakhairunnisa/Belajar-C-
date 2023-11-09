#include <iostream>
using namespace std;
struct data
{
	char nama[50], nim[100];
};
data siswa[10];

int main ()
{
	int n,i;
	char pilih;
	datasiswa:
	cout<<"Data Siswa"<<endl;
	cout<<"Nama : "; cin>>siswa[i].nama;
	cout<<"NIM : "; cin>>siswa[i].nim;  
	cout<<"Tambah Data Lagi? [Y/T] : ";	cin>>pilih;
	switch(pilih)
	{
		case 'Y':
		case 'y':
		goto datasiswa;
		break;
		case 'T':
		case 't':
		break;
		default:
		cout<<"Data Tidak Ada";
	}
}
