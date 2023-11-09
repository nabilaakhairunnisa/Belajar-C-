#include<iostream>
using namespace std;
int main()
{
	int umur;
	cout<<"Masukan umur anda : "; cin>>umur;
	if(umur >=13 && umur < 18) // Jika umur antara 13 - 17
		cout<<"anda adalah remaja"<<endl;
	else
		cout<<"anda bukan remaja"<<endl;
	if(umur >= 18) // jika umur lebih dari 17
		cout<<"anda memenuhi syarat untuk memilih"<<endl;
	else
		cout<<"anda tidak memenuhi syarat untuk memilih"<<endl;
	return 0;
}
