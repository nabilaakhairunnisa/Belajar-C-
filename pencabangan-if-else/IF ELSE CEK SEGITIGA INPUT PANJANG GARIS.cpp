#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	cout<<"Masukan panjang garis ke-1 : ";cin>>a;
	cout<<"Masukan panjang garis ke-2 : ";cin>>b;
	cout<<"Masukan panjang garis ke-3 : ";cin>>c;
	if (a+b>c)
		cout<<"SEGI TIGA";
	else
		cout<<"BUKAN SEGITIGA";
}
