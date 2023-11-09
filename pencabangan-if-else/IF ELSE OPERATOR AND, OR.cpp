#include<iostream>
using namespace std;
int main()
{
	int bilangan;
	cout<<"Masukan bilangan : ";cin>>bilangan;
	if(((bilangan % 5) == 0) && ((bilangan % 2) == 0) || ((bilangan % 2) == 0))
		cout<<"Kelipatan 5 dan 2 atau 4"<<endl;
	else
		cout<<"bukan Kelipatan 5 dan 2 atau 4"<<endl;
	return 0;
}
