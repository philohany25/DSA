#include <iostream>
using namespace std;

int main(){
    string input;
    cout << "enter the first word: ";
    cin >> input;
    string reversed;
    cout << "enter the second word: ";
    cin >> reversed;
    int count = 0;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == reversed[reversed.length()-i - 1])
        {
            count++;
        }
        
    }
    if (count == input.length())
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
    
    }
    
}