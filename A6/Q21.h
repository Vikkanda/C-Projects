#ifndef _PAYROLL_H_ /*Include gaurd to ensure the compiler will process file once*/
#define _PAYROLL_H_ /*Include gaurd to ensure the compiler will process file once*/
#include <iostream>
using namespace std;

class PayRoll
{
    private:
        double hoursWorked;
        double rateofPay;
        double weeklyPay;
    
    public:

    PayRoll(){
        hoursWorked = 0.0;
        rateofPay = 0.0;
        weeklyPay = 0.0;
}
    PayRoll(double hours, double rate) { /*Overloading the payroll constructor*/
        hoursWorked = hours;
        rateofPay = rate;
        weeklyPay = hoursWorked*rateofPay;
}
    double get_hoursWorked() const{
        return hoursWorked;
}
    double get_rateofPay() const{ 
    return rateofPay;
}
    double get_weeklyPay() const{
    return weeklyPay;
}
    void set_hoursWorked(){ /*Declaring inline*/
        double hours;
            cout << "Hours: ";
            cin >> hours;

            while(hours < 0 || hours > 60){ /*Having the input validation being done here instead of in a seperate input validation file*/
                cout << "Please enter weekly hours between 0 and 60";
                cout << "Hours: ";
                cin >> hours;
}
                    hoursWorked = hours;
                    weeklyPay = hoursWorked*rateofPay;
}

    void set_rateofPay() { /*Declaring inline*/
        double rate;
            cout << "Pay rate: $";
            cin >> rate;
    
            while (rate <=0) { /*Having the input validation being done here instead of in a seperate input validation file*/
                cout << "Please enter a pay rate higher than $0";
                cout << "Pay rate: ";
                cin >> rate;
}
                    rateofPay = rate;
                    weeklyPay = hoursWorked*rateofPay;
}
};

#endif // _PAYROLL_H_
