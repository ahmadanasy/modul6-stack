#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string sentence) {
    stack<char> charStack;
    string word = "";

    cout << "Data : ";

    for (char c : sentence) {
        if (c == ' ') {
            // Reverse and print the word in the stack
            while (!charStack.empty()) {
                cout << charStack.top();
                charStack.pop();
            }
            cout << " "; // Add space after each word
        } else {
            charStack.push(c);
        }
    }

    // Process the last word after the loop
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;
}

int main() {
    string kalimat;
    cout << "Masukkan Kata: ";
    getline(cin, kalimat);
    reverseSentence(kalimat);
    return 0;
}