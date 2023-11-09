#include<iostream>
#include<stdlib.h>
//DLL
#define true 1
#define false 0
#include<conio.h>
using namespace std;

//Stucture Singly and Doubly Linked List
typedef struct node *simpul;
struct node{
    char Isi;
    //SLL
    simpul Next;
    //DLL
    simpul kanan;
    simpul kiri;
};

// Prototype Function Singly Linked List
void Sisip_Depan(simpul &L, char elemen);
void Sisip_Belakang(simpul &L, char elemen);
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2);
void Hapus_Depan(simpul &L);
void Hapus_Belakang(simpul &L);
void Hapus_Tengah(simpul &L, char elemen);
void Cetak(simpul L);
void SinglyLL();

// Prototype Function Doubly Linked List
void Sisip_Depan_DLL (simpul &DL, char elemen );
void Sisip_Belakang_DLL (simpul &DL, char elemen ) ;
void Sisip_Tengah1_DLL (simpul &DL, char elemen1, char elemen2 ) ;
void Sisip_Tengah2_DLL (simpul &DL, char elemen1, char elemen2 ) ;
void Hapus_Depan_DLL (simpul &DL);
void Hapus_Belakang_DLL (simpul &DL);
void Hapus_Tengah_DLL (simpul &DL, char elemen);
void Cetak_DLL (simpul DL);
void DoublyLL();

// Main Function
int main(){
	char ulang;
	int pil;
	do {
		cout<<"==========================================\n";
		cout<<"    MENU SINGLY AND DOUBLY LINKED LIST    \n";	
		cout<<"==========================================\n";
		cout<<" 1. Singly Linked List                    \n";
		cout<<" 2. Doubly Linked List                    \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		if (pil == 1){
			SinglyLL();
		} else if (pil == 2){
			DoublyLL();
		} else {
			cout<<"Pilihan yang anda masukkan salah\n";
			cout<<"Pilih ulang? (y/n): "; cin>>ulang;
		}
	} while (ulang != 'n');
}

// Singly Linked List Function
void SinglyLL() {
    char huruf, huruf2;
    int i;
    simpul L = NULL; // Pastikan L kosong
    cout<<endl;
   	cout<<"==========================================\n";
	cout<<"     OPERASI PADA SINGLY LINKED LIST      \n";	
	cout<<"==========================================\n";

	 cout<<"\n1. Penyisipan Simpul Di Depan\n";
	 for (i=1;i<=4;i++) {
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Depan (L, huruf );
	 } Cetak (L);

     cout<<"\n2. Penyisipan Simpul Di Belakang\n";
	 for (i=1;i<=4;i++){
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Belakang (L, huruf );
	 } Cetak (L);

    cout << "\n3. Penyisipan Simpul Setelah Simpul Tertentu"  << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(L, huruf, huruf2);
    Cetak(L);

    cout << "\n4. Penyisipan Simpul Sebelum Simpul Tertentu" << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf: ";
    cin >> huruf2;
    cout << huruf << "Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(L, huruf, huruf2);
    Cetak(L);

    cout << "\n5. Hapus Simpul Depan" << endl;
    cout << "Masukkan Huruf Depan Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Depan" << endl;
    Hapus_Depan(L);
    Cetak(L);

    cout << "\n6. Hapus Simpul Belakang" << endl;
    cout << "Masukkan Huruf Belakang Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Belakang" << endl;
    Hapus_Belakang(L);
    Cetak(L);

    cout << "\n7. Hapus Simpul Tengah" << endl;
    cout << "Masukkan Huruf Tengah Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Tengah" << endl;
    Hapus_Tengah(L, huruf);
    Cetak(L);
}

void Sisip_Depan(simpul &L, char elemen) {
    simpul baru = (simpul) malloc(sizeof(node));
    baru->Isi = elemen;
    baru->Next = NULL;

    if (L == NULL) {
        L = baru;
    } else {
        baru->Next = L;
        L = baru;
    }
}

void Sisip_Tengah1(simpul &L, char elemen1, char elemen2) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul bantu = L;
        while (bantu->Isi != elemen2 && bantu->Next != NULL) {
            bantu = bantu->Next;
        }

        if (bantu->Isi == elemen2) {
            simpul baru = (simpul) malloc(sizeof(node));
            baru->Isi = elemen1;
            baru->Next = bantu->Next;
            bantu->Next = baru;
        } else {
            cout << "Simpul " << elemen2 << " tidak ditemukan." << endl;
        }
    }
}

