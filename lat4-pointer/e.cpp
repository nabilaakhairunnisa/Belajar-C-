#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    float avg;
    int i = 0;
    int *ptr = arr;

    while (i < 5) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> *(ptr+i);
        sum += *(ptr+i);
        i++;
    }

    avg = (float)sum/5;

    cout << "Nilai rata-rata adalah: " << avg << endl;

    return 0;
}

