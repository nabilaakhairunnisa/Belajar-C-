#include<iostream>
using namespace std;

//Deklarasi
struct SIMPUL{ 
int INFO; 
struct SIMPUL *LEFT; 
struct SIMPUL *RIGHT; 
}; 
SIMPUL *P,*FIRST,*LAST;

//Pembuatan Simpul
void BUAT_SIMPUL(int X) 
{ 
	P=(SIMPUL*) malloc(sizeof(SIMPUL)); 
	if(P!=NULL) 
	{
		P->INFO=X;
	}
	else
	{
	cout<<"Pembuatan simpul gagal";
	exit(1);
	}
}

//Pembuatan Simpul Awal
void AWAL(void)
{
	FIRST=P;
	LAST=P;
	P->LEFT=NULL;
	P->RIGHT=NULL;
}

//Insert Kanan
void INSERT_KANAN(void)
{ 
	LAST->RIGHT=P; 
	P->LEFT=LAST; 
	LAST=P; 
	P->RIGHT=NULL; 
}

//Insert Kiri
void INSERT_KIRI(void) 
{ 
	P->RIGHT=FIRST; 
	FIRST->LEFT=P; 
	FIRST=P; 
	P->LEFT=NULL; 
}

//Insert Tengah
void INSERT_TENGAH(void) 
{ 
	P->RIGHT=Q->RIGHT; 
	P->LEFT=Q; 
	Q->RIGHT->LEFT=P; 
	Q->RIGHT=P; 
}



