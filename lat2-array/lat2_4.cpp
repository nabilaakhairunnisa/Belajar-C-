#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int Nilai [ 20 ];
int Posisi [ 20 ];
int i, N, Bilangan, Banyak=0;
bool ketemu;
cout<<"Masukan Banyaknya Bilangan = ";
cin>>N;
cout<<endl;
//Membaca elemen Array
for (i=0; i<N ;i++)
{
 cout<<"Masukan elemen ke-"<<i<<" = ";
 cin>>Nilai [i];
}
//Membaca Elemen Array
cout<<"\nDeretan Bilangan = ";
for (i=0; i<N; i++)
 cout<<Nilai [i]<<" ";
cout<<"\n\nMasukan Bilangan yang akan dicabut = ";
cin>>Bilangan ;
//melakukan pencarian
for(i=0; i<N; i++)
{
 if(Nilai [i]==Bilangan)
 {
 ketemu = true;
 Posisi [Banyak]=i;
 Banyak++;
 }
}
if(ketemu)
{
 cout<<"\nBilangan "<< Bilangan<<" ditentukan sebanyak "<< Banyak;
 cout<<" pada posisi ke = ";
 for(i=0; i<Banyak ; i++)
cout<<Posisi [i]<<" ";
}
else
 cout<<"Bilangan "<<Bilangan<<"tidak ditemukan";
getch ();
}



