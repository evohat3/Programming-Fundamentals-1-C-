#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
cout << "What is your first number? ";
cin >> num1;
cout << "What is your second number? ";
cin >> num2;

    int sum = num1 + num2;
    int dif = num1 - num2;
    int product = num1 * num2;
    double quotient = num1 / num2;
    int modulus = num1 % num2;

    cout << "************************************************" << "\n";
    cout << "Sum = " << sum << "\n";
    cout << "Difference = " << dif << "\n";
    cout << "Product = " << product << "\n";
    cout << "Quotient = " << quotient << "\n";
    cout << "Modulus (remainder) = " << modulus << "\n";
    cout << "************************************************";
    return 0;
}