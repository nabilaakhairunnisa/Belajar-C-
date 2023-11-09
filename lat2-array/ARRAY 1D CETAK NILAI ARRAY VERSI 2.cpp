#include <iostream>
using namespace std;
int main()
{
	int A[9];
	int N=1, X=1, I=0;
	while (I<=8)
	{
		A[I]=N;
		N+=X;
		X+=1;
		I++;
		cout<<"A["<<I<<"]="<<N<<endl;
	}
}
