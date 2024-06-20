
#include <iostream>
using namespace std;
int main() {
    int numOne = 0;
    int numTwo = 0;
    // for loop
    cout << " For Loop ***" << endl;
    for (int i = 0; i < 10; i ++) {
        cout << i << endl;
    }
    cout << endl;
    cout << " While Loop **" << endl;
    // while loop
    while (numOne < 10) {
        numOne++ ;
        cout << numOne << endl;
    }
    cout << endl;
    cout << " Do While Loop **" << endl;
    // do while
    do
    {
        numTwo++;
        cout << numTwo << endl;
    } while (numTwo < 10);
    cout << endl;


    return 0;
}