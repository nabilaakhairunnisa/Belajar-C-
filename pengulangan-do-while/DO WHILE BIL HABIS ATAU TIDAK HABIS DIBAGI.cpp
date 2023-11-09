#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	char jawaban;
	do
	{
		cout<<"Masukan bilangan pertama : "; cin>>a;
		cout<<"Masukan bilangan kedua : "; cin>>b;
		c=a%b;
		if(c==0)
			cout<<"Bilangan habis dibagi"<<endl;
		else 
			cout<<"Bilangan tidak habis dibagi"<<endl;
			cout<<"Apakah anda ingin mencoba lagi? (Y/N) "; cin>>jawaban;
	}
	while (jawaban=='Y');
}

