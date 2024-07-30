#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter your sentence: ";
    getline(cin, str);
    
    string maxWord = "";
    string currentWord;
    stringstream ss(str);

    while (ss >> currentWord) {
        if (currentWord > maxWord) {
            maxWord = currentWord;
        }
    }

    cout << "Lexicographically maximum word: " << maxWord << endl;
    return 0;
}
