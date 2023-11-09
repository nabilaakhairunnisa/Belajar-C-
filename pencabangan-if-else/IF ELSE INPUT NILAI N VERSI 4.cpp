#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Masukan nilai N : ";cin>>N;
	if (N<50)
	{
		N = N + 30;
	}
	if (N>50)
	{
		N = N - 25;
	}
	N = N + 10; 
	cout<<"N = "<<N;
}
