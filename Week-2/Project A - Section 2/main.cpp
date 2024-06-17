//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Name: Nigel Poblete
//  Modified Date  and Purpose/Description
/*     06/09/2024
//  Project  A - Section 2
*/
#include <iostream>
#include <cmath>
using  namespace std;
string goodbye(string fullName) {
return  
"Exiting the application.\n goodbye " + fullName;
}
int main()
{
    //****** Variable section *********
    string first;
    string last;
    int choice;
    double num;
    int x;
    int y;
    double result;
    //****** Welcome Section **********
    //Output welcome header     
    cout << " " << endl; 
    cout << "************************************" << endl;
    cout << "*    Programming 1 Course Project  *" << endl;
    cout << "************************************" << endl;
    cout << " " << endl; 
    //prompt user for first name and store  
    cout << "Please enter your first name: ";
    cin >> first;

    //prompt user for last name and store  
    cout << "Please enter your last name: ";
    cin >> last;
    string fullName = first + " " + last;
    //Output a welcome message to the user 
    cout << " " << endl; 
    cout << "************************************" << endl;
    cout << "Welcome to C++ progamming " << first << " " << last << "!" << endl;   
    cout << "************************************" << endl;
    cout << " " << endl;

    cout << "Enter 1 to Calculate Square Root" << endl;
    cout << "Enter 2 to Enter X to the Y Power" << endl;
    cout << "Enter 3 to Convert Numerical gpa to a Letter Grade" << endl;
    cout << "Enter 0 to Exit" << endl;
    cout << " " << endl;
    cout << " Enter your Selection: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << " " << endl;
        cout << "Enter a number to calculate the Square Root: ";
        cin >> num;
        if (num >= 0) {
            result = sqrt(num);
            cout << " " << endl;
            cout << "************************************" << endl;
            cout << " " << endl;
            cout << "The Square Root of " << num << " is: " << result << endl;
            cout << " " << endl;
            cout << "************************************" << endl;
            cout << " " << endl;
            cout << "************************************" << endl;
            cout << goodbye(fullName);
            cout << " " << endl;
            cout << "************************************" << endl;
        }   
        break;
    case 2:
        cout << " " << endl;
        cout << "Enter a number (x) to the (y) power" << endl;
        cout << "Enter the X: " << endl;
        cin >> x;
        cout << "Enter the Y: " << endl;
        cin >> y;
        result = pow(x, y);

        cout << " " << endl;
        cout << "************************************" << endl;
        cout << " " << endl;
        cout << x << " To the " << y << " Power is: " << result << endl; 
        cout << " " << endl;
        cout << "************************************" << endl;
        cout << " " << endl;
        cout << "************************************" << endl;
        cout << goodbye(fullName);
        cout << " " << endl;
        cout << "************************************" << endl;

        break;
    case 3:
        cout << " " << endl;
        cout << "Enter your Numerical Grade: ";
        cin >>  num;
        if (num <= 1.0) {    
            cout << " " << endl;
            cout << "************************************" << endl;
            cout << " Your Letter Grade is F";
            cout << " " << endl;
            cout << " " << endl;
            cout << "************************************" << endl;
            cout << goodbye(fullName);
            cout << " " << endl;
            cout << "************************************" << endl;
        } else { 
            if (num <= 1.9) {
                cout << " " << endl;
                cout << "************************************" << endl;
                cout << " Your Letter Grade is a D";
                cout << " " << endl;
                cout << "************************************" << endl;
                cout << " " << endl;
                cout << "************************************" << endl;
                cout << goodbye(fullName);
                cout << " " << endl;
                cout << "************************************" << endl;
            } else {
                if (num <= 2.9) {
                    cout << " " << endl;
                    cout << "************************************" << endl;
                    cout << "Your Letter grade is C";
                    cout << " " << endl;
                    cout << "************************************" << endl;
                    cout << " " << endl;
                    cout << "************************************" << endl;
                    cout << goodbye(fullName);
                    cout << " " << endl;
                    cout << "************************************" << endl;
                } else {
                    if (num <= 3.9) {
                        cout << " " << endl;
                        cout << "************************************" << endl;
                        cout << "Your Letter Grade is B";
                        cout << " " << endl;
                        cout << "************************************" << endl;
                        cout << " " << endl;
                        cout << "************************************" << endl;
                        cout << goodbye(fullName);
                        cout << " " << endl;
                        cout << "************************************" << endl;
                    } else {
                        if (num <= 4.0) {
                            cout << " " << endl;
                            cout << "************************************" << endl;
                            cout << "Your Letter Grade is A";
                            cout << " " << endl;
                            cout << "************************************" << endl;
                            cout << " " << endl;
                            cout << "************************************" << endl;
                            cout << goodbye(fullName);
                            cout << " " << endl;
                            cout << "************************************" << endl;
                        }
                    }
                }
            }
        } 
        break;
    case 0:
        break;
    default:
    cout << "Invalid Selection please try again " << endl;
    break;
    }
    return 0;
}
