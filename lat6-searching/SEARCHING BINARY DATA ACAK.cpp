#include<iostream>
#include <iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

int AngkaAcak (int *a, int n)
{
	srand (time(NULL));
	for (int i=0; i<n; i++)
	{
		*a = rand()%100; 
		a++;
	}
}

int main()
{
	//Menampilkan Data Sebelum Diurut
	int array[8];
	AngkaAcak (array, 8);
	int Swap;
	cout<<"Data sebelum diurutkan: \n";
	for (int ctr=0; ctr<8; ctr++)
	{
		cout<< setw(5) << array[ctr];
	}
	
	//Sorting
	cout<<"\n\n";
	for ( int i=0; i<7; i++)
	for ( int ii=0; ii<7; ii++)
	if ( array[ii] < array [ii +1] )
	{
		Swap = array [ii];
		array [ ii ] = array [ ii +1 ];
		array [ ii + 1] = Swap;
	}
	
	cout<<"Data setelah diurutkan  : \n";
	for (int iii=0; iii<8; iii++)
	cout<< setw (5) << array [iii];
	cout<<endl<<endl;
	
	//Output
	int searching_element=0;
	int flag=0;
	cout<<"\nMasukan data yang anda cari = ";
	cin>>searching_element;
	flag=binary_search(array, array_size, searching_element);
	if(flag != -1)
	cout<<"\nData tersebut ditemukan pada posisi array ["<<flag<<"]";
	else
	cout<<"\nData tersebut tidak ditemukan.";
	getch();
	return 0;
}

int binary_search(int array[ ], int array_size, int element)
{
	int start=0;
	int end=array_size-1;
	int middle;
	int position=-1;
	middle=(start+end)/2;
	do
	{
		if(element <array [middle])
		end= middle-1;
		else if(element > array [middle])
		start=middle+1;
		middle=(start+end)/2;
	}
	while(start<=end && array [middle]!=element);
	if(array [middle]==element)
	position=middle;
	return position;
}
