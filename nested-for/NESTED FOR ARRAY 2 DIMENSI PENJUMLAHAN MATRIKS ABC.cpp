#include <iostream>
using namespace std;
int main(){
// Dengan jumlah elemen baris = 3
// dan jumlah elemen kolom = 2
int matrika [3][2];
int matrikb [3][2];
int matrikc [3][2];
// Mendeklarasi variabel untuk
// Indeks perulangan
int i,j;
cout<<"Penjumlahan Array 2 Dimensi (Matrik)\n";
// Mengisi nilai kedalam
// Elemen-elemen array matrika
for(i=0;i<3;i++){
for(j=0;j<2;j++){
cout<<"matrik A ["<<i<<"] ["<<j<<"] = ";
cin>>matrika[i][j];
cout<<"matrik B ["<<i<<"] ["<<j<<"] = ";
cin>>matrikb[i][j];
}
}
cout<<endl;
// Melakukan penjumlahan array matrik A dan matrik B
// Dan menyimpan hasilnya ke array matrik C;
for(i=0;i<3;i++){
for(j=0;j<2;j++){
matrikc[i][j]=matrika[i][j] + matrikb[i][j];
}
}
// Menampilkan matrik A
cout<<"\nMatrik A\n";
for(i=0;i<3;i++){
for(j=0;j<2;j++){
cout<<matrika[i][j]<<" ";
}
cout<<endl;
}
// Menampilkan matrik B
cout<<"\nMatrik B\n";
for(i=0;i<3;i++){
for(j=0;j<2;j++){
cout<<matrikb[i][j]<<" ";
}
cout<<endl;
}
// Menampilkan hasil perhitungan / matrik C
// (dalam bentuk matrik dengan ordo 3x2)
cout<<"\nMatrik C (hasil)\n";
for(i=0;i<3;i++){
for(j=0;j<2;j++){
cout<<matrikc[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
