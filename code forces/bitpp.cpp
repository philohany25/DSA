#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/282/A

int main() {
    int n;
    cout << "enter the number of commands: ";
    cin >> n;
    int x = 0;

    for (int i = 0; i < n; i++) {
        string command;
        cout << "enter the command: ";
        cin >> command;

        if (command == "X++" || command == "++X") {
            x++;
        } else if (command == "X--" || command == "--X") {
            x--;
        } else {
            cout << "invalid command, please enter a valid command" << endl;
            i--;
        }
    }

    cout << "final value of x: " << x << endl;

    return 0;
}