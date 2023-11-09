#include <iostream>
using namespace std;
main ()
{
	int MatrikA [3][5];
	int I, J;
	for ( J=0; J <= 4; J++ )
	{ 
		for (I=0; I<=2; I++)
		{
			MatrikA[I][J]=I;
			cout<<I<<" ";
		}
		cout<<endl;
	}
}

