#include <iostream> 
using namespace std; 
main() 
{ 
	char KodePulau; 
	int KodeKota;
	cout<<"Masukan Kode Pulau : "; cin>>KodePulau;
	switch(KodePulau) 
	{
		case 'J': // Jika kode kota yang dimaksukan adalah J
		cout<<"Masukan Kode Pulau Jawa (1/2/3/4) : "; cin>>KodeKota; 
		switch (KodeKota) 
		{ 
			case 1: cout<<"Jakarta"; break; 
			case 2: cout<<"Surabaya"; break; 
			case 3: cout<<"Jakarta"; break; 
			case 4: cout<<"Jakarta"; break; 
			default: cout<<"Kode Kota di Pulau Jawa Salah"; 
		}
		break; 
		case'S': // Jika kode kota yang dimaksukan adalah S
		cout<<"Masukan Kode Pulau Sumatra (1/2/3/4) : "; cin>>KodeKota; 
		switch (KodeKota) 
		{ 
			case 1: cout<<"Medan"; break; 
			case 2: cout<<"Palembang"; break; 
			case 3: cout<<"Padang"; break; 
			case 4: cout<<"Bengkulu"; break; 
			default: cout<<"Kode Kota di Sumatra Salah"; 
		} 
		break; 
		case'K': // Jika kode kota yang dimaksukan adalah K
		cout<<"Masukan Kode Pulau Kalimantan (1/2/3/4) : "; cin>>KodeKota; 
		switch (KodeKota) 
		{ 
			case 1: cout<<"Banjarmasin"; break; 
			case 2: cout<<"Pontianak"; break; 
			case 3: cout<<"Lolong"; break; 
			default: cout<<"Kode Kota di Kalimantan Salah"; 
		}
		break; 
		default: 
		cout<<"Kode Kota di Pulau Salah"; 
	}
	return 0; 
}

