#include <iostream>
using namespace std;
int main()
{
	int A[12]={12,15,7,10,5,2,17,25,9,20,35,14};
	int N=1, X=1, I=0;
	while (I<=11)
	{
		cout<<A[N];
		N++;
		I+=X;
		X++;
	}
}





