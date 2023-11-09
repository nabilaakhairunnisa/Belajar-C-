#include <iostream>
using namespace std;

void tampilkan (int *B)
{
	for (int i; i=0; i++)
	cout<<B[i]<<" ";
	cout<<endl;
}
int main ()
{
	int A[10]={15,22,41,7,91,53,17,9,11,72};
	tampilkan(A);
}
