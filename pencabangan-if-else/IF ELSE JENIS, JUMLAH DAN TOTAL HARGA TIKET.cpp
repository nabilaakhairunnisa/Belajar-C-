#include <iostream>
using namespace std;
int main ()
{
	int Jenis_Tiket, Jumlah_Tiket, Total_Harga;
	cout<<"Harga Tiket : \n 1. Tiket Ekonomi = RP.200.000\n 2. Tiket VIP = RP.400.000\n 3. Tiket VVIP = RP.500.000\n";
	cout<<"\nMasukan Jenis tiket Anda (1/2/3): ";
	cin>>Jenis_Tiket;
	cout<<"Masukan Jumlah tiket Anda : "; cin>>Jumlah_Tiket;
	
	if(Jenis_Tiket == 1)
	{ 	Total_Harga = (200000*Jumlah_Tiket);
		cout<<"Jenis Tiket = Tiket Ekonomi\n";
		cout<<"Total Harga = "<<Total_Harga;	
	}
	else if(Jenis_Tiket == 2)
	{	Total_Harga = (400000*Jumlah_Tiket);
		cout<<"Jenis Tiket = Tiket VIP\n";
		cout<<"Total Harga = "<<Total_Harga;	
	}
	else
	{	Total_Harga = (500000*Jumlah_Tiket);
		cout<<"Jenis Tiket = Tiket VVIP\n";
		cout<<"Total Harga = "<<Total_Harga;	
	}
}
