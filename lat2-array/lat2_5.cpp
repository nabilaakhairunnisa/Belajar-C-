#include<iostream>
using namespace std;
int main()
{
	int x[3][4]={{1,3,4,4}, {2,4,6,8}, {3,5,7,9}};
	int i, j;
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		cout<<x[i][j]<<" ";
		cout<<endl;
	}
}


