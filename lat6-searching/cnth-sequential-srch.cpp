#include <iostream>
using namespace std;

int seqSearch(int arr[], int n, int x) {
   int i;
   for (i = 0; i < n; i++)
      if (arr[i] == x)
         return i;
   return -1;
}

int main() {
   int n, x, pos;
   cout<<"Masukkan jumlah elemen dalam array: ";
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
   		cout << "Masukkan elemen array ke-"<<i<<" : ";
   		cin >> arr[i];
   }

   cout << "Masukkan nilai yang ingin dicari: ";
   cin >> x;

   pos = seqSearch(arr, n, x);
   if(pos == -1)
      cout << "Nilai tidak ditemukan dalam array";
   else
      cout << "Nilai ditemukan pada indeks ke-" << pos;

   return 0;
}


