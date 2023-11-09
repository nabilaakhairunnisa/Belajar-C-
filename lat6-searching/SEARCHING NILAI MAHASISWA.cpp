#include<iostream>
using namespace std;
int main()
{
	int N[10]={71,70,85,81,77,70,75,79,70,82};
	int J, Flag=0, I=0;
	cout<<"Apakah ada nilai mahasiswa yang di Atas 80?";
	while(I<=10) 
	{
		if(N[I]>80)
		Flag=1;
		I++;
	} 
	if (Flag==1)
		cout<<"\nADA";
	else 
		cout<<"\nTIDAK ADA";
}

