#include<iostream>
using namespace std;
int main()
{
	char nilai;
	printf("Masukan satu huruf : ");
	scanf("%c",&nilai);
	switch (nilai)
	{
		case 'A':
		cout<<"Direktur"<<endl; break;
		case 'B':
		cout<<"Manager"<<endl; break;
		case 'C':
		cout<<"Staf"<<endl; break;
		default:
		cout<<"Kode salah"<<endl;
	}
}

