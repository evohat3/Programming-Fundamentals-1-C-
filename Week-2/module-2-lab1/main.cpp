//  Programming 1 Week - 2 - Lab 1
//  main.cpp
//  Course COSC-1336 or
//  Name: Nigel Poblete

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
     string month;
     double rent;
     double electric;
     double water;
     cout << fixed << showpoint << setprecision(2);
     cout << "Enter the Month: ";
     getline(cin, month);
     cout << endl;
     cout << "Enter rent bill amount: ";
     cin >> rent;
     cout << endl;
     cout << "Enter electric bill amount: ";
     cin >> electric;
     cout << endl;
     cout << "Enter the water bill amount: ";
     cin >> water;
     cout << endl;
     double total = (rent + electric + water);
     cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
     cout << " " << endl;
     cout << "********************************" << endl;
     cout << "Your monthly expenses for " << month << endl;
     cout << "********************************" << endl;
     cout << " " << endl;
     cout << setfill('-') << left << setw(35) << "Monthly Rent Bill: " << right << " " << rent << endl;
     cout << setfill('-') << left << setw(35) << "Monthly Electric Bill: " << right << " " << electric << endl;
     cout << setfill('-') << left << setw(35) << "Monthly Water Bill: " << right << " " << water << endl;
     cout << " " << endl;
     cout << setfill('-') << left << setw(35) << "Total Monthly Expenses: " << right << " " << total << endl;
     cout << " " << endl;
     cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
    return 0;
}