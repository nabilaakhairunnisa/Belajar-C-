#include<iostream>
using namespace std;
main()
{
	int harga, diskon, total;
    cout<<"Masukan Total Pembelian : Rp."; cin>>harga;
    switch(harga)
    {
        case 100000 ... 199999:
    	diskon=harga*0.05;
    	total=harga-diskon;
        cout<<"Anda Mendapat Potongan Sebesar : Rp."<<diskon<<endl;
        cout<<"Total Yang Harus Dibayar : Rp."<<total; break;
        case 200000 ... 299999:
        cout<<"BONUS ANDA : TIKET KE YOGYA"; break;
        case 300000 ... 399999:
        cout<<"BONUS ANDA : TIKET KE BALI"; break;
        case 400000 ... 499999:
    	cout<<"BONUS ANDA : JAM TANGAN ROLEX"; break;
        case 500000 ... 1000000:
        cout<<"BONUS ANDA : TIKET KE SWISS"; break;
    }
}

