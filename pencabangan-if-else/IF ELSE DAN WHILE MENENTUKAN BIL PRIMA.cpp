#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int bil, batas, X, tanda;
	cout<<"Masukan Bilangan : "; cin>>bil;
	if(bil==2)
		cout<<bil<<" Merupakan Bilangan PRIMA";
	else
	{
		if(bil%2 == 0)
			cout<<"BUKAN PRIMA ";
		else
		{
			X = 3;
			batas = bil-1;
			tanda = 0;
			while(tanda == 0 && X <= batas)
			{
				if(bil % X == 0)
				tanda = 1;
				X = X + 2;
			}
			if(tanda == 0)
				cout<<bil<<" Merupakan Bilangan PRIMA ";
			else
				cout<<"BUKAN PRMA ";
		}
	}
}
