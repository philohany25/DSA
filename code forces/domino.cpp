#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/50/A

int main(){
    int n;
    int m;
    int numOfDominoes;
    cout << "enter the dimensions of the rec board: ";
    cin>> n >> m;

    numOfDominoes = (n * m) / 2;
    cout << "number of dominoes that can be placed: " << numOfDominoes << endl;

}