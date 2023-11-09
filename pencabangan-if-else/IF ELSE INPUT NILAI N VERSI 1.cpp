#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Masukan nilai N : ";cin>>N;
	if (N>50)
	{
		N = N + 10;
	}
	else
	{
		N = N - 25;
	}
	cout<<"N = "<<N;
}
