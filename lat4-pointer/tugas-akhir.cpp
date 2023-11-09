#include <iostream>
using namespace std;

int main()
{
    // deklarasi array dua dimensi
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // deklarasi pointer untuk menyimpan alamat array
    int (*ptr)[3];

    // inisialisasi pointer dengan alamat array
    ptr = arr;

    // cetak nilai array menggunakan pointer dan perulangan while
    int i = 0, j = 0;
    while (i < 2)
    {
        while (j < 3)
        {
            cout << *(*ptr + j) << " ";
            j++;
        }
        cout << endl;
        i++;
        j = 0;
        ptr++;
    }

    return 0;
}


