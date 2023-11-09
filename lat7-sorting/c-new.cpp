#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
        cout << setw(3) << data[i];
    cout << "\n";
}

int Partisi(int data[], int p, int r) {
    int x = data[p];
    int i = p;
    int j = r;
    while (true) {
        while (data[j] > x)
            j--;
        while (data[i] < x)
            i++;
        if (i < j) {
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        } else {
            return j;
        }
    }
}

void Quick_Sort(int data[], int p, int r) {
    if (p < r) {
        int q = Partisi(data, p, r - 1);
        Quick_Sort(data, p, q);
        Quick_Sort(data, q + 1, r);
    }
}

int main() {
    int Nilai[20];
    int N;
    cout << "Masukan Banyak Bilangan : ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData Sebelum di urut : ";
    Cetak(Nilai, N);
    cout << endl;

    Quick_Sort(Nilai, 0, N);

    cout << "\nData Setelah di urut : ";
    Cetak(Nilai, N);
    getch();
}

