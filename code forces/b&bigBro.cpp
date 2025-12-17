#include <iostream>
using namespace std;

int main(){
    int lWeight, bWeight;
    int yrs = 0;
    cout << "enter limak and bob's weight: ";
    cin >> lWeight >> bWeight;

    while (lWeight <= bWeight)
    {
        lWeight = lWeight * 3;
        bWeight = bWeight * 2;
        yrs++;
    }
    
}