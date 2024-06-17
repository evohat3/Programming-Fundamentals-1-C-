// Programming 1 module 3 - lab 4
// main.cpp
// COSC - 1336
// Nigel Poblete
// Date: 06/17/2024
// Description: A calculator program that takes in a selection of operation and then two numbers
#include <iostream>
using namespace std;

int main() {
    double numOne;
    double numTwo;
    int choice;
    double result;

    cout << "CALCULATOR MENU" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. division" << endl;
    cout << "0. Exit" << endl;

    cout << " " << endl;
    cout << "Make a selection from 1 to 4 and select 0 to exit." << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the 1st number: ";
        cin >> numOne; 
        cout << "Enter the 2nd number: ";
        cin >> numTwo;
        result = numOne + numTwo;

        cout << numOne << " + " << numTwo << " = " << result;

        break;
    case 2: 
        cout << "Enter the 1st number: ";
        cin >> numOne; 
        cout << "Enter the 2nd number: ";
        cin >> numTwo;
        result = numOne - numTwo;
        cout << numOne << " - " <<  numTwo << " = " << result;
        break;
    case 3:
        cout << "Enter the 1st number: ";
        cin >> numOne; 
        cout << "Enter the 2nd number: ";
        cin >> numTwo;
        result = numOne * numTwo;
        cout << numOne << " * " <<  numTwo << " = " << result;
        break;
    case 4:
        cout << "Enter the 1st number: ";
        cin >> numOne; 
        cout << "Enter the 2nd number: ";
        cin >> numTwo;
        result = numOne / numTwo;
        cout << numOne << " / " <<  numTwo << " = " << result;
        break;
    case 0:
        cout << " Exiting application. Good bye! " << endl;
    break;
    
    default:
        if (choice >=5) {
            cout << " Invalid choice, please choose either 1-4 or select 0 to exit.";}
        break;
    }
    
    return 0;
}