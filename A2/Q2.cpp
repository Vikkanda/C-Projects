//Q32. Write a C++ program to enable the conversion between US dollars and Canadian Dollars. 
//The program will first ask for user input to decide whether the user would like to convert USD to CAD, or the other way around. 
//Then the program will ask for user input to indicate the amount of money in the original currency, and then output the converted amount in the targeted currency.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double conversion{1.32};
    double USD {};
    double CAD {};
    double USDtoCAD {};
    double CADtoUSD {};
    int selection {};
    
        cout << "Welcome to the currency converter/n";
        cout << "Please select one of the following options:\n\n";
        cout << "1 - USD to CAD conversion\n";
        cout << "2 - CAD to USD conversion\n\n";

        cout << "Please enter either 1 or 2 below:\n\n";

            cin >> selection;

    switch (selection) {
    
        case 1:
    
            cout << "\nPlease enter the amount of USD to convert.\n\n";
                cin >> USD;
                    cout << fixed << setprecision(2);
                    USDtoCAD = USD * conversion;
            cout << "\nYour USD currency equates to $" << USDtoCAD << " in CAD currency.\n\n";
                break;
   
        case 2:
      
            cout << "\nPlease enter the amount of CAD to convert.\n\n";
                cin >> CAD;
                    cout << fixed << setprecision(2);
                    CADtoUSD = CAD / conversion;
            cout << "\nYour CAD currency equates to $" << CADtoUSD << " in USD currency.\n\n";
                break;
        
        default:
            cout << "\nYou selected an invalid entry.\n\n";
    }
}
//Added in an additional header file to be able define my currency coversion to 2 digits.
