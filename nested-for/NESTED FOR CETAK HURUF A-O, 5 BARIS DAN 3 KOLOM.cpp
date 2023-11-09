#include<iostream> 
using namespace std;
int main()

{
int var, I, J;
var = 65;
for(I=1; I<6; I++)
	{
	for(J=1; J<4; J++)
		{
		cout<<(char)var<<" ";
		var++;
		}
	cout<<endl;
	}
}
