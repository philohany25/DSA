#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/231/A

int main(){
    int noOfProblems;
    int inputes[3];
    int count = 0;
    cout << "enter the number of problems: ";
    cin >> noOfProblems;

    for(int j = 0; j< noOfProblems; j++){
        for (int i = 0; i < 3; i++) {
            cout<<"enter inpute 0 or 1: ";
            cin>> inputes[i];
            if(inputes[i] != 0 && inputes[i] != 1){
                cout << "invalid inpute, please enter 0 or 1 only" << endl;
                i--;
                inputes[i].clear();
            }
            else{
                cin >> inputes[i];
            }
            if(inputes[i] == 1){
                count++;
            }
    }


    
}
}