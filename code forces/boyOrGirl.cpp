#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "enter the name: ";
    cin >> name;

    if (name.length() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}