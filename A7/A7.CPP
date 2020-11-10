#include <iostream>
#include "KPUSTUDENT.h"
using namespace std;

int main ()
{
    cout << "Student File Class" << endl;
    KPUSTUDENT Student;
    cout << "Data needs to be entered" << endl;
    
    cout << "Student Name" << STUDENT.getStudentName() << endl;
    cout << "Student Number" << STUDENT.getStudentNumber() << endl;
    cout << "Student Age" << STUDENT.getStudentAge() << endl;
    
    cout << "Please enter the Student Name" << endl;
    string name();
    STUDENT.setStudentName(name)
    cin >> name;
    cout << "Name has been registered" << endl;
    
    cout << "Please enter Student Number" << endl;
    string number();
    STUDENT.setStudentNumber(number)
    cin >> number;
    cout << "Student number has been registered" << endl;
    
    cout << "Please enter the student age" << endl;
    int age();
    STUDENT.setStudentAge(age)
    cin >> age;
    cout << "Student age has been registered" << endl;
    
    cout << "Please entered the student major" << endl;
    string major();
    KPUSTUDENT.setMajor(major)
    cin >> major;
    cout << "Student major has been registered" << endl;
    
    cout << "Please enter the student campus" << endl;
    string campus();
    KPUSTUDENT.setCampus(campus)
    cin >> campus;
    cout << "Student campus has been registered" << endl;
    
    cout << "Please enter the student year" << endl;
    int year();
    KPUSTUDENT.setYear(year)
    cin >> year;
    cout << "Student year has been registered" << endl;
    
    return 0;
}
};
