#include <iostream>
using namespace std;
bool PrimePositive(int value);

int main() {
   int value;
   bool PrimeNumber;
   
        cout << "Enter any postive number" << endl;
        cin >> value;
        
    if(value<0) {
        cout << "\nPlease enter a positive number" << endl;
    cin >> value; }
            else
                cout << "Good number selection" << endl;
        
        cout << "\n*****************************************************************************" << endl;
        cout << "\nUser Case" << endl;
  
   PrimeNumber = PrimePositive(value);
   
   if(PrimeNumber==true)
        cout << "\n" << value << " is a prime number";
            else
                cout << "\n" << value << " is not a prime number";
        
        cout << "\n*****************************************************************************" << endl;
        cout << "\nTest case 1" << endl;

            if(PrimePositive(7) == true)
                cout << "\n" << 7 << " is a prime number";
                    else
                        cout << "\n" << 7 << " is not a prime number";
        
        cout << "\n*****************************************************************************" << endl; 
        cout << "\nTest case 2" << endl;

            if(PrimePositive(10) == true)
                cout << "\n" << 10 << " is a prime number";
                    else
                        cout << "\n" << 10 << " is not a prime number";
        cout << "\n*****************************************************************************" << endl; 
}
bool PrimePositive(int value){
    bool PrimeNumber=true;
        for(int i = 2; i <= value/2; i++) {
            if(value % i == 0) {
                PrimeNumber = false;
            break;
    }
}
return PrimeNumber;

}
