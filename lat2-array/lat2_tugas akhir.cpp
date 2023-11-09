#include <iostream>
using namespace std;
int main(){
	int matriksA [3][2] = {{1,2}, {3,4}, {5,6}};
	int matriksB [3][2] = {{6,5}, {4,3}, {2,1}};
	int hasilPenjumlahan[3][2];
	
	//Melakukan Penjumlahan
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			hasilPenjumlahan[i][j] = matriksA[i][j] + matriksB[i][j];
		}
	}
	
	cout<<"Matriks A\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<matriksA[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nMatriks B\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<matriksB[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Menampilkan hasil perhitungan
	cout<<"\nHasil Penjumlahan\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<hasilPenjumlahan[i][j]<<" ";
		}
		cout<<endl;
	}
}
