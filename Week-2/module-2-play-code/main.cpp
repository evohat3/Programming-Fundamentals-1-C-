//Author: NVC
//Date: 5-19-2024
//Purpose - Demo of cin.ignore to clear the buffer
#include <iostream>
using namespace std;
int main() {
    int num;
    string name;
    cout << "Enter a number: ";
    cin >> num;
    // Ignore the newline character left in the buffer by cin >>
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Number: " << num << endl;
    cout << "Name: " << name << endl;
    return 0;
}

