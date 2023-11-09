#include <iostream>
using namespace std;
main()
{
	int N, I; 
	int hasil = 0;
	cout<<"Masukan angka : "; cin>>N;
	cout<<"Angka yang anda masukan : "<<N<<endl;
	for ( I=1; I<=N; I++ )
	{
		hasil+=I;
	}
	cout<<"Jumlah deret "<<N<<" adalah... "<<hasil<<endl;
}



