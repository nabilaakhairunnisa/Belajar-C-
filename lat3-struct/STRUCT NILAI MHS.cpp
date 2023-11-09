#include<iostream>
#include <cstring>
using namespace std;
struct nilaimhs 
{
	char NIM [20];
	short tahun;
	char semester;
	char matkul [20];
	int nilai;
};

void tampilkan (nilaimhs n)
{
	cout<<"--- Nilai Mahasiswa ---"<<endl;
	cout<<"NIM 	: "<<n.NIM<<endl;
	cout<<"Tahun 	: "<<n.tahun<<endl;
	cout<<"Sem 	: "<<n.semester<<endl;
	cout<<"Matkul 	: "<<n.matkul<<endl;
	cout<<"Nilai 	: "<<n.nilai<<endl;
}

int main()
{
	nilaimhs n;
	strcpy(n.NIM, "211011400012");
	n.tahun=2022;
	n.semester ='2';
	strcpy(n.matkul, "PEMROGRAMAN");
	n.nilai=90;
	tampilkan(n);
}
