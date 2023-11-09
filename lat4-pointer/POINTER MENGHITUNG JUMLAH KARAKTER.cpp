#include<iostream>
#include<stdio.h>
using namespace std;

int H (const char*s)
{
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}
main (void)
{
	char Kata [80];
	cout<<"Inputlah Sebuah Kata      : ";
	cin.getline(Kata,100);
	cout<<"Jumlah Karakternya Adalah : "<<H(Kata)<<" Huruf "<<endl;
}
