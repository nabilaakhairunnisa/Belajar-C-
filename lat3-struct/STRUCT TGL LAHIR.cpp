#include<iostream>
#include <cstring>
using namespace std;
struct tgl 
{
	int dd;
	int mm;
	int yy;
};

struct mhs
{
	char NIM [20];
	char nama [60];
	tgl tgl_lahir;
};

void tampilkan (mhs n)
{
	cout<<"NIM : "<<n.NIM<<endl;
	cout<<"Nama : "<<n.nama<<endl;
	cout<<"Tanggal Lahir : "<<n.tgl_lahir.dd<<" "<<n.tgl_lahir.mm<<" "<<n.tgl_lahir.yy<<" "<<endl;
}

int main()
{
	mhs n;
	strcpy(n.NIM, "211011400012");
	strcpy(n.nama, "Habib");
	n.tgl_lahir.dd=25;
	n.tgl_lahir.mm=9;
	n.tgl_lahir.yy=2002;
	tampilkan (n);
}


