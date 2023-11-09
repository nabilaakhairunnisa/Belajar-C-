#include<iostream> 
#include<string>

using namespace std;

struct buah{
	char warna[40]; //tjakeppp kalo pake tipe data char harus pake array. kalo gak mau pake array bisa langsung pake string.
	float berat;
	int harga;
	string rasa;
};

int main(){
	
	buah anggur;
	
	cout<<"Masukkan warna anggur: "; cin>>anggur.warna;
	cout<<"Masukkan berat anggur: "; cin>>anggur.berat;
	cout<<"Masukkan harga anggur: "; cin>>anggur.harga;
	cout<<"Masukkan rasa anggur: "; cin>>anggur.rasa;	
	
	cout<<"Warna anggur: "<<anggur.warna<<endl;	
	cout<<"berat anggur: "<<anggur.berat<<endl;
	cout<<"harga anggur: "<<anggur.harga<<endl;	
	cout<<"rasa anggur: "<<anggur.rasa<<endl;			
}

	
	
