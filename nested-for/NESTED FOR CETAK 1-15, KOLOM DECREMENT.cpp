#include<iostream> 
using namespace std;
int main()

{
int I, J, T = 1;
for(I=1; I<6; I++)
	{
		for(J=1; J<7-I; J++)
			{
				cout<<T<<"   ";
				T++;
			}
		cout<<endl;
	}		
}
