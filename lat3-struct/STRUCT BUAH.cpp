#include<iostream> 
#include<string>

using namespace std;

//struct : data yang dibentuk oleh beberapa data
//contoh, jeruk merupakan buah yang mempunyai komponen-komponen seperti :
//harga jeruknya
//berat jeruknya
//warna jeruknya

struct buah {
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main() {
	
	buah apel; //artinya, si apel termasuk buah
	
	apel.warna="merah";
	apel.berat=250;
	apel.harga=50000;
	apel.rasa="manis kesat";
	
	cout<<"apel"<<endl;
	cout<<apel.warna<<endl;
	cout<<apel.berat<<endl;
	cout<<apel.harga<<endl;
	cout<<apel.rasa<<endl;
	
	buah jeruk; //artinya, si jeruk termasuk buah
	
	jeruk.warna="kuning";
	jeruk.berat=500;
	jeruk.harga=100000;
	jeruk.rasa="asem";
	
	cout<<"jeruk"<<endl;
	cout<<jeruk.warna<<endl;
	cout<<jeruk.berat<<endl;
	cout<<jeruk.harga<<endl;
	cout<<jeruk.rasa<<endl;
	
	//coba kalo gak pake struct bentukannya jadi kek apa :
	
	char nama1[7]="nabila", nama2[5]="nada", nama3[7]="zikri";
	int umur[3]={20, 24, 7};
	
	cout<<nama1<<endl;
	cout<<umur[0]<<endl;
	
	cout<<nama2<<endl;
	cout<<umur[1]<<endl;
	
	cout<<nama3<<endl;
	cout<<umur[2]<<endl;
	
	//ribet juga sih, karena satu variabel cuma bisa buat satu nilai.
	//kalo diliat disini, kayaknya struct jadi lebih terorganisir aja gitu. 
	//kita gak perlu ribet-ribet ngasih nilai di awal. 
	//struct ini berguna banget sih kalo untuk data yang banyak, apalagi datanya berupa inputan.
	//coba ya, kita pake yang bentuk inputan :
	
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








