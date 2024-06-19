// Name:  Nigel Poblete 
// Course: COSC 1336
// Professor: Professor Percy
// project name: Box or rectangle? 
// description: This is a terminal based program that will take in
// a user's preferred box width and height and will return the amount of characters needed
// to fulfill the height and width of the box and determining if it is a square or a rectangle.
// Date: 06/19/24

#include <iostream>
using namespace std;
int main() {
char character;
int boxWidth;
int boxHeight;

// user input section
cout << "Enter a single character to use: ";
cin >> character;
cout << "Enter box width: ";
cin >> boxWidth;
cout << "Enter box height: ";
cin >> boxHeight;
cout << endl;
// display user input
cout << "Box Width: " << boxWidth << endl;
cout << "Box Height: " << boxHeight << endl;
cout << endl;
// display square or rectangle
if (boxWidth != boxHeight) {
    cout << endl;
    cout << "This is a rectangle! " << endl;
} else {
    cout << endl;
    cout << "this is a square! " << endl;
}
// Nested for loop using height and width measurements
for (int i = 0; i < boxHeight; i++) {
    for (int j = 0; j < boxWidth; j++) {
        cout << " " << character << " ";
    }
        cout << endl;
    }

    return 0;
}