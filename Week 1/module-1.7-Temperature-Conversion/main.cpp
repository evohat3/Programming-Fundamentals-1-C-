#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "What is the current temperature in Fahrenheit? ";
    cin >> temp;

    double conversion = (temp - 32) * 5 / 9;

    cout << "\n";
    cout << "The temperature is " << conversion << " Degrees Celcius";
    return 0;
}