#include<iostream>
using namespace std;
int main()
{
	cout<<"Semangat Pagi"<<endl;
	long a1, a2;
	a1=a2=7;
	cout<<"a1 = "<<a1<<endl;
	cout<<"a2 = "<<a2<<endl;
	long b, c;
	b = a1++;
	c = ++a2;
	cout<<"a1 = "<<a1<<endl;
	cout<<"a2 = "<<a2<<endl;
	cout<<"b = "<<b<<endl; //outputnya 7, artinya cetak b kemudian ditambah 1
	cout<<"c = "<<c<<endl; //outputnya 8, artinya tambah 1 kemudiam cetak

}
