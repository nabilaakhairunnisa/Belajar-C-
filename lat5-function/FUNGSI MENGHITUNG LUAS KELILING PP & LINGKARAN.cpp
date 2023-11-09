#include <iostream>
using namespace std;
void ppanjang() 
{
	int pj,lb,luas,kl;
	cout<<"\n*** Persegi Panjang *** \n";
	cout<<"Panjang		: "; cin>>pj;
	cout<<"Lebar		: "; cin>>lb;
	luas=pj*lb;		
	kl=2*(pj+lb);
	cout<<"Luas		: "<<luas<<endl;
	cout<<"Keliling	: "<<kl<<endl;
}
void lingkaran() 
{	
	int r; 
	float pi=3.14,luas,kl;
	cout<<"\n*** Lingkaran ***"<<endl;
	cout<<"Jari-jari	: "; cin>>r;
	luas= pi*r*r; 	
	kl= 2*pi*r;		
	cout<<"Luas 		: "<<luas<<endl;
	cout<<"Keliling 	: "<<kl<<endl;
}
int main() 
{
	int pil;
	do 
	{
		cout<<"\nMENU \n";
		cout<<"1. Persegi Panjang \n";
		cout<<"2. Lingkaran \n";
		cout<<"3. Keluar \n";
		cout<<"Pilihan (1/2/3) : "; cin>>pil;
		switch (pil) 
		{
			case 1:
				ppanjang(); break;
			case 2:
				lingkaran(); break;
			case 3:
				cout<<"\nTerima Kasih\n"; break;
			default:
				cout<<"\nPilihan Salah\n";
		}
	}
	while (pil != 3);
	return 0;
}
