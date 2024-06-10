#include <iostream>
using namespace std;

int main() {
int grade1 = 95;
int grade2 = 86;
int grade3 = 93;
int grade4 = 73;
int grade5 = 68;

double average =  (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

cout << "Grades: " << grade1 << " " << grade2 << " " << grade3 << " " << grade4 << " " << grade5 << "\n";
cout << "Grade Average: " << average;

    return 0;
}