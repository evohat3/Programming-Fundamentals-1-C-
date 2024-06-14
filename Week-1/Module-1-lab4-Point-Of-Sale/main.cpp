//
//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Name: Nigel Poblete
//  Modified Date  and Purpose/Description
/*     06/09/2024, Making a point of sale application that calculates the subtotal, tax and grandTotal of a purchase.
*/

#include <iostream>
using namespace std; 

int main() {
string item1;
string item2;
string item3;
float price1;
float price2;
float price3;


cout << "Enter the name of item1: ";
cin >> item1;
cout << "Enter the price of item1: ";
cin >> price1;
cout << "Enter the name of item2: ";
cin >> item2;
cout << "Enter the price of item2: ";
cin >> price2;
cout << "Enter the name of item3:";
cin >> item3;
cout << "Enter the price of item3: ";
cin >> price3;

float subtotal = price1 + price2 + price3;
float tax = subtotal * 0.08;
float grandTotal = subtotal + tax;

cout << "Your Items: " << "\n" << "----------"<< "\n" << item1 << "\n" << item2 << "\n" << item3 << "\n" << "----------"<< endl;
cout << "Your Subtotal: " << subtotal << endl;
cout << "Your Tax: " << tax << endl;
cout << "Your Grand Total is: " << grandTotal << endl; 
    
    return 0;
}