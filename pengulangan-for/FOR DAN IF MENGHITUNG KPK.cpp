#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, x, nilai;
	nilai=0;
	cout<<"Masukkan Nilai Bil A : ";cin>>a;
	cout<<"Masukkan Nilai Bil B : ";cin>>b;
	for(x=1;x<=b;x++)
	{  
		nilai = nilai + a;
		if(nilai % b==0)
		{
			cout<<"KPK dari kedua bilangan tersebut adalah : "<<nilai;
			break;     
		} 
	}
	getch();
}
