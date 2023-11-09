#include <iostream>
using namespace std;

void tampilkan (int *B)
{
	for (int i=0; i<10; i++)
	cout<<B[i]<<" ";
	cout<<endl;
}
void avg (int *B)
{
	float total = 0;
	for (int i=0; i<10; i++)
	{
		total = total + B[i];
	}
	cout<<"rata - rata = "<<total/10<<endl;
}

void minmax (int *B)
{
	int max =  B[0];
	for (int i=1; i<10; i++)
	{
			if ( B[i] > max )
				max = B[i];
	}
	cout<<"nilai max adalah : "<<max;
}

int main ()
{
	int A[10]={15,22,41,7,91,53,17,9,11,72};
	tampilkan(A);
	avg(A);
	minmax(A);
}
