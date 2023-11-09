#include<iostream>
using namespace std;
int main()
{
	int n_ulangan;
	cout<<"Masukan Nilai Ulangan : ";cin>>n_ulangan;
	if(n_ulangan >= 80)
	{
		cout<<"Nilai ulangan kamu = "<<n_ulangan<<endl;
		cout<<"Liburan ke bandung"<<endl;
	}
	else
	{
		cout<<"Nilai ulangan kamu = "<<n_ulangan<<endl;
		cout<<"Belajar lebih rajin ya…"<<endl;
	}
	return 0;
}
