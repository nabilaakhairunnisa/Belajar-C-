#include <iostream>
using namespace std;
int main()
{
    int i, Un, Un1=1, Un2=0;
    cout<<"Fibonacci : ";
    for (i=1; i<11; i++)
	{
	    Un=Un1+Un2;
	    Un2=Un1;
        Un1=Un;
        cout<<Un<<" ";
   	}
   	cout<<"..........";
}

