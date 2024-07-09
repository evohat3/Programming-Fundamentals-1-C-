// Programming 1
// main.cpp
// COSC - 1336
// Nigel Poblete
// Professor Percy
// Date: 06/26/2024
// Description: a calculator using Overloading functions
#include <iostream>
#include <string>
using namespace std;
// *** prototypes ***
int addNumbers(int,int);
int addNumbers(int,int,int);
double addNumbers(double,double);
double addNumbers(double,double,double);
// ** main **
int main() {
    // initialize empty variables ***
    int choice;
    int intOne;
    int intTwo;
    int intThree;
    double dubOne;
    double dubTwo;
    double dubThree;
    // do { } while( )  loop ***
    do
    {
        cout << " Welcome to the Programming 1 calculator!" << endl;
        cout << " Please enter your selection or enter 5 to exit. " << endl;
        cout << "1. Add Two Integers" << endl;
        cout << "2. Add Three Integers" << endl;
        cout << "3. Add Two Doubles" << endl;
        cout << "4. Add Three Doubles" << endl;
        cout << "5. Exit " << endl;
        cin >> choice;
        // switch statement ***
        switch (choice)
        {
        case 1:
            cout << "Enter the first number: " << endl;
            cin >> intOne;
            cout << "Enter The second number: " << endl;
            cin >> intTwo;            
            cout << intOne << " + " << intTwo << " = " << addNumbers(intOne, intTwo) << endl << endl; // clal function 1
            break;
        case 2:
            cout << "Enter the first number: " <<endl;
            cin >> intOne;
            cout << "Enter the second number: " << endl;
            cin >> intTwo;
            cout << "Enter the third number: " << endl;
            cin >> intThree;
            cout << intOne << " + " << intTwo << " + " << intThree << " = " << addNumbers(intOne,intTwo,intThree) << endl << endl; // call function 2
            break;
        case 3:
            cout << "Enter the first double: " << endl;
            cin >> dubOne;
            cout << "Enter the second double: " << endl;
            cin >> dubTwo;
            cout << dubOne << " + " << dubTwo << " = "  << addNumbers(dubOne, dubTwo) << endl << endl;  // call function 3
            break;
        case 4: 
            cout << "Enter the first double: " << endl;
            cin >> dubOne;
            cout << "Enter the second double: " << endl;
            cin >> dubTwo;
            cout << "Enter the third double: " << endl;
            cin >> dubThree;
            cout << dubOne << " + " << dubTwo << " + " << dubThree << " = " << addNumbers(dubOne, dubTwo,dubThree) << endl << endl; // call function 4
            break;
        case 5: 
            cout << endl << endl;
            cout << " Exiting Application Good Bye!" << endl << endl;
        default:
            if (choice > 5) {
                cout << endl << endl;
                cout << "Invalid Selection Please try again" << endl << endl;
            }
            break;
        }
    } while (choice != 5);

    // ***  exit main ***
    return 0;
}


// function 1. *****
int addNumbers (int num1, int num2) {
    int result = num1 + num2;
    return result;
}
// function 2. *****
int addNumbers (int num1, int num2, int num3) {
    int result = num1 + num2 + num3;
    return result;
}
// function 3. *****
double addNumbers (double num1, double num2) {
 double result = num1 + num2;
 return result;   
}
// function 4. *****
double addNumbers (double num1, double num2, double num3) {
    double result = num1 + num2 + num3;
    return result;
}