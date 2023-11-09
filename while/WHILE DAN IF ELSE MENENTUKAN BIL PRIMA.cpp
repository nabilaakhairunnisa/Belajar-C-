#include<iostream>
using namespace std;
main()
{
	int bil, I=2, tanda;
	tanda=0;
	cout<<"Program Menentukan Bilangan Prima"<<endl;
	cout<<"Masukan Bilangan : "; cin>>bil;
	while(I<=bil-1)
	{
		if (bil % I == 0)
		tanda=1;
		I++;
	}
	if (tanda == 1)
		cout<<bil<<" Bukan bilangan prima";
	else
		cout<<bil<<" Merupakan bilangan prima";
}


