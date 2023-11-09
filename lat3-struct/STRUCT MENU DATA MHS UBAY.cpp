#include <iostream>
using namespace std;

void TampilSemuaData();
int Mencari(int);
void UrutAscending();
void UrutDescending();
void UbahNama(string, int, int);

struct mhs{
	int NIM;
	string Nama;
	short ThnMasuk;
};

mhs m [6] = { {110, "BUDI ", 2000}, {107, "SUSAN", 1999}, {142, "WAWAN", 2001},
			  {205, "ENDI ", 2002}, {104, "HANIF", 1999}, {108, "YUDI ", 1999} };

int main(){	

int i,
	mencari,
	loop = 1,
	nim,
	cari;
string ulang, nama;

do{
cout<<"=========================================================================================================\n";
cout<<endl<<" Berikut adalah pilihan yang dapat anda pilih :\n";
cout<<endl<<" 1. Menampilkan Semua Data\n";
cout<<" 2. Mencari mahasiswa berdasarkan NIM\n";
cout<<" 3. Mengurutkan secara ascending\n";
cout<<" 4. Mengurutkan secara descending\n";
cout<<" 5. Mengubah Nama dan NIM mereka\n";
cout<<" 6. Cukup / Berhenti\n";
cout<<endl<<" Masukkan angka yang sesuai untuk menjalankan perintah diatas, misal 1 untuk mencari data mahasiswa : ";cin>>i;

if(i == 1){
cout<<endl<<" Berikut adalah data-data mahasiswa :\n";
TampilSemuaData();
}else if(i == 2){
cout<<endl<<" Masukkan NIM mahasiswa yang ingin di cari : ";cin>>mencari;
Mencari(mencari);
}else if(i == 3){
UrutAscending();
}else if(i == 4){
UrutDescending();
}else if(i == 5){
cout<<endl<<" Pilih mahasiswa yang ingin dirubah berdasarkan NIM : ";cin>>mencari;
Mencari(mencari);
cari = mencari;
cout<<endl<<" Masukkan Nama baru : ";cin>>nama;
cout<<" Masukkan NIM baru : ";cin>>nim;cout<<endl;
UbahNama(nama, nim, cari);
}else if(i == 6){
cout<<endl<<" THANKS, HAVE A NICE DAY :)\n";
break;
}else{
cout<<endl<<" Masukkan nilai sesuai perintah\n\n";
}
cout<<endl<<" Ulangi ? y/n   : ";cin>>ulang;
if(ulang == "n"){
cout<<endl<<" THANKS, HAVE A NICE DAY :)\n";
loop = 2;
}
}while(loop == 1);

}

void TampilSemuaData(){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
int i, k=6;
for(i=0;i<k;i++){
cout<<" "<<m[i].NIM<<"\t"<<m[i].Nama<<"\t"<<m[i].ThnMasuk<<endl;
}
}

int Mencari(int nim){
mhs budi;
budi.NIM = 110;
budi.Nama= "BUDI";
budi.ThnMasuk = 2000;
mhs susan;
susan.NIM = 107;
susan.Nama = "SUSAN";
susan.ThnMasuk = 1999;
mhs wawan;
wawan.NIM = 142;
wawan.Nama = "WAWAN";
wawan.ThnMasuk = 2001;
mhs endi;
endi.NIM = 205;
endi.Nama = "ENDI";
endi.ThnMasuk = 2002;
mhs hanif;
hanif.NIM = 104;
hanif.Nama = "HANIF";
hanif.ThnMasuk = 1999;
mhs yudi;
yudi.NIM = 108;
yudi.Nama = "YUDI";
yudi.ThnMasuk = 1999;
if(nim == 110){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<budi.NIM<<"\t"<<budi.Nama<<"\t"<<budi.ThnMasuk<<endl;
}else if(nim == 107){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<susan.NIM<<"\t"<<susan.Nama<<"\t"<<susan.ThnMasuk<<endl;
}else if(nim == 142){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<wawan.NIM<<"\t"<<wawan.Nama<<"\t"<<wawan.ThnMasuk<<endl;
}else if(nim == 205){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<endi.NIM<<"\t"<<endi.Nama<<"\t"<<endi.ThnMasuk<<endl;
}else if(nim == 104){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<hanif.NIM<<"\t"<<hanif.Nama<<"\t"<<hanif.ThnMasuk<<endl;
}else if(nim == 108){
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<yudi.NIM<<"\t"<<yudi.Nama<<"\t"<<yudi.ThnMasuk<<endl;
}else{
cout<<endl<<" NIM yang anda masukkan tidak ada\n";
}
}

