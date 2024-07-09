// Programming 1 - Module 5 - Lab 1
// main.cpp
// COSC - 1336
// Nigel Poblete
// Date:7/03/24
// Description:
// A program that will take in a string and remove the vowels.
#include <iostream>
#include <string>
using namespace std;
// *** ProtoTypes ***
void stringFixer(string &);
bool checkChar(char);
// enms
enum vowels
{
    a = static_cast<char>('a'),
    e = static_cast<char>('e'),
    i = static_cast<char>('i'),
    o = static_cast<char>('o'),
    u = static_cast<char>('u')
};

enum coins
{
    halfDollar = 50,
    Quarter = 25,
    dime = 10,
    nickel = 5,
    penny = 1
};


int main()
{
    string uInput;
    string uOutput;
    cout << "Enter A String: ";
    getline(cin, uInput);

    //
    for (char &c : uInput)
    {
        c = tolower(c);
    }

    stringFixer(uInput);
    return 0;
}
// **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****   ****
// **** Create a function that takes a character as input and returns true if the character is a vowel        ****
// **** (a, e, i, o, u, both lowercase, and uppercase).                                                       ****
// **** Otherwise, it returns false.                                                                          ****
// **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****   ****
bool checkChar(char b)
{
    // switch case checks if letters are vowels.
    switch (b)
    {
    case a:
        break;
    case e:
        break;
    case i:
        break;
    case o:
        break;
    case u:
        break;
    default:
        return true;
        break;
    }
    return false;
}
// **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****   ****
// **** Create a function takes a string as input and returns a new string with all the vowels removed.       ****
// **** It should use the function you created in the previous requirement to check if a character is a vowel.****
// **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****   ****
void stringFixer(string &a)
{
    // initializing the empty string
    string newString;
    // displaying original input from the user
    cout << "Original input: " << a << endl;
    // for loop to loop the length of the input
    for (int i = 0; i < a.length(); i++)
    {
        // assigning the individual indexes as a character type variable
        char letters = a[i];
        // assigning a bool variable for the checkChar function
        bool letter = checkChar(letters);
        // logic to add the individual characters to the empty string
        if (letter != 0)
        {
            // adding the non vowels to the empty string
            newString += letters;
        }
    }
    // Displaying the new string variable which contains no vowels.
    cout << "Output: " << newString;
}
