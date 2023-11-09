#include<iostream>
using namespace std;
main ( )
{
	int A [3][3] = { { 4,5,3 } , { 4,5,5 } , { 9,8,7 } };
	int i , j ;
	for (i=0; i <3; i++)
	{
		for ( j=0; j <3; j++)
		cout << A [ i ] [ j ] << " ";
		cout << endl;
	}
}