void Sisip_Tengah2(simpul &L, char elemen1, char elemen2) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul bantu = L;
        simpul prev = NULL;

        while (bantu->Isi != elemen2 && bantu->Next != NULL) {
            prev = bantu;
            bantu = bantu->Next;
        }

        if (bantu->Isi == elemen2) {
            simpul baru = (simpul) malloc(sizeof(node));
            baru->Isi = elemen1;
            baru->Next = bantu;

            if (prev == NULL) {
                L = baru;
            } else {
                prev->Next = baru;
            }
        } else {
            cout << "Simpul " << elemen2 << " tidak ditemukan." << endl;
        }
    }
}

void Sisip_Belakang(simpul &L, char elemen) {
    simpul baru = (simpul) malloc(sizeof(node));
    baru->Isi = elemen;
    baru->Next = NULL;

    if (L == NULL) {
        L = baru;
    } else {
        simpul bantu = L;
        while (bantu->Next != NULL) {
            bantu = bantu->Next;
        }
        bantu->Next = baru;
    }
}

void Hapus_Depan(simpul &L) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul hapus = L;
        L = L->Next;
        free(hapus);
    }
}

void Hapus_Belakang(simpul &L) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul hapus = L;
        simpul prev = NULL;

        while (hapus->Next != NULL) {
            prev = hapus;
            hapus = hapus->Next;
        }

        if (prev == NULL) {
            L = NULL;
        } else {
            prev->Next = NULL;
        }

        free(hapus);
    }
}

void Hapus_Tengah(simpul &L, char elemen) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul hapus = L;
        simpul prev = NULL;

        while (hapus->Isi != elemen && hapus->Next != NULL) {
            prev = hapus;
            hapus = hapus->Next;
        }

        if (hapus->Isi == elemen) {
            if (prev == NULL) {
                L = L->Next;
            } else {
                prev->Next = hapus->Next;
            }

            free(hapus);
        } else {
            cout << "Simpul " << elemen << " tidak ditemukan." << endl;
        }
    }
}

void Cetak(simpul L) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul bantu = L;
        while (bantu != NULL) {
            cout << bantu->Isi << " -> ";
            bantu = bantu->Next;
        }
        cout << "NULL" << endl;
    }
}

void DoublyLL( )
{
	 char huruf, huruf2;
	 simpul DL = NULL; //Pastikan Bahwa DL kosong
	 int i;
	 cout<<endl;
	 cout<<"==========================================\n";
	 cout<<"     OPERASI PADA DOUBLY LINKED LIST      \n";	
	 cout<<"==========================================\n";

	 cout<<"\n1. Penyisipan Simpul Di Depan\n";
	 for (i=1;i<=4;i++) {
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Depan_DLL (DL, huruf );
	 } Cetak_DLL (DL);

     cout<<"\n2. Penyisipan Simpul Di Belakang\n";
	 for (i=1;i<=4;i++){
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Belakang_DLL (DL, huruf );
	 } Cetak_DLL (DL);

     cout<<"\n3. Penyisipan Simpul Setelah Simpul Tertentu\n";
	 cout<<"Masukan Huruf : "; cin>>huruf;
	 cout<<"Disisip Setelah Huruf : "; cin>>huruf2;
	 cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
	 Sisip_Tengah1_DLL (DL, huruf, huruf2);
	 Cetak_DLL (DL) ;

     cout<<"\n4. Penyisipan Simpul Sebelum Simpul Tertentu\n";
	 cout<<"Masukan Huruf : "; cin>>huruf;
	 cout<<"Disisip Sebelum Huruf : "; cin>>huruf2;
	 cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
	 Sisip_Tengah2_DLL (DL, huruf, huruf2);
	 Cetak_DLL (DL) ; 

     cout<<"\n5. Hapus Simpul Depan\n";
	 cout<<"Setelah Hapus Simpul Depan "<<endl;
	 Hapus_Depan_DLL (DL);
	 Cetak_DLL (DL);
	 
	 cout<<"\n6. Hapus SImpul Belakang\n";
	 cout<<"Setelah Hapus Simpul Belakang "<<endl;
	 Hapus_Belakang_DLL (DL);
	 Cetak_DLL (DL);
	 
	 cout<<"\n7. Hapus Simpul Tengah\n";
	 cout<<"Masukkan Huruf Tengah Yang akan dihapus : ";cin>>huruf;
	 Hapus_Tengah_DLL (DL,huruf);
	 Cetak_DLL (DL);
	 getch ( ) ;
}

