#include <iostream>
using namespace std;

void inputData (int *sisi){
	cout<<"Masukkan panjang sisi: "; cin>>*sisi;
}

void kelilingPersegi (int *sisi){
	int luas = *sisi * 4;
	cout<<"Keliling persegi dengan panjang sisi "<<*sisi<<" adalah "<<luas;
}

int main() {
	cout<<"Menghitung Keliling Persegi \n";
	int sisi;
	inputData(&sisi);
	kelilingPersegi(&sisi);
}


