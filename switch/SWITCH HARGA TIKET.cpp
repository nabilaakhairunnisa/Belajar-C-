#include<iostream>
using namespace std;
int main()
{
	int jumlah, total;
	char kelas;
	cout<<"Masukan jumlah tiket : "; cin>>jumlah;
	cout<<"Masukan kelas tiket (V/B/E) : ";cin>>kelas;
	switch(kelas)
	{
		case 'V':
		total=jumlah*300000;
		cout<<"Kelas VIP \nTotal : "<<total;
		break;
		case 'B':
		total=jumlah*200000;
		cout<<"Kelas Bisnis \nTotal : "<<total;
		break;
		case 'E':
		total=jumlah*100000;
		cout<<"Kelas Ekonomi \nTotal : "<<total;
		break;
		default:
		cout<<"Kode salah";
	}
}
	
	
	
	
