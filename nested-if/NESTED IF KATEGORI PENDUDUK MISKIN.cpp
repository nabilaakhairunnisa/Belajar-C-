#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string kerja, sekolah, hasil;
	int usia, pendapatan, tanggungan, biaya_hidup;
	cout<<"Masukan Usia Kamu : "; cin>>usia;
	if (usia>=18)
	{
		cout<<"Apakah kamu sudah bekerja? (Y/T) : "; cin>>kerja;
		if (kerja=="Y")
		{
			cout<<"Masukan pendapatan perbulan : "; cin>>pendapatan;
			cout<<"Masukan jumlah tanggungan : "; cin>>tanggungan;
			biaya_hidup=pendapatan/tanggungan;
			if (biaya_hidup<300000)
				hasil="Penduduk Miskin ";
			else
				hasil="Bukan penduduk miskin";
		}
		else 
			hasil="Penduduk Miskin ";
	}
	else
	{
		cout<<"Apakah kamu masih sekolah? (Y/T) : "; cin>>sekolah;
		if (sekolah=="Y")
			hasil="Bukan penduduk miskin";
		else
			hasil="Penduduk Miskin ";
	}
	cout<<"Anda masuk kategori "<<hasil<<endl;
	getch();
}
