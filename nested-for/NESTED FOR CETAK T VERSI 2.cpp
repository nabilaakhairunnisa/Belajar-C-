#include <iostream>
using namespace std;
main()
{
	int I, J, N, X, T;
	T=0;
	N=5;
	X=2;
	for ( I=1; I<=5; I+=2 )
	{
		for( J=1; J<=9; J+=3 )
		{
			T=T+N;
			N=N+X;
			X=X+2;
		}
	}
	cout<<endl<<T;
}
