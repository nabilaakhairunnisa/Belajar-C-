#include <iostream>
using namespace std;

int f1 (int x)
{
	return 2*x*x+5*x-12;
}

int f2 (int x)
{
	int hsl;
	hsl = 3*x*x-4*x+21;
	return hsl;
}

int f3 (int x)
{
	int hsl;
	hsl = f1(x)+f2(x);
	return hsl;
}

int main()
{
	int hasil, a=7;
	hasil = f1 (a);
	cout<<"Hasil1 = "<<hasil<<endl;
	cout<<"Hasil2 = "<<f2(a)<<endl;
	cout<<"Hasil3 = "<<f3(a)<<endl;
}
