#include<iostream>
using namespace std;
int main()
{
	int bil, I, B, A;
	cout<<"Program Ubah Bilangan Desimal ke Biner "<<endl;
	cout<<"Masukan Bilangan Desimal : ";cin>>bil;
	B = 128;
	for(I=1; I<=8; I++)
	{
		A = bil / B;
		cout<<A;
		bil = bil % B;
		B = B / 2;
	}
	return 0;
}
