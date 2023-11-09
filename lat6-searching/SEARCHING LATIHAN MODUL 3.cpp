#include<iostream>
#include<conio.h>
using namespace std;
int binary_search(int [ ], int, int);
main( )
{
	const int array_size=10;
	int array[array_size]={20, 31, 15, 46, 105, 7, 81, 88, 71, 16};
	cout<<"Isi dari array adalah : "<<endl;
	cout<<"\nArray:"<<"\t\t\tData :"<<endl;
	for (int count=0; count<array_size; count++)
	{
		cout<<"Array ["<<count<<"] "<<"\t\t"<<array[count]<<endl;
	}
	
	//Sorting
	cout<<"\n\n";
	for (int i=0; i<9; i++)
	for (int ii=0; ii<9; ii++)
	if (array[ii] > array [ii +1])
	{
		int Swap = array [ii];
		array [ ii ] = array[ ii +1 ];
		array [ ii + 1] = Swap;
	}
	cout<<"Data setelah diurutkan (Ascending) : \n";
	for (int iii=0; iii<10; iii++)
	cout<<"Array ["<<iii<<"]"<<"\t\t"<<array[iii]<<endl;
	
	//output
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
