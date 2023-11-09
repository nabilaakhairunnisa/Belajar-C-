#include<iostream>
using namespace std;
int main()
{
	int A[11]={12,17,10,5,15,25,11,7,25,16,10};
	int N, Flag=0, I=0;
	cout<<"Masukkan nilai yang akan dicari : "; cin>>N;
	while(I<=10) 
	{
		if(A[I]==N)
		{ Flag=1; }
		I++;
	} 
	if (Flag==1)
		{ cout<<"Ada"; }
	else 
		cout<<"Tidak ada";
}


