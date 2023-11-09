#include <iostream>
#include <string>
using namespace std;

void Cetak(string arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(string arr[], int n) {
    int i, j;
    string key;
  
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
  
        arr[j + 1] = key;
    }
}

void shellSort(string arr[], int n) {
    int gap, i, j;
    string temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    string arr[] = { "suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang" };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Data sebelum diurutkan: ";
    Cetak(arr, n);

    shellSort(arr, n);
    cout << "Data setelah diurutkan (Shell Sort): ";
    Cetak(arr, n);

    insertionSort(arr, n);
    cout << "Data setelah diurutkan (Insertion Sort): ";
    Cetak(arr, n);

    return 0;
}

