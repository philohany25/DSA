#include <iostream>
using namespace std;

int main(){
    string word;
    cout<<"Enter a word: ";
    cin >> word;
    int uppercasecount = 0;
    int lowercasecount = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            uppercasecount++;
        }
        else if (islower(word[i]))
        {
            lowercasecount++;
        }
        
    }
    if (uppercasecount > lowercasecount)
    {
        for (int i = 0; i < word.length(); i++) {
            word[i] = toupper(word[i]);
    }
    }
    else if (uppercasecount < lowercasecount)
    {
        for (int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }    
    }
    else
    {
        for (int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }    
    }
    
    cout << word << endl;
    
}