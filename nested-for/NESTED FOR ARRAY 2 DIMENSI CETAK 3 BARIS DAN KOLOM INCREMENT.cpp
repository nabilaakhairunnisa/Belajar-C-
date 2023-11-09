#include <iostream>
using namespace std;
main ()
{
	int A[3][5];
	int I, J, N = 1;
	for (I=0; I<=2; I++)
	{ 
		for (J=0; J<=I+2; J++)
		{ 
			A[I][J]=N;
			N++;
			cout<<N<<" ";
		}
		cout<<endl;
	}
}
