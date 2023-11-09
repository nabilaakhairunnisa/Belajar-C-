#include<iostream>
using namespace std;
main()
{
	int n1, n2, x, sisa;
	cout<<"Masukan Nilai Pertama : "; cin>>n1;
	cout<<"Masukan Nilai Pertama : "; cin>>n2;
	if(n1<n2)
	{
		x=n1; n1=n2; n2=x;
	}
	while(n2 != 0)
	{
		sisa = n1%n2;
		n1=n2;
		n2 = sisa;
	}
	cout<<"FPB : "<<n1;
}
