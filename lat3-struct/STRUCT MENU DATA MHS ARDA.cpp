#include<iostream>
/*BY :
	MUHAMMAD 'ARDA RIZQY FAUZAN
	211011402136
*/

using namespace std;
int i;
struct mhs{
	int nim;
	char *nama;
	short thnMasuk;
};

mhs data[6] ={{110, "Budi", 2000}, {107, "Susan", 1999},{142, "Wawan", 2001},
			  {205, "Endi", 2002}, {104, "Hanif", 1999}, {108, "Yudi", 1999}};

void tampilSemuaData(){
	for(i=1; i<=6; i++){
		cout<<"Data "<<i<<endl<<"NIM : "<<data[i].nim<<endl<<"Nama : "<<data[i].nama<<endl<<"Tahun Masuk : "<<data[i].thnMasuk<<endl;
		cout<<endl;
	}
}

void mencari(){
	int n;
	
	cout<<"Masukkan NIM : ";
	cin>>n;
	for(i=1; i<=6; i++){
		if(n == data[i].nim){
			cout<<"NIM : "<<data[i].nim<<endl<<"Nama : "<<data[i].nama<<endl<<"Tahun Masuk : "<<data[i].thnMasuk<<endl;
			cout<<endl;
		}
	}
}

void urutAscending(){
	int x;
	
	for(i=1; i<=6; i++){
		if(data[i].nim > data[i+1].nim){
			x = data[i].nim;
			data[i+1].nim = x;
			data[i].nim = data[i+1].nim;
		}
	}
	tampilSemuaData();
}

void urutDescending(){
	int x;
	
	for(i=1; i<=6; i++){
		if(data[i].nim < data[i+1].nim){
			x = data[i].nim;
			data[i+1].nim = x;
			data[i].nim = data[i+1].nim;
		}
	}
	tampilSemuaData();
}

void ubahNama(){
	
}

main(){
	int pil;
	char ulang;
	
	do{
		cout<<endl;
		cout<<"Pilih Salah Satu\n";
		cout<<"1. Tampilkan Semua Data\n2. Mencari\n3. Urut Ascending\n4. Urut Descending\n5. Ubah Nama\n6. Berhenti\n";
		cout<<"Masukkan Pilihan : ";
		cin>>pil;
		cout<<endl;
			switch(pil){
				case 1 :
					tampilSemuaData();
					break;
				case 2 :
					mencari();
					break;
				case 3 :
					urutAscending();
					break;
				case 4 :
					urutDescending();
					break;
				case 5 :
					ubahNama();
					break;
				case 6 :
					break;
				default :
					cout<<"Maaf Pilihan Anda Tidak Ada\n"; 
			}
			if(pil == 6)
				break;
			cout<<endl;
			cout<<"Apakah Anda Ingin Melanjutkan ?[y/t]";
			cin>>ulang;
	} while(ulang == 'y');
	
}
