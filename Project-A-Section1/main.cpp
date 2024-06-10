//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Name: Nigel Poblete
//  Modified Date  and Purpose/Description
/*     06/09/2024
        - Added Welcome Header and prompt for user's first and last name
        - Added Welcome Message to user     
*/

#include <iostream>
using  namespace std;

int main()
{
    //****** Variable section *********
    string first;
    string last;
    
    //****** Welcome Section **********
    //Output welcome header      
    cout << "************************************" << endl;
    cout << "*    Welcome Fellow Programmer!    *" << endl;
    cout << "************************************" << endl;

    //prompt user for first name and store  
    cout << "Please enter your first name: ";
    cin >> first;

    //prompt user for last name and store  
    cout << "Please enter your last name: ";
    cin >> last;

    //Output a welcome message to the user 
    cout << "Welcome to C++ progamming " << first << " " << last << "!";   
    
    return 0;
}
