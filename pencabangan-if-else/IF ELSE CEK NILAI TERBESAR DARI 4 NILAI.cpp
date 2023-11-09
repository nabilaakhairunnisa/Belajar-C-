#include<iostream>
using namespace std;
main() 
{
	int a, b, c, d;
	cout<<"Masukan Nilai Ke-1 : "; cin>>a;
	cout<<"Masukan Nilai Ke-2 : "; cin>>b;
	cout<<"Masukan Nilai Ke-3 : "; cin>>c;
	cout<<"Masukan Nilai Ke-4 : "; cin>>d;
	if(a>b && a>c && a>d)
		cout<<"\nNilai Terbesar adalah nilai Ke-1 : "<<a;
	else if (b>a && b>c && b>d)
		cout<<"\nNilai Terbesar adalah nilai Ke-2 : "<<b;
	else if (c>a && c>b && c>d)
		cout<<"\nNilai Terbesar adalah nilai Ke-3 : "<<c;
	else
		cout<<"\nNilai Terbesar adalah nilai Ke-4 : "<<d;
}
