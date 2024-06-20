//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Name: Nigel Poblete
/*     06/09/2024 * modified 06/29/24
// Description: This is a cumulative project for my c++ programming class. 
//  Project  A - Section 3
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using  namespace std;

int main()
{
    //****** Variable section *********
    string first;
    string last;
    // sentinel loop * sets the variable to not initalize as 0 for the while loop to take effect
    int choice = -1;  
    double num;
    int x;
    int y;
    double result;
    char character;
    character = '*';
    //****** Welcome Section **********
    //Output welcome header     
    cout << endl; 
    cout << "************************************" << endl;
    cout << "*    Programming 1 Course Project  *" << endl;
    cout << "************************************" << endl;
    cout << endl; 
    //prompt user for first name and store  
    cout << "Please enter your first name: ";
    cin >> first;

    //prompt user for last name and store  
    cout << "Please enter your last name: ";
    cin >> last;
    // stores users first and last name as one
    string fullName = first + " " + last;
    //Output a welcome message to the user 
    cout << endl; 
    cout << "************************************" << endl;
    cout << "Welcome to C++ progamming " << first << " " << last << "!" << endl;   
    cout << "************************************" << endl;
    cout << endl;


while (choice != 0)
{
    cout << setfill('-') << left << setw(35) << "|" << right << setw(15) << right << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 1 to Calculate Square Root" << right << setw(10) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 2 to Enter X to the Y Power" << right << setw(9) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 3 to Convert GPA to Letter Grade" << right << setw(4) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 4 to Create a Right Triangle" << right << setw(8) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 0 to Exit" << right << setw(27) << "|" << endl;
    cout << setfill('-') << left << setw(35) << "|" << right << setw(15) << right << "|" << endl;
    cout << endl;
    cout << "Enter your Selection: ";
    cin >> choice;
    switch (choice)
    {
        // Square root
    case 1:
        cout << endl;
        cout << "Enter a number to calculate the Square Root: ";
        cin >> num;
        if (num >= 0) {
            result = sqrt(num);
            cout <<  endl;
            cout << "The Square Root of " << num << " is: " << result << endl;
            cout <<  endl;
            continue; // ** continue doesnt break the loop after case is executed,
                        //  repeats loop body from the start instead.
        }
        // Power
    case 2:
        cout << endl;
        cout << "Enter a number (x) to the (y) power" << endl;
        cout << "Enter the X: " << endl;
        cin >> x;
        cout << "Enter the Y: " << endl;
        cin >> y;
        result = pow(x, y);
        cout << endl;
        cout << x << " To the " << y << " Power is: " << result << endl; 
        cout << endl;
        continue;
        // Numerical GPA
    case 3:
        cout << endl;
        cout << "Enter your Numerical Grade: ";
        cin >> num;
        if (num <= 1.0) {    
            cout << endl;
            cout << " Your Letter Grade is F" << endl;
            cout << endl;
        } else { 
            if (num <= 1.9) {
                cout << endl;
                cout << " Your Letter Grade is a D" << endl;
                cout << endl;
            } else {
                if (num <= 2.9) {
                    cout << endl;
                    cout << "Your Letter grade is C" << endl;
                    cout << endl;
                } else {
                    if (num <= 3.9) {
                        cout << endl;
                        cout << "Your Letter Grade is B" << endl;
                        cout << endl;
                    } else {
                        if (num <= 4.0) {
                            cout << endl;
                            cout << "Your Letter Grade is A" << endl;
                            cout << endl;
                        }
                    }
                }
            }
        } 
        continue;
        //
    case 4:
    cout << "Enter the size of the triangle: " << endl;
    cin >> x;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;
    continue;
        // Exit
    case 0:
        cout << endl;
        cout << "Exiting Application Good Bye! ";
        cout << endl;
        break;
        // Invalid selection handler
    default:
    cout << endl;
    cout << "Invalid Selection please try again " << endl;
    cout << endl;
    continue;
    }
    return 0;
}

    
}