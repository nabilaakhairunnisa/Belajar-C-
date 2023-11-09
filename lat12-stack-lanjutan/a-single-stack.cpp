#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define true1
#define false 0
using namespace std;
typedef struct node *simpul;
struct node
 {
	 char Isi;
	 simpul next ;
 };

void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Belakang (simpul &L);
void Cetak (simpul L);

int main ( )
{
	 char huruf;
	 int i;
	 simpul L = NULL; //Pastikan bahwa L kosong
	 cout<<"==========================================\n";
	 cout<<"   OPERASI SINGLE LINKED LIST PADA STACK  \n";	
	 cout<<"==========================================\n";
	
	 cout<<"\n1. Sisip Belakang Stack\n";
	 for (i=1;i<=6;i++) {
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Belakang (L, huruf );
	 } Cetak (L);
	
	 cout<<"\n2. Hapus Simpul Belakang Stack\n";
	 for (i=1;i<=4;i++) {
		 cout<<"Masukan Huruf  : "; cin>>huruf;
		 Hapus_Belakang (L);
		 Cetak (L);
	 }
}

void Sisip_Belakang (simpul & L, char elemen)
{
	 simpul bantu, baru;
	 baru= (simpul) malloc(sizeof(simpul));
	 baru->Isi = elemen; 
	 baru->next = NULL;
	 if(L == NULL)
	 	L=baru;
	 else {
		 bantu=L;
		 while(bantu->next != NULL)
		 bantu=bantu->next;
		 bantu->next=baru;
	}
}

void Hapus_Belakang (simpul & L)
{
	 simpul bantu, hapus;
	 if(L == NULL)
	 	cout<<"Linked List Kosong...........";
	 else {
	 	bantu=L;
		while(bantu->next->next != NULL)
		bantu=bantu->next;
		hapus = bantu ->next;
		bantu->next = NULL;
		free(hapus);
	 }
}

void Cetak(simpul L)
{
	 simpul bantu;
	 if (L==NULL)
	 	cout<<"Linked List Kosong....\n";
	 else {
		 bantu=L;
		 cout<<"Isi Linked List: ";
		 while (bantu->next != NULL) {
			 cout<<bantu->Isi <<" -> ";
			 bantu=bantu->next;
		 } cout<<bantu->Isi;
	 } cout<<endl;
} 
