// Programming 1
// main.cpp
// COSC - 1336
// Nigel Poblete
// Date:
// Description:
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

    // for loop starting at the lower range + 1 (to negate 0 as a multiple) and incrementing untill the higherRange is reached.
    for (int i = lowerRange + 1; i < higherRange; i++) {
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