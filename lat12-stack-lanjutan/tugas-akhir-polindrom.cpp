#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& sentence) {
    std::string lowercaseSentence = sentence;
    std::transform(lowercaseSentence.begin(), 
	lowercaseSentence.end(), 
	lowercaseSentence.begin(), ::tolower);
    std::string reversedSentence = lowercaseSentence;
    std::reverse(reversedSentence.begin(), reversedSentence.end());
    return lowercaseSentence == reversedSentence;
}

int main() {
    std::string sentence;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, sentence);

    if (isPalindrome(sentence)) {
        std::cout << "Kalimat tersebut adalah palindrom." << std::endl;
    } else {
        std::cout << "Kalimat tersebut bukan palindrom." << std::endl;
    }
    return 0;
}


