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

int  main(){  
	int pil, i; 
	char huruf;
	simpul L = NULL; 
	do {
		cout<<"==========================================\n";
		cout<<"MENU OPERASI PADA QUEUE SINGLE LINKED LIST\n";	
		cout<<"==========================================\n";
		cout<<" 1. Sisip Simpul Belakang                 \n";
		cout<<" 2. Hapus Simpul Depan                    \n";
		cout<<" 3. Cetak Linked List        		     \n";
		cout<<" 4. Keluar             			         \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		if (pil == 1){
			cout<<"==========================================\n";
	 		cout<<"        1. Sisip Simpul Belakang          \n";	
	 		cout<<"==========================================\n";
			for(i=1; i<=6;i++) {
				 cout<<"Masukan Huruf : ";
				 cin>>huruf;
				 Sisip_Belakang (L, huruf);
			}
		} else if (pil == 2){
			Hapus_Depan (L) ;
		} else if (pil == 3){
			Cetak (L) ;
		} else if (pil == 4){
			cout<<"Terima Kasih";	
		} else {
			cout<<"Pilihan yang anda masukkan salah.\n";
			cout<<"Silahkan Pilih ulang.\n";
		}
	} while (pil != 4);

}

void Sisip_Belakang (simpul &L, char elemen)
{
	 simpul bantu, baru;
	 baru = (simpul) malloc (sizeof(simpul));
	 baru-> Isi = elemen;
	 baru -> Next = NULL;
	 if (L == NULL)
	 	L= baru;
	 else {
		 bantu =L;
		 while (bantu->Next != NULL)
		 bantu =bantu->Next; 
		 bantu->Next=baru;
	}
}

void Cetak (simpul L)
{
	 cout<<"==========================================\n";
	 cout<<"         3. Cetak Isi Linked List         \n";	
	 cout<<"==========================================\n";
	 simpul bantu;
	 if(L==NULL)
		 cout<<"Linked List Kosong..........\n";
	 else {
		 bantu=L;
		 cout<<"Isi Linked List : ";
	 while (bantu->Next != NULL) {
		 cout<<bantu->Isi<<" -> ";
		 bantu=bantu->Next;
	 } cout<<bantu->Isi;
	} cout<<endl;
}

void Hapus_Depan (simpul &L)
{
	 cout<<"==========================================\n";
	 cout<<"          2. Hapus Simpul Depan           \n";	
	 cout<<"==========================================\n";
	 simpul Hapus;
	 char huruf;
	 if(L==NULL)
	 	 cout<<"Linked List Kosong..........\n";
	 else {
		 Hapus=L;
		 L = L->Next;
		 Hapus->Next = NULL;
		 free(Hapus);
	 }
	 cout<<"Simpul Depan Berhasil Dihapus.\n";
} 
