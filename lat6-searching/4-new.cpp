#include<iostream>
using namespace std;

struct BIODATA {
    int NIP;
    char Nama [35];
    string Alamat;
    string Agama ;
    string Jabatan;
};

void sequentialSearch(BIODATA Bio[], int n, string Cari);
void cetakBiodata(BIODATA Bio);

void inputBiodata(){
    int n;
    cout<<"Masukkan banyak data pegawai: "; cin>>n;
    BIODATA Bio[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Masukkan Biodata Pegawai ke-"<<(i+1)<<"\n";
        cout<<"NIP     : "; cin>>Bio[i].NIP;
        cout<<"Nama    : "; cin>>Bio[i].Nama;
        cout<<"Alamat  : "; cin>>Bio[i].Alamat;
        cout<<"Agama   : "; cin>>Bio[i].Agama;
        cout<<"Jabatan : "; cin>>Bio[i].Jabatan;
        cout<<"\n\n";
    }
    string cari;
    cout<<"Masukkan nama pegawai yang akan dicari: "; cin>>cari;
    sequentialSearch(Bio, n, cari);
}

void sequentialSearch(BIODATA Bio[], int n, string Cari){
    bool found = false;
    for(int i=0; i<n; i++){
        if (Bio[i].Nama==Cari){
            cout<<"Ketemu\n";
            cetakBiodata(Bio[i]);
            found = true;
        }
    }
    if (!found){
        cout<<"Tidak Ketemu\n";
    }
}

void cetakBiodata(BIODATA Bio){
    cout<<"Data Pegawai\n"; 
    cout<<"\nNIP     : "<< Bio.NIP;
    cout<<"\nNama    : "<< Bio.Nama;
    cout<<"\nAlamat  : "<< Bio.Alamat;
    cout<<"\nAgama   : "<< Bio.Agama;
    cout<<"\nJabatan : "<< Bio.Jabatan;
    cout<<"\n\n";
}

int main (){
    inputBiodata();
}



