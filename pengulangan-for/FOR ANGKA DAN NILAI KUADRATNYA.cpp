#include <conio.h> 
#include <iostream> 
using namespace std; 
int main()
{ 
	int nilai; 
	cout<<"Angka : \t Nilai Kuadratnya :"; 
	cout<<"\n"; 
	for (nilai = 1; nilai <= 10; nilai++) 
		cout<<nilai<<"\t\t\t"<<(nilai*nilai)<<endl;
	getch (); 
	return 0; 
}
