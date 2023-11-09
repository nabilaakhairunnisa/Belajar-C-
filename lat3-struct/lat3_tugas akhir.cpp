#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct TINGGAL {
 string Jalan;
 int Pos;
 string Kota;
};

struct TANGGAL {
 int Tanggal ;
 int Bulan ;
 int Tahun ;
};

struct BIODATA {
 string NIP;
 string Nama;
 TINGGAL Alamat;
 string Jabatan;
 string Agama;
 TANGGAL Lahir;
 TANGGAL MulaiKerja;
 string Unit_Kerja;
};

int main ( )
{
 BIODATA Bio [3] ;
 int i;
 for (i=1; i<3; i++)
 {
 cout<<"         Biodata "       <<i<<endl<<endl;
 cout<<"NIP                  : "; cin>>Bio[i].NIP;
 cout<<"Nama                 : "; cin>>Bio[i].Nama;
 cout<<"Alamat                 "<<endl;
 cout<<"   Jalan             : "; cin>>Bio[i]. Alamat.Jalan;
 cout<<"   Kota              : "; cin>>Bio[i]. Alamat. Kota ;
 cout<<"   Kode Pos          : "; cin>>Bio[i]. Alamat. Pos;
 cout<<"Jabatan              : "; cin>>Bio[i].Jabatan;
 cout<<"Agama                : "; cin>>Bio[i]. Agama;
 cout<<"Tanggal Lahir          "<<endl;
 cout<<"   Tanggal           : "; cin>>Bio [i]. Lahir. Tanggal;
 cout<<"   Bulan             : "; cin>>Bio [i]. Lahir. Bulan;
 cout<<"   Tahun             : "; cin>>Bio [i]. Lahir. Tahun ;
 cout<<"Tanggal Mulai Kerja    "<<endl;
 cout<<"   Tanggal           : "; cin>>Bio [i]. MulaiKerja. Tanggal;
 cout<<"   Bulan             : "; cin>>Bio [i]. MulaiKerja. Bulan;
 cout<<"   Tahun             : "; cin>>Bio [i]. MulaiKerja. Tahun ;
 cout<<"Unit Kerja           : "; cin>>Bio[i].Unit_Kerja;
 cout<<"\n\n";
 }

 cout<<"~~~~~ Mencetak Biodata ~~~~~ \n\n"; 
 for (i=1; i<3; i++)
 {
 cout<<"          Biodata "     <<i<<endl<<endl;
 cout<<"NIP                  : "<< Bio[i].NIP<<endl;
 cout<<"Nama                 : "<< Bio[i].Nama<<endl;
 cout<<"Alamat               : ";
 cout<<"Jalan "					<< Bio[i].Alamat.Jalan;
 cout<<", "   					<< Bio[i].Alamat.Kota;
 cout<<", "    					<< Bio[i].Alamat.Pos<<endl;
 cout<<"Jabatan              : "<< Bio[i]. Jabatan<<endl;
 cout<<"Agama                : "<< Bio[i]. Agama<<endl;
 cout<<"Tanggal Lahir        : ";
 cout<<							   Bio[i].Lahir.Tanggal;
 cout<<"-"						<< Bio[i].Lahir.Bulan;
 cout<<"-"						<< Bio[i].Lahir.Tahun<<endl;
 cout<<"Tanggal Mulai Kerja  : ";
 cout<<							   Bio [i]. MulaiKerja. Tanggal;
 cout<<"-"						<< Bio [i]. MulaiKerja. Bulan;
 cout<<"-"						<< Bio [i]. MulaiKerja. Tahun<<endl;
 cout<<"Unit Kerja           : "<< Bio [i]. Unit_Kerja<<endl;
 cout<<"\n\n";
 }
 getch ();
}

