#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ******** prototypes ********
void header();
void userMenu();
void sellCoffee(int, int&, int&, double&, int&, double&, int&, double&, double&);
void cupStats(int, double, int, double, int, double);
void totalSold(int);
void totalProfit(double);

// Global Variables
double largeCoffeCost = 2.00;
double mediumCoffeeCost = 1.90;
double smallCoffeeCost = 1.75;
int largeCupWeight = 15;
int mediumCupWeight = 12;
int smallCupWeight = 9;


// ******** main function ********
int main()
{
    // Local Variables ****
    int largeCups = 0;
    double lPrice = 0;
    int mediumCups = 0;
    double mPrice = 0;
    int smallCups = 0;
    double sPrice = 0;
    int totalWeight = 0;
    int choice;
    int size;
    double profit = 0;
    // Header Function Call **
    header();
    // Do While loop allowing interactivity with menu
    do
    {
        // userMenu function call **
        userMenu();
        cin >> choice;
        cout << endl;
        // Switch case handling user-interaction
        switch (choice)
        {
            //sell coffee
        case 1:
           sellCoffee(size,totalWeight, largeCups, lPrice, mediumCups, mPrice, smallCups, sPrice, profit);
            break;
            // stats on coffee sold
        case 2:
            cupStats(largeCups, lPrice, mediumCups, mPrice, smallCups, sPrice);
            break;
            //how much weight in coffee sold
        case 3:
            totalSold(totalWeight);
            break;
            // breakdown of money made and profit after taxes
        case 4:
            totalProfit(profit);
            break;
        case 5:
        cout << endl;
        cout << setfill('*') << setw(35) << "*" << endl << endl;
        cout << " Exiting Application Good Bye! " << endl << endl;
        cout << setfill('*') << setw(35) << "*" << endl;
        cout << endl;
        break;

        default:
        cout << endl;
        cout << setfill('*') << setw(35) << "*" << endl << endl;
        cout << "Invalid Selection Please Try Again." << endl << endl;
        cout << setfill('*') << setw(35) << "*" << endl;
        cout << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}
// ******** functions ********
// a function to print the program header
void header() {
    cout << setfill('*') << setw(35) << "*" << endl;
    cout << setfill(' ') << setw(12) << " " << "Sam's Shop" << endl;
    cout << setfill('*') << setw(35) << "*" << endl;
}
// a function to show the user selection menu
void userMenu() {
    cout << setfill(' ') << setw(5) << " " << " 1) Sell a Coffee " << endl;
    cout << setfill(' ') << setw(5) << " " << " 2) Show Number of Cups Sold of each Size " << endl;
    cout << setfill(' ') << setw(5) << " " << " 3) Show Total Amount of Coffee Sold " << endl;
    cout << setfill(' ') << setw(5) << " " << " 4) Show Total Profit " << endl;
    cout << setfill(' ') << setw(5) << " " << " 5) Quit Program " << endl;
}
// a function to sell coffee (this function will allow the user to select the size)
void sellCoffee(int size,int& tW, int& lC, double& lP, int& mC, double& mP, int& sC, double& sP, double& tP) {
    cout << endl;
    cout << "Select Size" << endl;
    cout << "1) Large" << endl;
    cout << "2) Medium" << endl;
    cout << "3) Small" << endl;
    cout << endl;
    cin >> size;
    cout << endl;
    switch (size)
    {
    case 1:
        lC++;
        lP += largeCoffeCost;
        tW += largeCupWeight;
        break;
    case 2:
        mC++;
        mP += mediumCoffeeCost;
        tW += mediumCupWeight;
        break;
    case 3:
        sC++;
        sP+= smallCoffeeCost;
        tW += smallCupWeight;
        break;
    default:
        cout << "Invalid Selection. Please select 1, 2 or 3." << endl;
        break;
    }
     
    tP = (lP + mP + sP);
}
// a function to show the number of cups of each size sold, and total money of each size sold.
void cupStats(int lC, double lP, int mC, double mP, int sC, double sP) {
cout << setfill('*') << setw(35) << "*" << endl;
cout << endl << endl;
cout << "** Coffee Sales Breakdown **" << endl;
cout << "Large Cups: " << lC << " Total Profit - $" << lP << endl;
cout << "Medium Cups: " << mC << " Total Profit - $" << mP << endl;
cout << "Small Cups: " << sC << " Total Profit - $" << sP << endl;
cout << endl << endl;
cout << setfill('*') << setw(35) << "*" << endl;
}
// a function to show the total amount of coffee sold,
void totalSold(int tw) {
    cout << setfill('*') << setw(35) << "*" << endl;
    cout << endl;
    cout << "Total Weight Sold: " << tw << " ounces" << endl;
    cout << endl;
    cout << setfill('*') << setw(35) << "*" << endl;
}
// a function to show the total money made (assume the profit on all sales is 25%.)
void totalProfit(double tP) {
    double t = tP * .25;
    double aT = tP - t;
    cout << setfill('*') << setw(35) << "*" << endl << endl;
    cout << "Made: $" << tP << endl;
    cout << "Taxes: -$" << t << endl;
    cout << "Profit: $" << aT << endl; 
    cout << endl << endl;
    cout << setfill('*') << setw(35) << "*" << endl << endl;
}