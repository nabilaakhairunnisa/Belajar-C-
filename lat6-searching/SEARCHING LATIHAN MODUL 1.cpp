#include<iostream>
#include<conio.h>
using namespace std;
int linear_search (int [], int, int);

int main()
{
	//Menampilkan Data Array
	const int array_size=10;
	int array[array_size]={25, 36, 2, 48, 0, 69, 14, 22, 7, 19};
	cout<<"Isi dari array adalah : "<<endl;
	cout<<"\nArray:"<<"\t\tData:"<<endl;
	for (int count=0; count<array_size; count++)
	{
		cout<<"Array["<<count<<"]"<<"\t"<<array[count]<<endl;
	}
	
	int searching_element=0;
	int flag=0;
	cout<<"\n\nMasukan data yang anda cari = ";	cin>>searching_element;
	flag=linear_search(array,array_size, searching_element);
	if(flag !=- 1)
	cout<<"\nData tersebut ditemukan pada posisi array ["<<flag<<"]";
	else
	cout<<"\nData tersebut tidak ditemukan ";
	getch();
	return 0;
}

int linear_search (int array[ ], int array_size, int element)
{
	int flag=-1;
	for (int count=0; count<array_size; count++)
	{
		if (element==array [count])
		{
			flag=count;
			break;
		}
	}
	return flag;
}
