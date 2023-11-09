#include <iostream>
using namespace std;
int main()
{
	int buku, pensil, penghapus, pendapatan, laba, rugi, modal = 45000;
	cout<<"==================================================================== \n"; 
	cout<<"Nama 	: Nabila Khairunnisa \n";
	cout<<"NIM 	: 211011400012 \n";
	cout<<"Kelas 	: 01TPLP001 \n";
	cout<<"==================================================================== \n"; 
	cout<<"Jumlah modal adalah sebesar RP.45.000 dengan rincian sebagai berikut : \n";
	cout<<"buku tulis 	= RP.3.000 x 10 pcs = RP.30.000 \n";
	cout<<"pensil 		= RP.1.000 x 10 pcs = RP.10.000 \n";
	cout<<"penghapus 	= RP.  500 x 10 pcs = RP. 5.000 \n";
	cout<<"==================================================================== \n"; 
	cout<<"Berapa buah buku tulis yang habis terjual? "; cin>>buku;
	cout<<"Berapa buah pensil yang habis terjual? "; cin>>pensil;
	cout<<"Berapa buah penghapus yang habis terjual? "; cin>>penghapus;
	cout<<"==================================================================== \n";
	pendapatan = ((buku*5000)+(pensil*2000)+(penghapus*1000));
	// Artinya buku tulis dijual seharga RP.5.000, pensil dijual seharga RP.2.000, dan penghapus dijual seharga RP.1.000
	if (pendapatan > modal)
	{
		laba = pendapatan - modal;
		cout<<"Selamat! Anda mendapatkan laba sebesar RP."<<laba;
	}
	else if (pendapatan < modal)
	{
		rugi = pendapatan - modal;
		cout<<"Anda rugi sebesar RP."<<rugi;
	}
	else 
	{
		cout<<"Anda tidak mendapatkan laba ataupun rugi.";
	}
}
