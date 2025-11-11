// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: roberts_arraySumAvg.cpp
// Description: Accepts 1d array as argument, returns sum and average
// Date Created (MM/DD/YYYY): 11/10/2025
// Date Modified (MM/DD/YYYY): 11/10/2025

#include <iostream>
using namespace std;

// struct of two floats for function's return type
struct twoFloat {
    float sum, avg;
};

// will return two floats, one for sum and one for average
twoFloat sumAverage(float array[], int size) {
    twoFloat returned;
    for (int i = 0; i < size; i++) {
        returned.sum += array[i];
    }
    returned.avg = returned.sum / size;

    return returned;
}

void printArr(float array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl << "--------------------------" << endl;
}

int main() {
    float stock[6] = {22.2, 22.7, 23.5, 22.8, 24.3, 25.6};
    cout << "Stock array: " << endl;
    printArr(stock, 6);
    twoFloat stockSumAvg = sumAverage(stock, 6);
    cout << "Stock array sum: " << stockSumAvg.sum << endl;
    cout << "Stock array avg: " << stockSumAvg.avg << endl;

    return 0;
}