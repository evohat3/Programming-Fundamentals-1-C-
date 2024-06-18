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
    int choice = -1;
    double result;


    while (choice != 0) {


    cout << "*** CALCULATOR MENU ***" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. division" << endl;
    cout << "0. Exit" << endl;
    cout << "******************************************************" << endl;

    cout << "Type the number of the operation you want from 1 to 4 " << endl; 
    cout << "or select 0 to exit the application." << endl;
    cout << "******************************************************" << endl;
    cout << "---> Operation selection: "; cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the 1st number to add: " << endl;
        cin >> numOne; 
        cout << "Enter the 2nd number to add: " << endl;
        cin >> numTwo;
        result = numOne + numTwo;
        cout << " " << endl;
        cout << "*** Your Answer is: ***" << endl;
        cout << numOne << " + " << numTwo << " = " << result << endl;
        cout << " " << endl;

        break;
    case 2: 
        cout << "Enter the 1st number to subtract: ";
        cin >> numOne; 
        cout << "Enter the 2nd number to subtract: ";
        cin >> numTwo;
        result = numOne - numTwo;
        cout << " " << endl;
        cout << "*** Your Answer is: ***" << endl;
        cout << numOne << " - " <<  numTwo << " = " << result << endl;
        cout << " " << endl;
        break;
    case 3:
        cout << "Enter the 1st number to multiply: ";
        cin >> numOne; 
        cout << "Enter the 2nd number to multiply: ";
        cin >> numTwo;
        result = numOne * numTwo;
        cout << " " << endl;
        cout << "*** Your Answer is: ***" << endl;
        cout << numOne << " * " <<  numTwo << " = " << result << endl;
        cout << " " << endl;
        break;
    case 4:
        cout << "Enter the 1st number to divide: ";
        cin >> numOne; 
        cout << "Enter the 2nd number to divide: ";
        cin >> numTwo;
        result = numOne / numTwo;
        cout << " " << endl; 
        cout << "*** Your Answer is: ***" << endl;
        cout << numOne << " / " <<  numTwo << " = " << result << endl;
        cout << " " << endl;
        break;
    case 0: 

        cout << " " << endl;
        cout << "*** Exiting application now... Good Bye! ***" << endl;
        cout << " " << endl;
        break;

    default:
        if (choice >=5) {
            cout << " " << endl;
            cout << " Invalid choice, please choose either 1-4 or select 0 to exit.";}
            cout << " " << endl;
        break;
    } 

    }


    
    return 0;
}