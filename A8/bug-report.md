# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
public:
HogwartsStudent(string StudentName, string Year, string house) : Student(StudentName, Year) {
house = house;
}

```

2. **What bug does the original code have?**

The "This" pointer in this syntax was missed which was causing an issue of not pointing the house that was declared.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Pointers are not required in normal contexts and are only required after they hae been over ridden which caused this error

4. **How to correct the bug?**

This code is corrected by adding the "This" pointer into the block of code.

5. **The corresponding bug-free code or code snippet is:**

```
public:
HogwartsStudent(string StudentName, string Year, string house) : Student(StudentName, Year) {
this->house = house;
}

```

6. **What is the take-away message from this bug?**

The key message is to go over the code and make sure variables are not overridden and if they are then make sure add pointers to the correct references in the scope.

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

I mistakenly made it so my objects equaled to my variables. I missed adding the & to denote a reference to the three classes 

4. **How to correct the bug?**

The bug is corrected by adding "&" to the three classes to fix the reference.

5. **The corresponding bug-free code or code snippet is:**

```
Student *students[3];
  
students[0] = &student;
students[1] = &kpuStudent;
students[2] = &hogwartsStudent;

```

6. **What is the take-away message from this bug?**

The main take away message from this code is to utilize the correct reference operators when working with multiple classes

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
void print() {
cout << "StudentName: " << getStudentName() << endl;
cout << "Campus Location: " << campus << endl;

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
cout << "StudentName: " << getStudentName() << endl;
cout << "Campus Location: " << campus << endl;

```

6. **What is the take-away message from this bug?**

The take away message from this is that the virtual code allows for a function to be over ridden and if it s not called then the method from the base class may be called/
