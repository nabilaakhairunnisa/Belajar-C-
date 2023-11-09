#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
struct Mahasiswa
{
 char Nim [16] ;
 char Nama [25] ;
 char Alamat [40] ;
 int  Umur ;
} ;
main ()
{
Mahasiswa Mhs [5] ;
 int i ;
 cout<<"~~Input Data Mahasiswa~~\n\n";
 for (i =0; i<5; i++ )
 {
 cout<<"NIM    : ";
 cin>>Mhs[i].Nim ;
 cout <<"Nama   : ";
 cin>>Mhs[i].Nama ;
 cout<<"Alamat : ";
 cin>>Mhs[i].Alamat ;
 cout<<"Umur   : ";
 cin>>Mhs[i].Umur ;
 cout<<endl;
 }
 cout<<"~~Cetak Data Mahasiswa~~\n";
 for( i =0; i<5; i++ )
 {
 cout<<"\nNIM    : "<<Mhs [i].Nim;
 cout<<"\nNama   : "<<Mhs [i].Nama;
 cout<<"\nAlamat : "<<Mhs [i].Alamat;
 cout<<"\nUmur   : "<<Mhs [i].Umur;
 cout<<endl;
 }
 getch ();
}

