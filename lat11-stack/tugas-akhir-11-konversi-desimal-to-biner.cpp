#include <iostream>
#include <stack>
using namespace std;

void DecimalToBinary(int decimal) {
    stack<int> binaryStack;

    // Konversi bilangan desimal menjadi biner
    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryStack.push(remainder);
        decimal /= 2;
    }

    // Menampilkan hasil konversi
    cout << "Bilangan biner: ";
    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
}

int main() {
    int decimal;
    cout << "Masukkan bilangan desimal: ";
    cin >> decimal;

    DecimalToBinary(decimal);

    return 0;
}

