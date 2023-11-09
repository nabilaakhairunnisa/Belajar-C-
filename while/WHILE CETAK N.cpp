#include <iostream>
using namespace std;
int main()
{
	int N, X;
	N=35; X=0;
	while ( N<=100 )
	{
		N=N+X;
		cout<<endl<<N;
		X=X+5;
	}
}
