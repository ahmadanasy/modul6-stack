#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    stack<char> charStack;
    string cleanedStr;

    // Menghapus spasi dan tanda baca dari kalimat, serta mengubah ke huruf kecil
    for (char c : str) {
        if (isalnum(c)) {
            cleanedStr += tolower(c);
        }
    }

    // Memasukkan setiap karakter ke dalam stack
    for (char c : cleanedStr) {
        charStack.push(c);
    }

    // Membandingkan karakter pada stack dengan karakter asli dari belakang
    for (char c : cleanedStr) {
        if (c != charStack.top()) {
            return false; // Tidak palindrom
        }
        charStack.pop();
    }

    return true; // Palindrom
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut merupakan palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}