#include<iostream>
using namespace std;

void cetak (int flag)
{
	if (flag != 0)
		cout<<"Data tersebut ada pada array ke-"<<flag;
	else
		cout<<"Data tersebut tidak ditemukan";
}

void linear_search (int A[ ], int data, int cari)
{
	int flag=0;
	for (int i=0; i<data; i++)
	{
		if (cari==A[i])
			{
				flag = i;
			}
	}
	cetak (flag);
}

int main()
{
	int data, cari, flag;
	cout<<"Masukan jumlah data : ";	cin>>data;
	int A[data];
	for (int i=1; i<=data; i++)
	{
		cout<<"Masukan data ke-"<<i<<" : "; cin>>A[i];
	}
	cout<<"Masukan data yang anda cari : ";	cin>>cari;
	linear_search (A, data, cari);
}

