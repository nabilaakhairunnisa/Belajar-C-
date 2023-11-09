#include<iostream> 
using namespace std;
int main ()
{
	int i, j, temp;
	int Nilai [8] = {25, 72, 30, 45, 20, 15, 6, 50};
	
	cout<<"Elemen Sebelum diurut = ";
	for (i=0; i<8; i++)
	cout<<Nilai[i]<<" ";
	
	//bubble sort
	for (i=0; i<8; i++)
	{
		for (j=i+1; j<8; j++)
		{
			if (Nilai [i] > Nilai [j])
			{
				temp = Nilai [i];
				Nilai [i] = Nilai [j];
				Nilai [j] = temp;
			}
		}
	}
	cout<<"\nElemen Setelah diurut = ";
	for (i=0; i<8;i++){
		cout<<Nilai [ i ]<<" ";
	}
}


