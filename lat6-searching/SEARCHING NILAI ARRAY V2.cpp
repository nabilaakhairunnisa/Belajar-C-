#include<iostream>
using namespace std;
int main()
{
	int A[11]= {12,17,10,5,15,25,11,7,25,16,10};
	int N, jum=0, I=0;
	cout<<"Masukkan nilai yang akan dicari : "; cin>>N;
	while(I<=10) 
	{
		if(A[I]==N)
		{ jum++; }
		I++;
	} 
	cout<<"Ada "<<jum<<" buah";
}


