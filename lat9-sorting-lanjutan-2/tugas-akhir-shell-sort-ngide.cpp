#include<iostream>
#include<iomanip>
using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
    cout<<data[i]<<" ";
}



int main() {

	//deklarasi nilai
	int N, i, j, jarak, s, k, l;
	string temp;
	string Nilai[N] = { "suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang" };
	//cetak
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
    //proses pengurutan
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
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
    return 0;
}

