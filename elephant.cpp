#include <iostream>
using namespace std;

int main() {
    int steps = 0; // Initialized variable
    int inpt;
    int counter = 0;
    cout << "enter the coordinates: ";
    cin >> inpt;

    while (counter != inpt)
    {
        if (inpt % 5 == 0)
        {
            steps +=1;
            counter +=5;
        }
        else if (inpt % 4 == 0)
        {
            steps +=1;
            counter +=4;
        }
        else if (inpt % 3 == 0)
        {
            steps +=1;
            counter +=3;
        }
        else if (inpt % 2 == 0)
        {
            steps +=1;
            counter +=2;
        }
        else if (inpt % 1 == 0)
        {
            steps +=1;
            counter +=1;
        }
        else
        {
            break; 
        }
    }
    
    cout << "Total steps: " << steps << endl;
    return 0;
}