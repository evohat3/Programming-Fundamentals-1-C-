// Programming 1 Module 3 Lab - 2
// main.cpp
// COSC - 1336
// Nigel Poblete
// Date: 06/17/24
// Description: a program that will take in two numbers from low to high and return the count of multples from 3 and 5.
#include <iostream>
using namespace std;

int main() {
    int lowerRange; // uninitialized lower range variable for user input
    int higherRange; // uninitialized higher range variable for user input
    int m3 = 0; // counter for multiples of 3
    int m5 = 0; // counter for multiples of 5

    cout << "Enter your lower range: ";
    cin >> lowerRange;
    cout << "Enter the high range: ";
    cin >> higherRange;

    // for loop starting at the lower range and incrementing untill the higherRange is reached 
    // adding + 1 to the higher range so that the higher range is included as a multiple and isnt offset by index count
    for (int i = lowerRange ; i < higherRange + 1; i++) {
        if (i % 3 == 0) {
            m3++; // incrementing the multiples of 3 into the counter
        }
        if (i % 5 == 0) {
            m5++; // incrementing the multiples of 5 into the counter
        }
    }
    cout << "The count of numbers in the range that are multiple(s) of 3: " << m3 << endl;
    cout << "The count of numbers in the range that are multiple(s) of 5: " << m5 << endl;

    return 0;
}