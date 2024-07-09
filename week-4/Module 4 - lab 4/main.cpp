// Programming 1
// main.cpp
// COSC - 1336
// Nigel Poblete
// Professor Percy
// Date: 07/01/2024
// Description: Module 4 lab 4 - Call by Reference.
#include <iostream>
using namespace std;
// prototypes ***
void swapNumbers(int&,int&);
void addXtoY(int x, int y , int& numX, int& numY);
int main() {
    int numOne = 3;
    int numTwo = 4;
    int x = 8;
    int y = 30;
    int numX = 0;
    int numY = 0;
    cout << " *** Before Swap ***" << endl; 
    cout << "numOne = " << numOne << endl;
    cout << "numTwo = " << numTwo << endl;
    cout << "********************" << endl;
    swapNumbers(numOne,numTwo);
    cout << " *** After Swap ***" << endl;
    cout << "numOne = " << numOne << endl;
    cout << "numTwo = " << numTwo << endl;
    cout << "*******************" << endl;
    cout << "*** before addXtoY ***" << endl;
    cout << "x = " << numX << endl;
    cout << "y = " << numY << endl;
    cout << "*******************" << endl;
    cout << "*** After addXtoY ***" << endl;
    addXtoY(x,y,numX,numY);
    cout << "x = " << numX << endl;
    cout << "y = " << numY << endl; 
    return 0;
}
// function 1.
void swapNumbers(int& numOne, int& numTwo) {
    int tempNum = numOne;
    numOne = numTwo;
    numTwo = tempNum;
}
// function 2.
void addXtoY(int x, int y, int& numX, int& numY) {
    x += y;
    numX = x;
    numY = y;
}