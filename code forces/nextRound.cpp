#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/158/A

int main() {
    int nOfPlayers;
    int minScore;
    int scores[nOfPlayers];
    int qualifiedCount = 0;

    cout<< "enter number of contestants & min score";
    cin >> nOfPlayers >> minScore;
    
    for(int k = 0; k < nOfPlayers; k++) {
        cout << "enter score of player " << k + 1 << ": ";
        cin >> scores[k];
        if (scores[k] >  minScore){
            qualifiedCount++;
        }
    }
    cout << "number of qualified contestants: " << qualifiedCount << endl;
}