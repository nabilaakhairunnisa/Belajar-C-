#include<iostream>
using namespace std;
int main()
{
	int x[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	int i, j;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		cout<<x[i][j]<<" ";
		cout<<endl;
	}
}


