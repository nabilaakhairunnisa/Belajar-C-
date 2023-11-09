#include<iostream>
#include<conio.h>
//Library Stack Array
#define MaxS 10
//Library Reverse Stack
#include <stack>
#include <string>
//Library Single Stack
#include<stdlib.h>
#define true1
#define false 0

using namespace std;

//Structure Array Stack
struct Stack {
    char Isi[MaxS];
    unsigned int Top;
};

//Structure Single Stack
typedef struct node *simpul;
struct node
 {
	 char Isi;
	 simpul next ;
 };

//Prototype Function Array Stack
void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);
void ArrayStack();

//Prototype Function Reverse Stack
void ReverseStack();
string reverseSentence(string sentence);

//Prototype Function Single Stack
void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Belakang (simpul &L);
void Cetak (simpul L);
void SingleStack();

int main(){
	char ulang;
	int pil;
	do {
		cout<<"==========================================\n";
		cout<<"       PILIH MENU OPERASI PADA STACK      \n";	
		cout<<"==========================================\n";
		cout<<" 1. Stack dengan Array                    \n";
		cout<<" 2. Reverse Karakter dengan Stack         \n";
		cout<<" 3. Single Linked List pada Stack         \n";
		cout<<" 4. Keluar     						     \n";
		cout<<" Masukkan pilihan: "; cin>>pil;
		if (pil == 1){
			ArrayStack();
		} else if (pil == 2){
			ReverseStack();
		} else if (pil == 3){
			SingleStack();
		} else if (pil == 4){
			cout<<"Terima Kasih";
			break;
		} else {
			cout<<"Pilihan yang anda masukkan salah\n";
			cout<<"Pilih ulang? (y/n): "; cin>>ulang;
		}
	} while (ulang != 'n');
}

void ArrayStack() {
    char huruf;
    int i;
    Stack S;
    cout<<"==========================================\n";
	cout<<"            1. ARRAY STACK                \n";	
	cout<<"==========================================\n";
	
	INITS(S);
	cout<<"~Penyisipan Elemen pada Stack (PUSH)\n";
	for (i=1;i<=3;i++) {
		cout<<"Masukan Karakter : "; cin>>huruf;
		PUSH(S, huruf);
	} CETAK (S);

	cout<<"\n~Penghapusan Elemen pada Stack (POP)\n";
    POP(S, huruf);
    cout<<"Yang Dihapus: "<<huruf<<endl;
    CETAK(S);

	cout<<"\n~Penyisipan Elemen pada Stack (PUSH)\n";
	for (i=1;i<=3;i++) {
		cout<<"Masukan Karakter : "; cin>>huruf;
		PUSH(S, huruf);
	} CETAK (S);

	cout<<"\n~Penghapusan Elemen pada Stack (POP)\n";
    POP(S, huruf);
    cout<<"Yang Dihapus: "<<huruf<<endl;
    CETAK(S);
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
    cout << "Isi Stack: ";
    if (S.Top != 0) {
        for (i = 1; i <= S.Top; i++) {
            cout << S.Isi[i] << " ";
        }
    } else {
        cout << "Stack Kosong." << endl;
    } cout<<endl;
}

void POP(Stack &S, char &Hsl) {
    if (S.Top != 0) {
        Hsl = S.Isi[S.Top];
        S.Top--;
    } else {
        cout << "Stack Kosong." << endl;
    }
}

void ReverseStack() {
	cout << "==========================================\n";
    cout << "           2. REVERSE STACK               \n";
    cout << "==========================================\n";
    // Menghapus karakter newline (\n) yang tersisa di buffer
    cin.ignore(); 
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);
    string reversed = reverseSentence(sentence);
    cout << "Kalimat terbalik: " << reversed << endl;
}

string reverseSentence(string sentence) {
    stack<char> charStack;
    string reversedSentence;
    for (size_t i = 0; i < sentence.length(); i++) {
        charStack.push(sentence[i]);
    }
    while (!charStack.empty()) {
        reversedSentence += charStack.top();
        charStack.pop();
    }
    return reversedSentence;
}

void SingleStack ()
{
	 char huruf;
	 int i;
	 simpul L = NULL; //Pastikan bahwa L kosong
	 cout<<"==========================================\n";
	 cout<<"           3. SINGLE STACK                \n";	
	 cout<<"==========================================\n";
	
	 cout<<"~Sisip Belakang Stack\n";
	 for (i=1;i<=6;i++) {
		 cout<<"Masukan Huruf : "; cin>>huruf;
		 Sisip_Belakang (L, huruf );
	 } Cetak (L);
	
	 cout<<"~Hapus Simpul Belakang Stack\n";
	 for (i=1;i<=4;i++) {
		 cout<<"Masukan Huruf  : "; cin>>huruf;
		 Hapus_Belakang (L);
		 Cetak (L);
	 }
}

void Sisip_Belakang (simpul & L, char elemen)
{
	 simpul bantu, baru;
	 baru= (simpul) malloc(sizeof(simpul));
	 baru->Isi = elemen; 
	 baru->next = NULL;
	 if(L == NULL)
	 	L=baru;
	 else {
		 bantu=L;
		 while(bantu->next != NULL)
		 bantu=bantu->next;
		 bantu->next=baru;
	}
}

void Hapus_Belakang (simpul & L)
{
	 simpul bantu, hapus;
	 if(L == NULL)
	 	cout<<"Linked List Kosong...........";
	 else {
	 	bantu=L;
		while(bantu->next->next != NULL)
		bantu=bantu->next;
		hapus = bantu ->next;
		bantu->next = NULL;
		free(hapus);
	 }
}

void Cetak(simpul L)
{
	 simpul bantu;
	 if (L==NULL)
	 	cout<<"Linked List Kosong....\n";
	 else {
		 bantu=L;
		 cout<<"Isi Linked List: ";
		 while (bantu->next != NULL) {
			 cout<<bantu->Isi <<" -> ";
			 bantu=bantu->next;
		 } cout<<bantu->Isi;
	 } cout<<endl;
} 
