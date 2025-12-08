#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the lucky number: ";
    cin >> n;
    string num = to_string(n);
    int count = 0;
    cout << "DEBUG: num = " << num << endl;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '4' || num[i] == '7')
    {
        count++;
    }
    }

    if (count == num.length())
    {
        cout<< "LUCKY NUMBER" << endl;
    }
    else
    {
        cout<< "NOT A LUCKY NUMBER" << endl;
    
    }

    return 0;
}