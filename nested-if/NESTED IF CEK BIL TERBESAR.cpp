#include <iostream> 
using namespace std; 
int main() 
{ 
	int A, B, C; 
	cout<<"Input bilangan pertama : "; cin>>A; 
	cout<<"input bilangan kedua : "; cin>>B; 
	cout<<"input bilangan ketiga : "; cin>>C; 
	if (A>B)
	{ 
		if(A>C) 
			cout<<"Bilangan terbesar adalah "<<A;
		else 
			cout<<"Bilangan terbesar adalah "<<C;
		exit(0);
	}
	if(B>C) 
		cout<<"Bilangan terbesar adalah "<<B; 
	else 
		cout<<"Bilangan terbesar adalah "<<C;
	return 0; 
}