void Sisip_Depan_DLL (simpul &DL, char elemen)
{ 
	 simpul baru; 
	 baru = (simpul) malloc (sizeof(simpul));
	 baru->Isi = elemen ;
	 baru-> kanan = NULL;
	 baru-> kiri = NULL;
	 if (DL== NULL) {
	 	 DL=baru;
	 } else {
		 baru->kanan = DL;
		 DL->kiri = baru;
		 DL= baru;
	 }
}

void Sisip_Tengah1_DLL (simpul &DL, char elemen1, char elemen2)
{
	 simpul bantu,baru;
	 baru = (simpul) malloc (sizeof(simpul));
	 baru->Isi = elemen1 ;
	 baru-> kanan = NULL;
	 baru-> kiri = NULL;
	 if (DL== NULL) {
	 	 cout << "List Kosong............"<<endl;
	 } else {
		 bantu = DL;
		 while (bantu ->Isi != elemen2) 
		 bantu = bantu -> kanan;
		 baru->kanan = bantu ->kanan;
		 baru->kiri = bantu;
		 bantu->kanan->kiri = baru;
		 bantu->kanan = baru;
	 }
}

void Sisip_Tengah2_DLL (simpul &DL, char elemen1, char elemen2)
{
	 simpul bantu, baru;
	 baru = (simpul) malloc (sizeof(simpul));
	 baru->Isi = elemen1 ;
	 baru-> kanan = NULL;
	 baru-> kiri = NULL;
	 if (DL== NULL) {
		 cout<<"List Kosong.............."<<endl;
	 } else {
		 bantu = DL;
		 while (bantu->kanan->Isi != elemen2) 
		 bantu = bantu -> kanan;
		 baru->kanan = bantu ->kanan;
		 baru->kiri = bantu;
		 bantu->kanan->kiri = baru;
		 bantu->kanan = baru;
	 }
}

void Sisip_Belakang_DLL (simpul &DL, char elemen)
{
	 simpul bantu, baru;
	 baru = (simpul) malloc (sizeof(simpul));
	 baru->Isi = elemen ;
	 baru-> kanan = NULL;
	 baru-> kiri = NULL;
	 if (DL== NULL) {
	  DL=baru;
	 } else {
		 bantu = DL;
		 while (bantu->kanan != NULL)
		 bantu = bantu -> kanan;
		 bantu->kanan = baru;
		 baru->kiri = bantu;
	 }
}

void Cetak_DLL (simpul DL)
{
	 simpul bantu ;
	 if (DL==NULL)
	 	 cout<<"Linked List Kosong......."<<endl;
	 else {
		 bantu =DL;
		 cout<<"Isi Linked List : ";
		 while (bantu ->kanan != NULL) {
			 cout<<bantu->Isi<<" <==> ";
			 bantu=bantu->kanan;
		 } cout<<bantu->Isi;
	} cout<<"\n\n";
}

void Hapus_Depan_DLL (simpul &DL)
{
	 simpul Hapus ;
	 if (DL==NULL)
	 	cout<<"Linked List Kosong.............";
	 else {
		 Hapus = DL;
		 DL = DL-> kanan ;
		 DL ->kiri = NULL;
		 Hapus -> kanan = NULL;
		 free (Hapus);
	 }
}

void Hapus_Belakang_DLL (simpul &DL)
{
	 simpul bantu, hapus;
	 if (DL==NULL)
	 	cout<<"Linked List Kosong.............";
	 else {
		 bantu = DL;
		 while (bantu ->kanan->kanan != NULL) bantu=bantu->kanan;
		 hapus = bantu -> kanan;
		 bantu -> kanan = NULL;
		 hapus -> kiri = NULL;
		 free (hapus);
	 }
}

void Hapus_Tengah_DLL (simpul &DL, char elemen)
{
	 simpul bantu, hapus;
	 if (DL==NULL)
	 	cout<<"Linked List Kosong.............";
	 else {
		 bantu = DL;
		 while (bantu ->kanan->Isi != elemen) 
		 bantu=bantu->kanan;
		 hapus = bantu -> kanan;
		 bantu ->kanan->kanan->kiri = bantu;
		 bantu ->kanan = bantu->kanan->kanan;
		 hapus -> kanan = NULL;
		 hapus -> kiri = NULL;
		 free (hapus);
	 }
}

