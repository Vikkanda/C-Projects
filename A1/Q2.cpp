#include <iostream>

using namespace std;

int main() {
 
    double force_variable (172.5);
    double area_variable (27.5);
    long double pressure_variable (force_variable/area_variable);
    
    cout << "The total pressure = " << pressure_variable << endl;
    
    
    return 0;
}

