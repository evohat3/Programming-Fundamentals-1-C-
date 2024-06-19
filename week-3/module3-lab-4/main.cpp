// Name: 
// Course: 
// Professor: 
// project name: 
// Date: 
#include <iostream>
using namespace std;
int main() {
 int boxLength;
 int boxHeight;
 string boxType;

 cout << "Enter box length: " << endl;
 cin >> boxLength;
 cout << "Enter box height: " << endl;
 cin >> boxHeight;

 for (int i = 0; i < boxHeight; i++) {
    for (int j = 0; j < boxLength; j++) {
       cout << "# ";
       break;
    }
    cout << endl;
 }
 
    return 0;
}