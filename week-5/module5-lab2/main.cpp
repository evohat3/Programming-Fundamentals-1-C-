// Programming 1 Module 5 - Lab 2
// main.cpp
// COSC - 1336
// Nigel Poblete
// Date: 07/05/24
// Description: A program that will take in an integer value for the day and the month and return
// the name of the day and month.
#include <iostream>
using namespace std;

// Write a program that asks the user to input a number between 1 and 7.
// The program should then convert the number to a corresponding DaysOfWeek value and print out the name of the day.
// Additionally, the program that asks the user to input a number between 1 and 12.
// The program should then convert the number to a corresponding MonthsOfYear value
// and print out the name of the month.

// prototypes ***
void dayChecker(int);
void monthChecker(int);

// Declare an enumeration called DaysOfWeek with the following values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
enum DaysOfWeek {
    Monday = 1, 
    Tuesday = 2, 
    Wednesday = 3, 
    Thusday = 4, 
    Friday = 5, 
    Saturday = 6, 
    Sunday = 7
    };
// Declare an enumeration called MonthsOfYear with the following values: January, February, March, April, May, June, July, August, September, October, November, and December.
enum MonthsOfYear {
    January = 1, 
    February = 2, 
    March = 3, 
    April = 4, 
    May = 5, 
    June = 6, 
    July = 7, 
    August = 8, 
    Setptember = 9, 
    October = 10, 
    November = 11, 
    December = 12
    };
// Main function ****
int main() {
    int day;
    int month;
    cout << "Choose a day of the Week from 1-7" << endl;
    cin >> day;
    cout << "choose a month of the Year 1-12" << endl;
    cin >> month;
    cout << endl;
    cout << "Day of the week: ";  dayChecker(day);
    cout << endl;
    cout << "Month of the year: "; monthChecker(month);
    cout << endl;
    
    return 0;
}
// void function that uses a switch case to check the enum value to the integer value to print out the Day of the Week
void dayChecker(int a) {
    switch (a)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
     cout << "Invalid Selection please choose a day of the week from 1-7" << endl ;
        break;
    };
}
// void function that uses a switch case to check the enum value to the integer value to print out the Month of the Year
void monthChecker(int a) {
    switch (a)
    {
    case 1:
        cout << "January" << endl; 
        break;
    case 2:
        cout << "February" << endl; 
        break;
    case 3:
        cout << "March" << endl; 
        break;
    case 4:
        cout << "April" << endl; 
        break;
    case 5:
        cout << "May" << endl; 
        break;
    case 6:
        cout << "June" << endl; 
        break;
    case 7:
        cout << "July" << endl; 
        break;
    case 8:
        cout << "August" << endl; 
        break;
    case 9:
        cout << "September" << endl; 
        break;
    case 10:
        cout << "October" << endl; 
        break;
    case 11:
        cout << "November" << endl; 
        break;
    case 12:
        cout << "December" << endl; 
        break;
    
    default:
        break;
    }
}
