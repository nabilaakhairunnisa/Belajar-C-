#include<iostream>
using namespace std;

void tukar (int &x, int &y)
{
	int z = x; // nilai a disimpan di z
	x=y; // nilai a menjadi b
	y=z; // nilai b menjadi a
}

int main()
{
	int A=15;
	int B=20;
	cout<<"A = "<<A<<", B = "<<B<<endl;
	cout<<"Menukar nilai A dan B"<<endl;
	tukar (A, B);
	cout<<"A = "<<A<<", B = "<<B<<endl<<endl;
}
	
