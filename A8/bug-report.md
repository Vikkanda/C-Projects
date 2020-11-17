# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
public:
HogwartsStudent(string name, string enrollmentYear, string houseAffiliation) : Student(name, enrollmentYear) {
houseAffiliation = houseAffiliation;
}
```

2. **What bug does the original code have?**

             ^

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I needed to declare a 

4. **How to correct the bug?**

 public:
HogwartsStudent(string name, string enrollmentYear, string houseAffiliation) : Student(name, enrollmentYear) {
this->houseAffiliation = houseAffiliation;
}
5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
Student *students[3];
  
students[0] = student;
students[1] = kpuStudent;
students[2] = hogwartsStudent;

```

2. **What bug does the original code have?**

  C:/Users/User/Desktop/CPPProjects/Section4/A8_Q8/main.cpp:97:15: error: cannot convert 'Student' to 'Student*' in assignment
 students[0] = student;
               ^~~~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A8_Q8/main.cpp:98:15: error: cannot convert 'KpuStudent' to 'Student*' in assignment
 students[1] = kpuStudent;
               ^~~~~~~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A8_Q8/main.cpp:99:15: error: cannot convert 'HogwartsStudent' to 'Student*' in assignment
 students[2] = hogwartsStudent;

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
Student *students[3];
  
students[0] = &student;
students[1] = &kpuStudent;
students[2] = &hogwartsStudent;

```

6. **What is the take-away message from this bug?**

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
void print() {
cout << "Name: " << getName() << endl;
cout << "Campus Location: " << campusLocation << endl;

```
2. **What bug does the original code have?**

The virtual method is not called and leaves derived class to not being overidden. 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I am still new to inheritance and polymorphisms and missed understanding why I require it

4. **How to correct the bug?**

This error is corrected by adding the virtual code to the start of my foid function

5. **The corresponding bug-free code or code snippet is:**

```
virtual void print() {
cout << "Name: " << getName() << endl;
cout << "Campus Location: " << campusLocation << endl;

```

6. **What is the take-away message from this bug?**

The take away message from this is that the virtual code allows for a function to be over ridden and if it s not called then the method from the base class may be called/
