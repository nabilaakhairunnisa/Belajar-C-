#include<iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

MaxSortAsc (){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"          Maximum Sort Ascending         \n";
	cout<<"==========================================\n";
	 int Nilai [ 20 ];
	 int i, j , N, l ;
	 int temp, U, Imaks;
	 cout<<"Masukan Banyaknya Bilangan : ";
	 cin>>N; 
	 //Proses input data
	 for(i=0; i<N; i++)
	 {
		 cout<<"Elemen ke-"<<i<<" : ";
		 cin>>Nilai [ i ];
	 }
	 //Proses Cetak sebelum diurutkan
	 cout<<"Data sebelum diurut :";
	 for(i=0; i<N; i++)
	 cout<<setw ( 3 )<<Nilai [ i ];
	 //Peroses Pengurutan
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
	 cout<<"\nData Setelah di urut : ";
	 for(i=0; i<N; i++)
	 	cout<<setw (3 )<<Nilai [ i ];
	 cout<<endl;
}

MaxSortDesc(){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"          Maximum Sort Descending         \n";
	cout<<"==========================================\n";
	 int Nilai [ 20 ];
	 int i, j, N, l;
	 int temp, U, Imaks;
	 cout<<"Masukan Banyaknya Bilangan : ";
	 cin>>N;
	 for(i=0; i<N; i++){
	 cout<<"Elemen ke -"<<i<<" : ";
	 cin>>Nilai [ i ];
	 }
	 //Peroses Cetak Sebelum diut=rutkan
	 cout<<"Data Sebelum diurut :";
	 for (i=0; i<N; i++)
	 cout<<setw (3)<< Nilai [ i ] ;
	 //Peroses pengurutan
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
	 cout<<"\nData Setelah di urut : " ;
	 for(i=0; i<N; i++)
	 	cout<<setw(3)<<Nilai [i];
	 cout<<endl;
}

MinSortAsc (){	
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"          Minimum Sort Ascending          \n";
	cout<<"==========================================\n";
	 int Nilai [ 20 ];
	 int i, j, N, l;
	 int temp, Imin;
	 cout<<"Masukan Banyak bilangan : ";
	 cin>>N;
	 for (i=0; i<N; i++ ){
		 cout<<"Elemen ke-"<<i<<" : ";
		 cin>>Nilai [ i ] ;
	 }
	 //Proses Cetak Sebelum Diurutkan
	 cout<<"Data sebelum diurut :";
	 for(i=0; i<N; i++)
	 cout<<setw (3)<<Nilai [ i ];
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
	 cout<<"\nData Setelah di urut : ";
	 for(i=0; i<N; i++)
	 	cout<<setw(3)<<Nilai [i];
	 cout<<endl;
}

MinSortDesc (){
	cout<<endl;
	cout<<"==========================================\n";
	cout<<"          Minimum Sort Descending         \n";
	cout<<"==========================================\n";
	 int Nilai [20];
	 int i, j, N, l;
	 int temp,U, Imin;
	 cout<<"Masukan Banyak Bilangan : ";
	 cin>>N;
	 for (i=0; i<N; i++){
		 cout<<"Elemen ke-"<<i<<" : ";
		 cin>>Nilai [ i ];
	 }
	 //Proses Cetak Sebelum diurutkan
	 cout<<"Data sebelum diurut : ";
	 for (i=0; i<N; i++)
	 cout<<setw ( 3 )<<Nilai [ i ];
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
	 cout<<"\nData Setelah di urut : ";
	 for(i=0; i<N; i++)
	 	cout<<setw ( 3 )<<Nilai [ i ];
	 cout<<endl;
}

int main(){
	int pil;
	do{
		cout<<endl;
		cout<<"==========================================\n";
		cout<<"   Menu Sorting Maximum dan Minimum Sort  \n";	
		cout<<"==========================================\n";
		cout<<" 1. Maximum Sort Ascednding            \n";
		cout<<" 2. Maximum Sort Descending            \n";
		cout<<" 3. Maximum Sort Ascednding            \n";
		cout<<" 4. Maximum Sort Descending            \n";
		cout<<" 5. Keluar                             \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		
		if (pil==1){
			MaxSortAsc ();
		} else if (pil==2){
			MaxSortDesc();
		} else if (pil==3){
			MinSortAsc ();
		} else if (pil==4){
			MinSortDesc ();
		} else if (pil==5){
			cout<<"\n Terima Kasih!";
		} else {
			cout<<"\n Pilihan salah\n";
		}
	} while(pil!=5);
}
