#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/71/A

int main() {
    int n;
    cout << "enter the number of words: ";
    cin>> n;
    string words[n];

    for(int i=0; i<n; i++) {
        string word;
        cout << "enter the word: ";
        cin >> word;
        words[i] = word;
    }
    for (int i = 0; i < n; i++) {
        string word = words[i];
        char firstLetter = word[0];
        char lastLetter = word[word.length() - 1];
        int inBetween = word.length() - 2;
        cout<< firstLetter << inBetween << lastLetter << endl;
        

    }
    

}
