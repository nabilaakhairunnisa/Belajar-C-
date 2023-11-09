#include<iostream>
using namespace std;
int main()
{
	int x, i, j, k;
	int a [100][100];
	cout<<"Masukan nilai segitiga pascal yang dicari : ";
	cin>>x;
	for (i=0; i<x; i++)
	{
		for (j=0; j<(x-i-1); j++)
		cout<<" ";
		{
			for (k=0; k<=i; k++)
			{
				if (k==0 || k==i)
				{
					a[i][k]=1;
					cout<<a[i][k]<<" ";
				}
				else 
				{
					a[i][k] = (a [i-1] [k-1]) + (a [i-1] [k]);
					cout<<a[i][k]<<" ";
				}
			}
			cout<<endl;
		}
	}
}
