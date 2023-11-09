#include <iostream>
using namespace std;
main()
{
	int a=0,b=1,c,i=0;
	cout<<"Fibonacci : "<<a<<" "<<b<<" ";
	while (i<10)
	{
		c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
		i++;
	}
}


