// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: roberts_threeArrayVals.cpp
// Description: Accepts 1d array as argument, returns smallest, largest & 2nd-largest
// Date Created (MM/DD/YYYY): 11/10/2025
// Date Modified (MM/DD/YYYY): 11/10/2025

#include <iostream>
using namespace std;

// struct needed to return three values in function
struct threeValues {
    int biggest;
    int secondBiggest;
    int smallest;
};

threeValues getThreeValues(int arr[], int size) {
    threeValues returned;
    returned.biggest = 0;
    returned.secondBiggest = 0;
    // biggest possible integer value using hex math
    returned.smallest = 0x7FFFFFFF;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < returned.smallest) {
            returned.smallest = arr[i];
        }
        else if (arr[i] > returned.biggest) {
            returned.biggest = arr[i];
        }
        else if (arr[i] > returned.secondBiggest && arr[i] != returned.biggest) {
            returned.secondBiggest = arr[i];
        } 
    }
    
    return returned;
}

void printArr(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl << "--------------------------" << endl;
}

int main() {
    int sellPrices[12] = {80, 50, 35, 65, 127, 77, 92, 85, 123, 90, 55, 124};
    cout << "Monthly sell prices array: " << endl;
    printArr(sellPrices, 12);
    threeValues threeSellVals = getThreeValues(sellPrices, 12);
    cout << "Biggest sell price of the array: " << threeSellVals.biggest << endl;
    cout << "Second biggest sell price of the array: " << threeSellVals.secondBiggest << endl;
    cout << "Smallest sell price of the array: " << threeSellVals.smallest << endl;

    return 0;
}