// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: roberts_matrixReverse.cpp
// Description: Accepts 2d array as argument, reverses a row of choice
// Date Created (MM/DD/YYYY): 11/10/2025
// Date Modified (MM/DD/YYYY): 11/10/2025

#include <iostream>
using namespace std;

void printArr(int * arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << *(arr + (i * col) + j) << " ";
        }
        cout << endl;
    }
    cout << "---------------------------------------" << endl;
}

void reverse(int * matrix, int row, int col, int rowReverse) {
    // for pointer arithmetic, store number that represents how long it takes to reach row used
    int reachRowOffset = rowReverse * col;
    // create shrinking range between two indexes to swap until reaching middle of row
    for (int i = 0, j = col-1; i != j; i++, j--) {
        // temporarily store i value into variable temp
        int temp = *(matrix + reachRowOffset + i);
        // swap value at matrix[rowReverse][i] with value at matrix[rowReverse][j]
        *(matrix + reachRowOffset + i) = *(matrix + reachRowOffset + j);
        // use temp to swap j with i
        *(matrix + reachRowOffset + j) = temp;
    }
 }

int main() {
    int quantity[3][5] = {{2, 4, 3, 6, 9},
                        {5, 8, 9, 3, 7},
                        {1, 4, 3, 2, 10}
                    };
    cout << "Matrix before reversal: " << endl;
    printArr(&quantity[0][0], 3, 5);
    reverse((int*)quantity, 3, 5, 1);
    cout << "Matrix after reversal: " << endl;
    printArr(&quantity[0][0], 3, 5);

    return 0;
}