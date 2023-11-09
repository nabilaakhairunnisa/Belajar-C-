#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int sisa, hasil=0, pangkat=0, bin, des, pil, a;
	cout<<"Konversi Bilangan Biner ke Desimal\n\n";
	cout<<"Masukan Bilangan Biner : ";
	cin>>bin;
	while(bin>=1)
	{
    	sisa=bin%2;
    	hasil+=sisa*pow(2,pangkat);
    	bin=bin/10;
    	pangkat++;
	}
	cout<<"Bilangan Desimal dari "<<bin<<" adalah : ";
	cout<<hasil<<endl;
}
