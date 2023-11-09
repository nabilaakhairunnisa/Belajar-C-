#include <iostream>
using namespace std;

void increment(int *p) {
    (*p)++;
}

int main() {
    int x = 5;
    increment(&x);
    cout << "Nilai x setelah di-increment: " << x << endl;
    return 0;
}


