#include <iostream>
#include <stack>
#include <string>

using namespace std;

//Mendefinisikan fungsi reverseSentence yang menerima sebuah string dan mengembalikan string terbalik.
string reverseSentence(string sentence) { 
	//Membuat objek stack dengan tipe char untuk menyimpan karakter-karakter.
    stack<char> charStack; 
    //Mendefinisikan variabel reversedSentence yang akan menyimpan hasil kalimat terbalik.
    string reversedSentence; 

    // Memasukkan setiap karakter ke dalam stack
    for (size_t i = 0; i < sentence.length(); i++) {
        charStack.push(sentence[i]);
    }

    // Mengambil karakter dari stack dan membangun kalimat terbalik
    while (!charStack.empty()) {
    	//karakter teratas stack diambil menggunakan top()
        reversedSentence += charStack.top();
		//kemudian stack tersebut di-pop menggunakan pop(). 
        charStack.pop(); 
    }

    return reversedSentence;
}

int main() {
	// Mendeklarasikan variabel sentence untuk menyimpan input kalimat dari pengguna.
    string sentence; 
    cout << "Masukkan kalimat: ";
    getline(cin, sentence); 
	
	//Memanggil fungsi reverseSentence() dengan parameter sentence untuk mendapatkan kalimat terbalik
	//kalimat terbalik disimpan di variabel reversed.
    string reversed = reverseSentence(sentence); 
	//Menampilkan kalimat terbalik ke layar.
    cout << "Kalimat terbalik: " << reversed << endl; 
	//Mengembalikan nilai 0, menandakan bahwa program selesai berjalan tanpa masalah.
    return 0; 
}

