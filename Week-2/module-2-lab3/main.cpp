//  Programming 1 Week - 2 - Lab 3
//  main.cpp
//  Course COSC-1336 or
//  Name: Nigel Poblete
//  Number Checker
//  Description: Prompts user to enter a number and the program will check if the number 
//  is a positive, negative or zero number. 
#include <iostream>
using namespace std;
int main() {
    double num;
    cout << "Enter a number to check it: ";
    cin >> num;
    if (num > 0) {
        cout << "**************************************" << endl;
        cout << "Your number " << num << " is positive" << endl;
        cout << "**************************************" << endl;
    } else if (num < 0) {
        cout << "**************************************" << endl;
        cout << "Your number " << num << " is negative" << endl;
        cout << "**************************************" << endl;
    }  else {
        if (num == 0) {
            cout << "**************************************" << endl;
            cout << "Your number is 0 " << endl;
            cout << "**************************************" << endl;
        }
    }
    return 0;
}