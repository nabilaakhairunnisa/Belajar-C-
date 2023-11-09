#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a, b, c, D;
	float x1, x2;
	cout<<"Masukan nilai a : "; cin>>a;
	cout<<"Masukan nilai b : ";	cin>>b;
	cout<<"Masukan nilai c : ";	cin>>c;
	// Mencari nilai D
	D = (b*b)-(4*a*c);
	if (D>0) // Jika D lebih dari nol
	{
		x1 = (-b + sqrt(D)) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
	}
	else if (D==0) // Jika D sama dengan nol
		x1 = (-b + sqrt(D)) / (2*a);
	else // Jika D kurang dari nol
		cout<<"\nAkar Imajiner"<<endl;
		exit(0);
	cout<<"X1 = "<<x1<<endl;
	cout<<"X2 = "<<x2<<endl;
}
