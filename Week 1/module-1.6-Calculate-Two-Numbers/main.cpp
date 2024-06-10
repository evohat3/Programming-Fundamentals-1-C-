#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    int sum = num1 + num2;
    int product = num1 * num2;
    cout << "\n";
    cout << "*****************************" << "\n";
    cout << "Number 1: " << num1 << "\n";
    cout << "Number 2: " << num2 << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Product: " << product << endl;


    return 0;
}