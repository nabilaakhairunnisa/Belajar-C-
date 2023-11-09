#include <iostream>
using namespace std;
int main()
{
	cout<<"Jarak yang ditempuh selama "<<endl;
	float I, J, K;
	I=1; J=2; K=1;
	while( I<=100 )
	{
		cout<<" detik ke-"<<K<<" : "<<J<<" m"<<endl;
		J=J+0.1;
		I++;
		K++;	
	}	
}
