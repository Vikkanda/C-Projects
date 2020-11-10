#ifndef STUDENT
#define STUDENT
#include <string>
using namespace std;

class STUDENT
{
    
private:
    string StudentName;
    string StudentNumber;
    int StudentAge;
    
public:
    STUDENT(){
        StudentName = "";
        StudentNumber = "";
        StudentAge = 0;
    }
    
    STUDENT(string name, string number, int age){
        StudentName = name;
        StudentNumber = number;
        StudentAge = age
    }
    
    string getStudentName() const{
        return StudentName;
    }
    string getStudentNumber(const{
        return StudentNumber;
        
    int getStudentAge() const{
        return StudentAge;
    }

    void setStudentName(string name){
        StudentName = name;
    }
    void setStudentNumber(string number){
        StudentNumber = number;
    }
    
    void setStudentAge(int age){
        StudentAge = age;
    }


};

#endif // #STUDENT#
