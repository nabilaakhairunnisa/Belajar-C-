#include<iostream>
#include<conio.h>
using namespace std;

int double_it (int *x, int *y)
{
	*x *=3;
	*y *=3;
}

int main(void)
{
	int x, y;
	cout<<"Masukkan nilai x : "; cin>>x;
	cout<<"Masukkan nilai y : "; cin>>y;
	double_it(&x, &y);
	cout<<"\n*** Hasil *** "<<endl;
	cout<<"x * 3 = "<<x<< endl;
	cout<<"y * 3 = "<<y<<endl;
}
