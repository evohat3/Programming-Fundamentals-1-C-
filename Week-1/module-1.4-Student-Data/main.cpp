#include <iostream>
using namespace std;

int main() {
    string first;
    string last;

    double gpa;
    int age;
    bool student = true;

    cout << "Enter your First Name: ";
    cin >> first;
    cout << "Enter your Last Name: ";
    cin >> last;
    string fullname = first + " " + last;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << "Enter your Age: ";
    cin >> age;

    cout << " " << endl;
    cout << "Full Name: " << fullname << "\n";
    cout << "GPA: " << gpa << "\n";
    cout << "Age: " << age << "\n";
    cout << "Student? " << "True";


    return 0;
}