#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int umur;
	cout<<"Masukan umur anda : "; cin>>umur;
	if (umur<=18)
	{
		if (umur<=10)
			cout<<"Anak-anak"<<endl;
		else 
			cout<<"Remaja"<<endl;
	}
	else 
		cout<<"Bukan usia anak maupun remaja"<<endl;
getch();
}
