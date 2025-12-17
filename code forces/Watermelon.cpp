#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/4/A

int main() {
    cout << "enter the weight of the watermelon: ";
    int weight;
    cin >> weight;
    if (weight > 1 && weight < 100 && weight % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }    
    return 0;
}
