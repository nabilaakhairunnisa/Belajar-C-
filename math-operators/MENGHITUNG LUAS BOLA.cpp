#include <iostream>
using namespace std;
int main ()
{
	float pi=3.14;
	float r,l,v;
	//input data 
	cout<<"Masukkan Jari-Jari bola : ";cin>>r;cout<<endl;
	//proses
	v=4/3*pi*r*r*r; //menghitung volume bola
	l=4*pi*r*r; //menghitung luas bola
	//output 
	cout<<"Volume bola adalah : "<<v<<endl;
	cout<<"Luas nya adalah : "<<l<<endl;
}
