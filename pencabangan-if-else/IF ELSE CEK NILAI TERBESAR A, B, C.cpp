#include<iostream>
using namespace std;
main() 
{
	int a, b, c;
	cout<<"Masukan Nilai Ke-1 : "; cin>>a;
	cout<<"Masukan Nilai Ke-2 : "; cin>>b;
	cout<<"Masukan Nilai Ke-3 : "; cin>>c;
	if(a>b)
	if(a>c)
		cout<<"\nNilai Terbesar : "<<a;
	else
		cout<<"\nNilai Terbesar : "<<c;
	else
	if(b>c)
		cout<<"\nNilai Terbesar : "<<b;
	else
		cout<<"\nNilai Terbesar : "<<c;
}
