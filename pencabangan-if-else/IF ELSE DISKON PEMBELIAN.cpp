#include <iostream>
using namespace std;
int main()
{
	int harga_barang, jumlah_barang, total_bayar, diskon;
	cout<<"Masukan harga barang = ";cin>>harga_barang;
	cout<<"Masukan jumlah barang = ";cin>>jumlah_barang;
	if(jumlah_barang >= 100)
	{
		cout<<"Selamat anda mendapatkan diskon 15%"<<endl;
		diskon = (harga_barang*15/100);
		total_bayar = harga_barang - diskon;
	}
	else
	{
		cout<<"Selamat anda mendapatkan diskon 5%"<<endl;
		diskon = (harga_barang*5/100);
		total_bayar = harga_barang - diskon;
	}
	cout<<"Total pembelian = "<<harga_barang<<endl;
	cout<<"Diskon = "<<diskon<<endl;
	cout<<"Total bayar = "<<total_bayar<<endl;
	return 0;
}
