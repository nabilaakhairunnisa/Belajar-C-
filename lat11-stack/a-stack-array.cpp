#include<iostream>
#include<conio.h>
#define MaxS 10
using namespace std;

struct Stack {
    char Isi[MaxS];
    unsigned int Top;
};

void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

int main() {
    char huruf;
    Stack S;
    INITS(S);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl << "Yang Dihapus: " << huruf;
    CETAK(S);

    cout << endl << endl;
	cout<< "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl << "Yang Dihapus: " << huruf;
    CETAK(S);

    getch();
    return 0;
}

void INITS(Stack &S) {
    S.Top = 0;
}

void PUSH(Stack &S, char Data) {
    if (S.Top < MaxS) {
        S.Top++;
        S.Isi[S.Top] = Data;
    } else {
        cout << "Stack penuh." << endl;
    }
}

void CETAK(Stack S) {
    int i;
    cout << endl << "Isi Stack: ";
    if (S.Top != 0) {
        for (i = 1; i <= S.Top; i++) {
            cout << S.Isi[i] << " ";
        }
    } else {
        cout << "Stack Kosong." << endl;
    }
}

void POP(Stack &S, char &Hsl) {
    if (S.Top != 0) {
        Hsl = S.Isi[S.Top];
        S.Top--;
    } else {
        cout << "Stack Kosong." << endl;
    }
}

