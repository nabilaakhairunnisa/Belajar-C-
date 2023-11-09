#include<iostream>
using namespace std;

struct BiodataPegawai{
	string NIP;
	string Nama;
	string Alamat;
	string Agama;
	string Jabatan;
};
	
int main(){
	
	int N;
	cout<<"Masukan jumlah data pegawai: "; cin>>N;
	string cari;
	BiodataPegawai bio [N];
	
	for (int i=0; i<N; i++){
		cout<<"\nData pegawai ke-"<<(i+1)<<endl;
		cout<<"Masukan NIP pegawai     : "; cin>>bio[i].NIP;
		cout<<"Masukan Nama pegawai    : "; cin>>bio[i].Nama;
		cout<<"Masukan Alamat pegawai  : "; cin>>bio[i].Alamat;
		cout<<"Masukan Agama pegawai   : "; cin>>bio[i].Agama;
		cout<<"Masukan Jabatan pegawai : "; cin>>bio[i].Jabatan;
		cout<<endl;
	}
	
	cout<<"Masukan nama pegawai yang ingin dicari: "; cin>>cari;

	for(int i=0; i<N; i++){
		if(bio[i].Nama == cari){
			cout<<"\nData Pegawai"<<endl;
			cout<<"NIP     : "<<bio[i].NIP<<endl;
			cout<<"Nama    : "<<bio[i].Nama<<endl;
			cout<<"Alamat  : "<<bio[i].Alamat<<endl;
			cout<<"Agama   : "<<bio[i].Agama<<endl;
			cout<<"Jabatan : "<<bio[i].Jabatan<<endl;
		}
	}
}
