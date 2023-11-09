#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char Nama[30], Hobi[30], NamaCpy[30], HobiCpy[30];
	cout<<"Masukan Nama : "; gets (Nama);
	cout<<"Masuka Hobi : "; gets (Hobi);
	strcpy (NamaCpy, Nama);
	cout<<"Nama kamu adalah "<<NamaCpy<<" dan hobi kamu adalah "<<HobiCpy;
}
