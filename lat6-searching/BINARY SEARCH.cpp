#include <iostream>
using namespace std;

int main(){
	int n, angka[12], kiri, kanan, tengah, temp, key;
	bool ketemu = false;
	
	cout<<"Nama \t: Nabila Khairunnisa"<<endl;
	cout<<"NIM \t: 211011400012"<<endl<<endl;
	cout<<"*********** Program Binary Search **************"<<endl;
	cout<<"Masukan Jumlah Data: ";
	cin>>n;
	
	for(int i=0; i-n; i++){
		cout<<"Angka ke-["<<i<<"] :";
		cin>>angka[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(angka[j] > angka[j+1]){
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	
	cout<<"Data yang telah diurutkan adalah: ";
	for(int i=0; i<n; i++){
		cout<<angka[i]<<" ";
	}
	
	cout<<"\nMasukan angka yang dicari: ";
	cin>>key;
	
	kiri = 0;
	kanan = n-1;
	
	while(kiri <= kanan){
		tengah = (kiri+kanan)/2;
		if(key == angka[tengah]){
			ketemu = true;
			break;
		}
		else if(key < angka[tengah]){
			kanan = tengah-1;
		} else{
			kiri= tengah+1;
		}
	}
	
	if(ketemu == true){
		cout<<"Angka ditemukan!";
	} else{
		cout<<"Angka tidak ditemukan!";
		return 0;
	}
}
