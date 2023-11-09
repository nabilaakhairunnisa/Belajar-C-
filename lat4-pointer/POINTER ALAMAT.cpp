#include<iostream>
using namespace std;
int main()
{
	int A=15;
	cout<<"Alamat &A = "<<&A<<endl;
	cout<<"Nilai A = "<<A<<endl<<endl;
	
	int *p; //pointer : var petunjuk berisi alamat var lain
	p=&A; //p diisi dengan alamat A
	
	cout<<"Alamat dan Nilai P diisi dengan Alamat dan Nilai dari A"<<endl;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl<<endl;
	
	cout<<"Alamat P ditambah 4 byte"<<endl;
	p++;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl<<endl;
	
	cout<<"Alamat P dikurang 4 byte"<<endl;
	p--; 
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl<<endl;
	
	cout<<"Nilai P ditambah 25"<<endl;
	(*p)+=25;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl<<endl;
	
	cout<<"Alamat P ditambah 25"<<endl;
	p+=25;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl<<endl;
}
