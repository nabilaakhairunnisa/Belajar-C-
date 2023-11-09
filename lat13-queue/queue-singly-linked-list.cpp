#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
typedef struct node *simpul ;
struct node {
	 char Isi ;
	 simpul Next ;
 };

void Sisip_Belakang (simpul &L, char elemen ) ;
void Hapus_Depan (simpul &L);
void Cetak (simpul L);

int main()
{ 
	 char huruf ;
	 simpul L = NULL; //Pastikan bahwa L kosong
	 int i;
	 cout<<"==========================================\n";
	 cout<<"     OPERASI QUEUE SINGLE LINKED LIST     \n";	
	 cout<<"==========================================\n";

	 cout<<"~Penyisipan Simpul Belakang\n";
	 for(i=1; i<=3;i++) {
		 cout<<"Masukan Huruf : ";
		 cin>>huruf;
		 Sisip_Belakang (L, huruf);
	 } Cetak (L) ;
	 
	 cout<<"\n~Hapus Simpul Depan\n";
	 Cetak (L) ;
	 for (i=1; i<=3;i++) {
	 	Hapus_Depan (L) ;
	 	Cetak(L) ;
	 }
	 
	 cout<<"~Penyisipan Simpul Belakang\n";
	 for(i=1; i<=3;i++) {
		 cout<<"Masukan Huruf : ";
		 cin>>huruf;
		 Sisip_Belakang (L, huruf);
	 } Cetak (L) ;
	 
	 cout<<"\n~Hapus Simpul Depan\n";
	 Cetak (L) ;
	 for (i=1; i<=2;i++) {
	 	Hapus_Depan (L) ;
	 	Cetak(L) ;
	 }
}

void Sisip_Belakang (simpul &L, char elemen)
{
	 simpul bantu, baru;
	 baru = (simpul) malloc (sizeof(simpul));
	 baru-> Isi = elemen;
	 baru -> Next = NULL;
	 if (L == NULL)
	 L= baru;
	 else
	 {
	 bantu =L;
	while (bantu->Next != NULL)
	 bantu =bantu->Next; 
	 bantu->Next=baru;
	}
}

void Cetak (simpul L)
{
	 simpul bantu;
	 if(L==NULL)
	 cout<<"Linked List Kosong..........\n";
	 else
	 {
	 bantu=L;
	 cout<<"Isi Linked List : ";
	 while (bantu->Next != NULL)
	 {
	 cout<<bantu->Isi<<" -> ";
	 bantu=bantu->Next;
	 }
	 cout<<bantu->Isi;
	} cout<<endl;
}

void Hapus_Depan (simpul &L)
{
	 simpul Hapus;
	 if(L==NULL)
	 cout<<"Linked List Kosong..........\n";
	 else
	 {
	 Hapus=L;
	 L = L->Next;
	 Hapus->Next = NULL;
	 free(Hapus);
	 }
} 

