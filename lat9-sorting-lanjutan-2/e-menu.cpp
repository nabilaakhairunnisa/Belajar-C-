#include<iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
    cout<<data[i]<<" ";
}

ShellSortAsc (int Nilai[], int N){
	cout<<"==========================================\n";
	cout<<"         1. Shell Sort Ascending          \n";
	cout<<"==========================================\n";
    int i, k, l, temp, jarak, s;
    //cetak
    cout << "Data sebelum diurut : ";
    Cetak(Nilai, N);
	 //Proses Pengurutan
	jarak = N / 2;
    cout << "\nJarak= " << jarak;
    while (jarak >= 1) {
        do {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++) {
                k = i + jarak;
                if (Nilai[i] > Nilai[k]) {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];
                    cout << "\n\t";
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak= " << jarak;
    }
	 //cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

ShellSortDesc(int Nilai[], int N){
	cout<<"==========================================\n";
	cout<<"         2. Shell Sort Descending         \n";
	cout<<"==========================================\n";
    int i, k, l, temp, jarak, s;
     //Cetak
	 cout << "Data sebelum diurut : ";
     Cetak(Nilai, N);
	 //Proses pengurutan
    jarak = N / 2;
    cout << "\nJarak= " << jarak;
    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (Nilai[i] < Nilai[k])
                {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];
                    cout << "\n\t";
                    getch();
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak= " << jarak;
    }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

InsertionSortAsc (int Nilai[], int N){	
	cout<<"==========================================\n";
	cout<<"        3. Insertion Sort Ascending       \n";
	cout<<"==========================================\n";
    int i, j, k, l, temp, jarak, s;
     //Cetak
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        j = i - 1;

        while ((temp <= Nilai[j]) && (j >= 1))
        {
            Nilai[j + 1] = Nilai[j];
            j--;
        }

        if (temp >= Nilai[j])
            Nilai[j + 1] = temp;
        else
        {
            Nilai[j + 1] = Nilai[j];
            Nilai[j] = temp;
        }

        cout << endl;
        for (k = 0; k < N; k++)
            cout << setw(3) << Nilai[k];
    }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

InsertionSortDesc (int Nilai[], int N){
	cout<<"==========================================\n";
	cout<<"       4. Insertion Sort Descending       \n";
	cout<<"==========================================\n";
    int i, j, k, l, temp, jarak, s;
     //Cetak
	 cout << "Data sebelum diurut : ";
     Cetak(Nilai, N);
	 //Proses Pengurutan
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        j = i - 1;

        while ((temp > Nilai[j]) && (j >= 1))
        {
            Nilai[j + 1] = Nilai[j];
            j--;
        }

        if (temp <= Nilai[j])
            Nilai[j + 1] = temp;
        else
        {
            Nilai[j + 1] = Nilai[j];
            Nilai[j] = temp;
        }

        cout << endl;
        for (k = 0; k < N; k++)
            cout << setw(3) << Nilai[k];
    }
	 //Cetak
	 cout<<"\nData Setelah di urut : ";
     Cetak(Nilai, N);
}

int main(){
	int Nilai[20], N;
	cout<<"==========================================\n";
	cout<<"      Shell Sort dan Insertion Sort       \n";	
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
		cout<<" 1. Shell Sort Ascednding                 \n";
		cout<<" 2. Shell Sort Descending                 \n";
		cout<<" 3. Insertion Sort Ascending              \n";
		cout<<" 4. Insertion Sort Descending             \n";
		cout<<" 5. Keluar                                \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		
		switch(pil){
			case 1:
			ShellSortAsc(Nilai, N);
			break;
			
			case 2:
			ShellSortDesc(Nilai, N);
			break;
			
			case 3:
			InsertionSortAsc (Nilai, N);
			break;
			
			case 4:
			InsertionSortDesc (Nilai, N);
			break;
		}
	} while(pil!=5);
}
