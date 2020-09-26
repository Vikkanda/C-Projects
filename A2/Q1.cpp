#include <iostream>

using namespace std;

int main() {
    
    int selection {};
      cout << "Which formula do you want to see?\n\n";
      cout << "1. Area of a circle\n";
      cout << "2. Area of a rectangle\n";
      cout << "3. Area of a cylinder\n";
      cout << "4. None of them!\n\n";
      cout << "Enter your selection from 1 - 4 below:\n\n"; 
      
        cin >> selection;
 
    switch (selection) {
        
        case 1:
                cout << "\nPi times radius squared\n\n";
                    break;
        case 2:
                cout << "\nLength times width\n\n";
                    break;
        case 3:
                cout << "\nPi times radius squared times height\n\n";
                    break;
        case 4:
                cout << "\nWell okay then, good bye!\n\n";
                    break;
        default:
                cout << "\nNot good with numbers, eh?\n\n";
    } 
}

