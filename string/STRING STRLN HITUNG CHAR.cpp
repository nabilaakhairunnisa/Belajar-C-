#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char A[30];
	cout<<"Masukan karakter : "; cin.getline(A, 30);
	int N;
	N=strlen(A);
	cout<<"Jumlah karakter yang anda masukkan adalah : "<<N;
}
