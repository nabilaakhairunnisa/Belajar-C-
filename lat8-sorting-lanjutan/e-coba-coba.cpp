#include<iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
    cout<<data[i]<<" ";
}

MaxSortAsc (int Nilai[], int N){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"        1. Maximum Sort Ascending         \n";
	cout<<"==========================================\n";
    int i, j, U, l, Imaks, temp;
    //cetak
    cout << "Data sebelum diurut : ";
    Cetak(Nilai, N);
	 //Proses Pengurutan
	 U=N-1 ;
	 for (i=0 ; i<=N-2; i++){
		 Imaks =0;
		 for(j=1; j<=U; j++){
			 if( Nilai [ j ] > Nilai [ Imaks] )
			 Imaks = j;
		 }
		 temp =Nilai [ U ];
		 Nilai [ U ] = Nilai [ Imaks];
		 Nilai [ Imaks ]= temp;
		 U--;
		 cout<<endl;
		 for(l=0; l<N; l++)
		 	cout<<setw ( 3 )<<Nilai [ l ];
	 }
	 //cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

MaxSortDesc(int Nilai[], int N){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"       2. Maximum Sort Descending         \n";
	cout<<"==========================================\n";
    int i, j, U, l, Imaks, temp;
     //Cetak
	 cout << "Data sebelum diurut : ";
     Cetak(Nilai, N);
	 //Proses pengurutan
	 U=N-1;
	 for(i=0; i<=N-2; i++){
		 Imaks = i;
		 for(j=i+1; j<=U; j++){
			 if(Nilai[ j ] > Nilai [Imaks])
			 Imaks = j;
		 }
		 temp = Nilai [ i ];
		 Nilai [ i ] = Nilai [ Imaks ];
		 Nilai [Imaks] = temp;
		 cout<<endl;
		 for(l=0; l<N; l++)
		 	cout<<setw(3)<<Nilai [l];
		 cout<<endl;
	 }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

MinSortAsc (int Nilai[], int N){	
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"       3. Minimum Sort Ascending          \n";
	cout<<"==========================================\n";
    int i, j, U, l, Imin, temp;
     //Cetak
	 cout << "Data sebelum diurut : ";
     Cetak(Nilai, N);
	 //Proses pengurutan
	 for (i=0;i<=N-2; i++){
		 Imin = i;
		 for(j=i+1; j<N; j++){
			 if(Nilai [j] < Nilai [Imin])
			 Imin = j;
		 }
		 temp = Nilai [i];
		 Nilai [i] = Nilai [Imin];
		 Nilai [Imin] = temp;
		 cout<<endl;
		 for(l=0; l<N; l++)
		 	cout<<setw(3)<<Nilai [l];
	 }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

MinSortDesc (int Nilai[], int N){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"       4. Minimum Sort Descending         \n";
	cout<<"==========================================\n";
    int i, j, U, l, Imin, temp;
     //Cetak
	 cout << "Data sebelum diurut : ";
     Cetak(Nilai, N);
	 //Proses Pengurutan
	 U = N - 1;
	 for(i=0; i<=N-2; i++){
		 Imin = 0;
		 for (j=1; j<=U; j++)
		 {
		 if(Nilai [ j ] <Nilai [Imin])
		 Imin = j;
		 }
		 temp = Nilai [ U ];
		 Nilai [ U ]= Nilai [ Imin ];
		 Nilai [ Imin ] = temp;
		 cout<<endl;
		 U--;
		 for(l=0; l<N; l++)
		 cout<<setw ( 3 )<<Nilai [ l ];
	 }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

int main(){
	int Nilai[20], N;
	cout<<"==========================================\n";
	cout<<"      Sorting Maximum dan Minimum Sort    \n";	
	cout<<"==========================================\n";
	cout<<"Silahkan Masukkan Banyak Bilangan: "; 
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }
    
	int pil;
	do{
		cout<<endl;
		cout<<"==========================================\n";
		cout<<"        Silahkan Pilih Salah Satu         \n";	
		cout<<"==========================================\n";
		cout<<" 1. Maximum Sort Ascednding            \n";
		cout<<" 2. Maximum Sort Descending            \n";
		cout<<" 3. Maximum Sort Ascednding            \n";
		cout<<" 4. Maximum Sort Descending            \n";
		cout<<" 5. Keluar                             \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		
		if (pil==1){
			MaxSortAsc(Nilai, N);
		} else if (pil==2){
			MaxSortDesc(Nilai, N);
		} else if (pil==3){
			MinSortAsc (Nilai, N);
		} else if (pil==4){
			MinSortDesc (Nilai, N);
		} else if (pil==5){
			cout<<"\n Terima Kasih!";
		} else {
			cout<<"\n Pilihan salah\n";
		}
	} while(pil!=5);
}