void UrutAscending(){

int i, j, k=6, tmp, b;
string a;
	for(i=0; i<k; i++){
		for(j=i+1; j<k; j++){
			if(m[i].NIM>m[j].NIM){
				tmp=m[i].NIM;a=m[i].Nama;b=m[i].ThnMasuk;
				m[i].NIM=m[j].NIM;m[i].Nama=m[j].Nama;m[i].ThnMasuk=m[j].ThnMasuk;
				m[j].NIM=tmp;m[j].Nama=a;m[j].ThnMasuk=b;
			}
		}
	}
	cout<<"\n Data setelah diurutkan secara Ascending berdasarkan NIM : "<<endl;
	cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
	for(i=0; i<k; i++){
		cout<<" "<<m[i].NIM<<"\t"<<m[i].Nama<<"\t"<<m[i].ThnMasuk<<endl;
		}
}

void UrutDescending(){


int i, j, k=6, tmp, b;
string a;
	for(i=0; i<k; i++){
		for(j=i+1; j<k; j++){
			if(m[i].NIM<m[j].NIM){
				tmp=m[i].NIM;a=m[i].Nama;b=m[i].ThnMasuk;
				m[i].NIM=m[j].NIM;m[i].Nama=m[j].Nama;m[i].ThnMasuk=m[j].ThnMasuk;
				m[j].NIM=tmp;m[j].Nama=a;m[j].ThnMasuk=b;
			}
		}
	}
	cout<<"\n Data setelah diurutkan secara Descending berdasarkan NIM : "<<endl;
	cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
	for(i=0; i<k; i++){
		cout<<" "<<m[i].NIM<<"\t"<<m[i].Nama<<"\t"<<m[i].ThnMasuk<<endl;
		}

}

void UbahNama(string nama, int nim, int cari){

if (cari == 110){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[0].NIM<<"\t"<<m[0].Nama<<"\t"<<m[0].ThnMasuk<<endl;
m[0].NIM = nim; m[0].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[0].NIM<<"\t"<<m[0].Nama<<"\t"<<m[0].ThnMasuk<<endl;
}else if(cari == 107){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[1].NIM<<"\t"<<m[1].Nama<<"\t"<<m[1].ThnMasuk<<endl;
m[1].NIM = nim; m[1].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[1].NIM<<"\t"<<m[1].Nama<<"\t"<<m[1].ThnMasuk<<endl;
}else if(cari == 142){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[2].NIM<<"\t"<<m[2].Nama<<"\t"<<m[2].ThnMasuk<<endl;
m[2].NIM = nim; m[2].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[2].NIM<<"\t"<<m[2].Nama<<"\t"<<m[2].ThnMasuk<<endl;
}else if(cari == 205){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[3].NIM<<"\t"<<m[3].Nama<<"\t"<<m[3].ThnMasuk<<endl;
m[3].NIM = nim; m[3].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[3].NIM<<"\t"<<m[3].Nama<<"\t"<<m[3].ThnMasuk<<endl;
}else if(cari == 104){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[4].NIM<<"\t"<<m[4].Nama<<"\t"<<m[4].ThnMasuk<<endl;
m[4].NIM = nim; m[4].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[4].NIM<<"\t"<<m[4].Nama<<"\t"<<m[4].ThnMasuk<<endl;
}else if(cari == 108){
cout<<" Data mahasiswa telah berhasil berganti, dari : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[5].NIM<<"\t"<<m[5].Nama<<"\t"<<m[5].ThnMasuk<<endl;
m[5].NIM = nim; m[5].Nama= nama;	
cout<<endl<<" Menjadi : \n";
cout<<endl<<" NIM\t"<<"Nama\t"<<"Tahun Masuk\n";
cout<<" "<<m[5].NIM<<"\t"<<m[5].Nama<<"\t"<<m[5].ThnMasuk<<endl;
}else{
cout<<" NIM yang kamu masukkan tidak ada di data mahasiswa kami, silahkan ulangi lagi !\n";
}
}





