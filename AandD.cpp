#include <iostream>
using namespace std;
#include <cctype>


int main(){
    int games;
    string result;
    cout<< "enter number of games: ";
    cin>>games;
    cout<< "enter results string: ";
    cin>>result;
    int a_wins = 0;
    int d_wins = 0;

    while (result.length() != games)
    {
        cout<< "error: length of results string does not match number of games" << endl;
        cout<< "enter results string: ";
        cin>>result;
    }

    for (int i = 0; i < result.length(); i++)
    {
        while (toupper(result[i]) != 'A' && toupper(result[i]) != 'D')

        {
            cout<< "error: invalid character in results string" << endl;
            cout<< "enter results string: ";
            cin>>result;
        }
        

        if (toupper(result[i]) == 'A')
        {
            a_wins++;
        }
        else if (toupper(result[i]) == 'D')
        {
            d_wins++;
        }
        else
        {
            cout<< "error: invalid character in results string" << endl;
        }
        
    }

    if (a_wins > d_wins)
    {
        cout<< "Anton" << endl;
    }
    else if (d_wins > a_wins)
    {
        cout<< "Danik" << endl;
    }
    else
    {
        cout<< "Friendship" << endl;
    }
    
    
}