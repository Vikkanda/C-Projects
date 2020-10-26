#include <iostream>
#include <iomanip> /*Require the iomanip to access the set precission function */
#include "Payroll.h" /*Including header file that is local to this project*/
#include <string>

using namespace std;

int main(){
    cout << "\n*****************************************************************************" << endl;
    cout << "GROSS PAY CALCULATOR(7 employees)";
    cout << "\n*****************************************************************************" << endl;
    PayRoll *employee = new PayRoll[7]; /*Using the new operator to denote a request for memory allocation*/
    
    int hoursWorked;
    double rateofPay;
    
    cout << "\nEnter the pay rate and the hours worked for the 7 employees!" << endl;
        for(int i =0; i < 7; i++){
            cout << "\nEmployee #" << i+1 << endl;
            employee[i].set_rateofPay();  /*Accessing the.h file to run the set_rate +hour and get the input and validate the input*/
            employee[i].set_hoursWorked(); /*Accessing the.h file to run the set_rate +hour and get the input and validate the input*/
            cout << endl;
}

    cout << fixed << setprecision(2);
    cout << "\n*****************************************************************************" << endl;
    cout << "\nThe wages for the week are:\n";
        for(int i = 0; i < 7; i++){
            cout << "\nWeekly wage:" << "for Employee #" << i+1 << " is $"  << employee[i].get_weeklyPay(); /* Displaying the weekly pay for each employee through a for loop */
            cout << endl << endl;
}
return 0;
}
