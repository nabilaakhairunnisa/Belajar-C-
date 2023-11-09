#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node{
    char Isi;
    simpul Next;
};

// Prototype Function
void Sisip_Depan(simpul &L, char elemen);
void Sisip_Belakang(simpul &L, char elemen);
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2);
void Hapus_Depan(simpul &L);
void Hapus_Belakang(simpul &L);
void Hapus_Tengah(simpul &L, char elemen);
void Cetak(simpul L);

// Main Function
int main() {
    char huruf, huruf2;
    simpul L = NULL; // Pastikan L kosong
    cout << "== OPERASI PADA SINGLE LINKED LIST ==" << endl << endl;

    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Depan(L, huruf);
    Cetak(L);

    // Sisip Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang"  << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    Cetak(L);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << "\n\nPenyisipan Simpul Setelah Simpul Tertentu"  << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(L, huruf, huruf2);
    Cetak(L);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << "\n\nPenyisipan Simpul Sebelum Simpul Tertentu" << endl;
    cout << "Masukkan Huruf: ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(L, huruf, huruf2);
    Cetak(L);

    // Hapus Simpul Depan
    cout << "\n\nHapus Simpul Depan" << endl;
    cout << "Masukkan Huruf Depan Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Depan" << endl;
    Hapus_Depan(L);
    Cetak(L);

    // Hapus Simpul Belakang
    cout << "\n\nHapus Simpul Belakang" << endl;
    cout << "Masukkan Huruf Belakang Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Belakang" << endl;
    Hapus_Belakang(L);
    Cetak(L);

    // Hapus Simpul Tengah
    cout << "\n\nHapus Simpul Tengah" << endl;
    cout << "Masukkan Huruf Tengah Yang akan dihapus: ";
    cin >> huruf;
    cout << "Setelah Hapus Simpul Tengah" << endl;
    Hapus_Tengah(L, huruf);
    Cetak(L);

    return 0;
}

// FUNCTION SISIP SIMPUL DI DEPAN
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

// FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU
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

// FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU
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

// FUNCTION SISIP SIMPUL DI BELAKANG
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

// FUNCTION HAPUS SIMPUL DI DEPAN
void Hapus_Depan(simpul &L) {
    if (L == NULL) {
        cout << "List Kosong............." << endl;
    } else {
        simpul hapus = L;
        L = L->Next;
        free(hapus);
    }
}

// FUNCTION HAPUS SIMPUL DI BELAKANG
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

// FUNCTION HAPUS SIMPUL TERTENTU
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

// FUNCTION CETAK SIMPUL
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

