#include <iostream>
using namespace std;
int main()
{
	int I, N, T; //N untuk nilai yg diinputkan, I untuk inisialisasi looping
	T = 0;
	for ( I=1; I<=10; I++ )
	{
		cout<<"Masukan NIlai : "; 
		cin>>N;
		T = T + N;
		if ( T > 1000 )
		{
			break;
		}
	}
	cout<<"Total : "<<T; 
}
