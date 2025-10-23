#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "enter the word: ";
    cin >> word;

    word[0] = toupper(word[0]);
    

    cout << "capitalized word: " << word << endl;

    return 0;
}