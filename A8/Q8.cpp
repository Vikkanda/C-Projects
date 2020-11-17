#include <iostream>
#include <string>
using namespace std;

class Student {
private:
string name;
string enrollmentYear;
  
public:
  
Student() {
  
}
  
Student(string name, string enrollmentYear) {
this->name = name;
this->enrollmentYear = enrollmentYear;
}
  
string getName() {
return name;
}
  
string getEnrollmentYear() {
return enrollmentYear;
}
  
void setName(string name) {
this->name = name;
}
  
void setEnrollmentYear(string enrollmentYear) {
this->enrollmentYear = enrollmentYear;
}
  
virtual void print() {
cout << "Name: " << name << endl;
cout << "Enrollment Year: " << enrollmentYear << endl;
}
};

class KpuStudent : public Student {
private:
string campusLocation;
  
public:
  
KpuStudent(string name, string enrollmentYear, string campusLocation) : Student(name, enrollmentYear) {
this->campusLocation = campusLocation;
}
  
string getCampusLocation() {
return campusLocation;
}
  
void setCampusLocation(string campusLocation) {
this->campusLocation = campusLocation;
}
  
virtual void print() {
cout << "Name: " << getName() << endl;
cout << "Campus Location: " << campusLocation << endl;
}
};
class HogwartsStudent : public Student {
private:
string houseAffiliation;
  
public:
HogwartsStudent(string name, string enrollmentYear, string houseAffiliation) : Student(name, enrollmentYear) {
this->houseAffiliation = houseAffiliation;
}
  
string getHouseAffiliation() {
return houseAffiliation;
}
  
void setHouseAffiliation(string houseAffiliation) {
this->houseAffiliation = houseAffiliation;
}
  
virtual void print() {
cout << "Name: " << this->getName() << endl;
cout << "House Affiliation: " << houseAffiliation << endl;
}
};

int main() {
  
Student student = Student("Vik Kanda", "2020");
KpuStudent kpuStudent = KpuStudent("Vik Kanda", "2020", "Richmond");
HogwartsStudent hogwartsStudent = HogwartsStudent("Vik Kanda", "1994", "Slytherin");
  
Student *students[3];
  
students[0] = &student;
students[1] = &kpuStudent;
students[2] = &hogwartsStudent;
  
for(int i = 0; i < 3; i++) {
students[i]->print();
}
return 0;
}
