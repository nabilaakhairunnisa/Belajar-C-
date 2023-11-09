#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char alamat[50];
	cout<<"Masukan alamat : ";
	cin.getline(alamat, 50);
	strupr(alamat);
	cout<<"alamat anda adalah : "<<alamat;
	
}
