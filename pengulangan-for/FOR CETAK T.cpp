#include <iostream>
using namespace std;
int main()
{
	int I, T, N;
	T = 0; N = 25;
	for ( I=1; I<5; I=I+2 )
	{
		T = T + N;
		cout<<endl<<T;
		N = N + 5;
	}
}
