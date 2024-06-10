#include <iostream>
using namespace std;

int main() {
    
string make;
string model;
int miles;
double gasoline;

cout << "What is the make? ";
cin >> make;
cout << "What is the model? ";
cin >> model;
cout << "How many miles have you driven? ";
cin >> miles;
cout << "How many gallons of gasoline have you used? ";
cin >> gasoline;

double mpg = miles / gasoline;

cout << "\n";
cout << "***********************************************" << "\n";
cout << "\n";
cout << "Your are getting " << mpg << " miles per gallon" << "\n";
cout << "in your " << make << " " << model << "\n";
cout << "\n";
cout << "***********************************************";
    return 0;
}