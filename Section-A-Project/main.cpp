//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Name: Nigel Poblete
//  Description: This is a cumulative project for my c++ programming class. 
//  6/9/2024 
//  - Created into header for application
//  6/16/2024 
//  - Added interactive user menu using a switch case and some else if statements
//  6/23/2024 
//  - Added new options to the user menu, using nested for loops.
//  6/30/2024 
//  - Refactor options 3 and 4 to be user-defined functions
//  - created Options 5 and 6 allowing for calculating weekly pay and yearly interest.
//  07/03/2024 
//  - added a void function that displays the header header()
//  - added a function that takes in two strings by reference
//  for the the first and last name variables, the function itself prompts the user
//  for their first and last name and it changes the values of the first and last 
// variables within the program.
//     
//  Project A 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Prototypes ***
void numericalGPA();
void rightTriangle();
double calculatePay(double, double);
void displayInterest();
void header();
void userPrompt(string& , string&);

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
    double hrWrk;
    double hrRate;
    double result;
    double pay;
    double otPay;
    //****** Welcome Section **********
    //Output welcome header     
    header();
    //prompt user for first name and store  
    userPrompt(first,last);
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
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 1) to Calculate Square Root" << right << setw(10) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 2) to Enter X to the Y Power" << right << setw(9) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 3) to Convert GPA to Letter Grade" << right << setw(4) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 4) to Create a Right Triangle" << right << setw(8) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 5) to Calculate Your Weekly Pay" << right << setw(6) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 6) to Calculate Interest Earned" << right << setw(6) << "|" << endl;
    cout << setfill(' ') << left << setw(8) << "|" << "Enter 0) to Exit" << right << setw(27) << "|" << endl;
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
        numericalGPA();
        continue;
        // Right Triangle
    case 4:
        rightTriangle();
    continue;
    case 5: 
        cout << "Enter Your Total Hours This Week: " << endl;
        cin >> hrWrk;
        cout << "Enter Your Hourly Pay: " << endl;
        cin >> hrRate;
        pay = calculatePay(hrRate, hrWrk);
        cout << endl;
        cout << "Your Weekly pay is $" << pay << endl;
        cout << endl;
        continue;

    case 6:
        displayInterest();        

        continue;
        // Exit
    case 0:
        cout << endl;
        cout << "Exiting Application Good Bye! " << fullName << endl;
        cout << endl;
        break;
        // Invalid selection handler
    default:
    cout << endl;
    cout << "Invalid Selection please try again " << endl;
    cout << endl;
    continue;
    }
}

    
}

void numericalGPA() {
    double num;
 cout << "Enter Your Numerical Grade: " << endl;
 cin >> num;
        if (num <= 1.5) {    
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
                    if (num <= 3.5) {
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
}

void rightTriangle() {
    int x;
    cout << "Enter the size of the triangle: " << endl;
    cin >> x;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;
}

double calculatePay(double r, double h) {
    double weeklyPay = h * r;
    double otp = 0;
    double totalPay = 0;
    if (h > 40) {
        double oT = h - 40;
        double oP = r * 1.5;
        otp = oP * oT;
    }

    totalPay = weeklyPay + otp;
    return totalPay;
}

void displayInterest() {
    double balance;
    double interest;  

    double intAccrued;    
    cout << "Enter Initial Balance" << endl;
    cin >> balance;
    cout << "Enter Yearly Interest Rate" << endl;
    cin >> interest;
    for (double i = 1; i <= 5; i++) {
        float yInt = balance * interest * i;
        float newBalance = balance + yInt;
        cout << "Year " << i << ": $" << newBalance << endl;
    }
}

void header() {
    cout << endl; 
    cout << "************************************" << endl;
    cout << "*    Programming 1 Course Project  *" << endl;
    cout << "************************************" << endl;
    cout << endl; 
}

void userPrompt(string& a, string&b) {
        cout << "Please enter your first name: ";
    cin >> a;

    //prompt user for last name and store  
        cout << "Please enter your last name: ";
    cin >> b;
}