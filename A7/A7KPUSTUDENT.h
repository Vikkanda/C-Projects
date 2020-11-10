#ifndef KPUSTUDENT
#define KPUSTUDENT
#include <string>
#include "STUDENT.h" // Base class: STUDENT.h

class KPUSTUDENT : public STUDENT.h
{
private:
    string Major;
    string Campus;
    int Year;

public:
    KPUSTUDENT() : STUDENT() 
    {
        Major = "";
        Campus = "";
        Year = 0;
    }
    
    KPUSTUDENT(string m, string c, int y)
    
    string GetMajor() const{
        return Major;
    } 
    string GetCampus() const{
        return Campus;
    }
    int GetYear() const{
        return Year;
    }

    void setMajor(string m){
    Major = m;
    }
    void setCampus(string c){
    Campus = c;
    }
    Void setYear(int y){
    Year = y;
    }
};

#endif // #KPUSTUDENT#
