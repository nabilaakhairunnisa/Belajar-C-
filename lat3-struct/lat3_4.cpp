#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
struct Tinggal {
 char Jalan [ 40 ];
 char Kota [ 15 ];
 int Pos ;
};
struct Tgl_Lahir {
 int Tanggal;
 int Bulan ;
 int Tahun ;
 };
struct Mahasiswa {
 char Nim [ 9 ];
 char Nama [ 25 ];
Tinggal Alamat ;
 Tgl_Lahir Lahir ;
 };
main ()
{
 Mahasiswa Mhs [5] ;
 int i ;
 for (i=0; i<3; i++)
 {
 cout<<"NIM  : "; cin>>Mhs[i].Nim ;
 cout<<"Nama : "; cin>>Mhs[i].Nama;
 cout<<"Alamat :\n";
 cout<<"\tJalan    : "; cin>>Mhs[i ]. Alamat. Jalan;
 cout<<"\tKota     : "; cin>>Mhs[i ]. Alamat. Kota ;
 cout<<"\tKode Pos : "; cin>>Mhs[i ]. Alamat. Pos;
 cout<<"Tanggal Lahir : \n";
 cout<<"\tTanggal : "; cin>>Mhs [i ]. Lahir. Tanggal;
 cout<<"\tBulan   : "; cin>>Mhs [i ]. Lahir. Bulan;
 cout<<"\tTahun   : "; cin>>Mhs [i ]. Lahir. Tahun ;
 cout<<endl;
 }
 cout<<"\n~~Mencetak Kembali Nilai Anggota~~\n\n"; 
 for (i=0; i<3; i++)
 {
 cout<<"\nNIM    : "<<Mhs [ i ]. Nim ;
 cout<<"\nNama   : "<<Mhs [ i ]. Nama ;
 cout<<"\nAlamat : " ;
 cout<<"Jalan "<<Mhs[i ].Alamat. Jalan;
 cout<<", "<<Mhs[i ]. Alamat. Kota ;
 cout<<", "<<Mhs[i ]. Alamat. Pos;
 cout<<"\nTanggal Lahir : "<<Mhs[i ]. Lahir. Tanggal<<"-";
 cout<<Mhs [ i ]. Lahir.Bulan <<"-"<<Mhs[i ]. Lahir. Tahun ;
 cout<<endl;
 }
 getch ();
}

