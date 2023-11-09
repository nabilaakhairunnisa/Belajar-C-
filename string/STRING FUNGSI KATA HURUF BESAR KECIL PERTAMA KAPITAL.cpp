#include <iostream>
#include <cstring>
using namespace std;
void HurufBesar (char *);
void HurufKecil (char *);
void HurufPertamaKapital (char *);

int main()
{
	char kata [50];
	cout<<"Masukan Kata : ";
	cin.getline(kata, 50);
	HurufBesar (kata);
	HurufKecil (kata);
	HurufPertamaKapital (kata);
}

void HurufBesar (char *s)
{
	cout<<"KATA DALAM HURUF BESAR : ";
	int p=strlen(s);
	char str[50];
	for (int i=0; i<p; i++)
	{
		str[i]=toupper(s[i]);
	}
	str[p]='\0';
	cout<<str;
}

void HurufKecil (char *s)
{
	cout<<"\nkata dalam huruf kecil : ";
	int p=strlen(s);
	char str[50];
	for (int i=0; i<p; i++)
	{
		str[i]=tolower(s[i]);
	}
	str[p]='\0';
	cout<<str;
}

void HurufPertamaKapital (char *x)
{
	cout<<"\nKata Dalam Huruf Pertama Kapital : ";
	bool kap=true;
	for (int i=0; i<=strlen(x); i++)
	{
		if(isalpha(x[i]) && kap==true)
		{
			x[i]=toupper(x[i]);
			kap=false;	
		}
		else if (isspace(x[i]))
			kap=true;
		cout<<x[i];
	}
}
