// Name: Nigel Poblete
// Course: Programming 1 - 1336
// Professor:  Percy
// project name:  Calculator
// Description: An application running a while loop and a switch statement to operate
// as a calculator that allows the user to select the math operation and input two numbers to calculate.
// Date: 06/19/2024
#include <iostream>
using namespace std;
int main() {
int choice;
double numOne;
double numTwo;
double result;

   while (choice != 0) {
      cout << "Calculator Menu: " << endl;
      cout << "1. Addition" << endl;
      cout << "2. Subtraction" << endl;
      cout << "3. Multiplication" << endl;
      cout << "4. Division" << endl;
      cout << "0. Exit" << endl;
      cout << endl;
      cout << "Select 1-4 to select a Math operation" << endl;
      cout << "Select 0 to exit the application" << endl;
      cin >> choice;

      switch (choice)
      {
      // addition
      case 1:
         // assigning user input to numOne and numTwo
         cout << "Enter the 1st number: ";
         cin >> numOne;
         cout << "Enter the 2nd number: ";
         cin >> numTwo;
         cout << endl;
         // calculating the sum of numOne and numTwo to the result varible
         result = numOne + numTwo;
         // displaying the results to the user
         cout << "*** The answer is: " << numOne << " + " << numTwo << " = " << result << endl;
         cout << endl;
         break;
      // subtraction
      case 2:
         // assigning user input to numOne and numTwo
         cout << "Enter the 1st number: ";
         cin >> numOne;
         cout << "Enter the 2nd number: ";
         cin >> numTwo;
         cout << endl;
         // calculating the difference of numOne and numTwo to the result varible
         result = numOne - numTwo;
         cout << "*** The answer is: " << numOne << " - " << numTwo << " = " << result << endl;
         cout << endl;
         break;
      // multiplication
      case 3: 
         // assigning user input to numOne and numTwo
         cout << "Enter the 1st number: ";
         cin >> numOne;
         cout << "Enter the 2nd number: ";
         cin >> numTwo;
         cout << endl;
         // calculating the product of numOne and numTwo to the result varible
         result = numOne * numTwo;
         cout << "*** The answer is: " << numOne << " * " << numTwo << " = " << result << endl;
         cout << endl;
      break;
         // division
      case 4:
         // assigning user input to numOne and numTwo
         cout << "Enter the 1st number: ";
         cin >> numOne;
         cout << "Enter the 2nd number: ";
         cin >> numTwo;
         cout << endl;
         // calculating the difference of numOne and numTwo to the result varible
         result = numOne / numTwo;
         cout << "*** The answer is: " << numOne << " / " << numTwo << " = " << result << endl;
         cout << endl;
      break;
         //exit
      case 0:
         cout << endl;
         cout << "Exiting the application... Good Bye! " << endl;
      break;
         // handle incorrect input
      default:
            cout << endl;
            cout << "*** Invalid Selection Please Try Again. ***" << endl;
            cout << endl;

         break;
      }
   }

    return 0;
}