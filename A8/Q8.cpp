#include <iostream>
#include <string>
using namespace std;

class Student {
private:
string StudentName;
string Year;
  
public:
Student() {}
  
Student(string StudentName, string Year) {
this->StudentName = StudentName;
this->Year = Year;
}
  
string getStudentName() {
return StudentName;
}
  
string getYear() {
return Year;
}
  
void setStudentname(string StudentName) {
this->StudentName = StudentName;
}
  
void setYear(string Year) {
this->Year = Year;
}
  
virtual void print() {
cout << "Year of enrollment: " << Year << endl;
}
};

class KpuStudent : public Student {
private:
string Campus;
  
public:
  
KpuStudent(string StudentName, string Year, string Campus) : Student(StudentName, Year) {
this->Campus = Campus;
}
  
string getCampusLocation() {
return Campus;
}
  
void setCampusLocation(string Campus) {
this->Campus = Campus;
}
  
virtual void print() {
cout << "The location of the campus is: " << Campus << endl;
}
};
class HogwartsStudent : public Student {
private:
string house;
  
public:
HogwartsStudent(string StudentName, string Year, string house) : Student(StudentName, Year) {
this->house = house;
}
  
string getHouse() {
return house;
}
  
void setHouse(string house) {
this->house = house;
}
  
virtual void print() {
cout << "Name: " << this->getStudentName() << endl;
cout << "House is: " << house << endl;
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
