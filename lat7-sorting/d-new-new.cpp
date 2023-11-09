#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
        cout << setw(3) << data[i];
}

void InputData(int Nilai[], int &N){
    cout << "Masukan Banyak Bilangan : ";
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }
}

void BubbleSortMenaik(){
    int Nilai[20], i=0, j, k, N, temp;
    bool tukar = true;
     
    cout << "\n~Bubble Sort Menaik~\n";
    InputData(Nilai, N);
    cout << "Data sebelum diurut : ";
    Cetak(Nilai, N);
     
    //Proses Pengurutan
    while ((i <= N-2) && (tukar)){
        tukar = false;
        for (j = N-1; j >= i+1; j--){
            if (Nilai[j] < Nilai[j-1]){
                temp = Nilai[j];
                Nilai[j] = Nilai[j-1];
                Nilai[j-1] = temp;
                tukar = true;
                cout << "\nUntuk j = " << j << " : ";
                Cetak(Nilai, N);
            }
        }
        i++;
    }
 
    cout << "\nData setelah di urut : ";
    Cetak(Nilai, N);
    cout << "\n\n";
}

int main(){
    BubbleSortMenaik();
}

