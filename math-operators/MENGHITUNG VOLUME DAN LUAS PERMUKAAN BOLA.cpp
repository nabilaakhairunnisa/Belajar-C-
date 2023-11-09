#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	cout<<"===Menghitung Volume dan Luas Permukaan Bola==="<<endl;
	float r, phi, volume, luas; 
	cout<<"Masukan jari-jari bola : ";cin>>r;
	phi = 3.14;
	volume = (4*phi*r*r*r)/3;
	luas = 4*(phi*r*r);
	cout<<"Volume bola adalah = "<<volume<<endl;
	cout<<"Luas permukaan bola adalah = "<<luas<<endl;
}
