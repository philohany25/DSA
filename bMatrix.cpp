#include <iostream>
using namespace std;

// m3rft4 a7elha awy 
// momken n3ml if stat law el row m4 = ll column 
// 34an law kano m4 equal hyml increment 2 7ata law fi wa7ed akready wesel ll nos
// aw m4 hy3ml el code el gowa el if

int main() {
    int matrix[][5] = {{0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0}};

    cout<< "enter the position of 1 (row and column): ";
    int row, col;
    cin >> row >> col;
    matrix[row - 1][col - 1] = 1;
    
    int moves = 0;

    cout<< matrix;

    for (int i = 0; i < 3 ; i++)
    {
        if ((row-1) != 2 || (col-1) != 2 && (row-1) < 2 || (col-1) < 2)
        {
            row++;
            col++;
            moves+=2;
        }
        
        if ((row-1),(col-1) != 2 && (row-1),(col-1) > 2)
        {
            row--;
            col--;
            moves+=2;
        }
    }
    cout << "minimum moves to reach center: " << moves << endl;
    
}