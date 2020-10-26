# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;

class Cylinder(){
```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/Week7Trial/main.cpp:4:16: error: expected unqualified-id before ')' token
 class Cylinder(){

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I initially tried defining some of my key variables within the class member function like a funtional prototype.

4. **How to correct the bug?**

This bug is corrected by removing the post fix operators from the class function.


5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

class Cylinder{
```

6. **What is the take-away message from this bug?**

I have to understand that a class member defined initially has acess to all the other members within it. A class member function can't be defined off the get go.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include "Payroll.h"
#include <iostream>
using namespace std;

class PayRoll {
    void set_hoursWorked(){ 
        double hours;
            cout << "Hours: ";
            cin >> hours;

```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/Week7Q2/Payroll.cpp:5:7: error: redefinition of 'class PayRoll'
 class PayRoll {

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was trying to add the input validation in the implementation file and was having issues with redefinition of the Payroll class. I was trying to make the code more complicated by utilizing all the files talked about in the udemy file

4. **How to correct the bug?**

I corrected this file by simplifying how I tackled this problem. I conducted the input validation in the .h file to resolve this. When my input validation was declared inline. It helped in simplifying the layers of the code.

5. **The corresponding bug-free code or code snippet is:**

```
void set_hoursWorked(){ /*Declaring inline*/
        double hours;
            cout << "Hours: ";
            cin >> hours;

            while(hours < 0 || hours > 60){ /*Having the input validation being done here instead of in a seperate input validation file*/
                cout << "Please enter weekly hours between 0 and 60";
                cout << "Hours: ";
                cin >> hours;
```

6. **What is the take-away message from this bug?**

The main take away message from this bug is to look for the easiest and simplest way to solve a problem and not over complicate everything. Breaking down into steps is the answer. 

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
int main(){
    cout << "\n*****************************************************************************" << endl;
    cout << "GROSS PAY CALCULATOR(7 employees)";
    cout << "\n*****************************************************************************" << endl;
    PayRoll *employee = PayRoll[7]; 
```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/Week7-2/main.cpp:12:32: error: expected primary-expression before '[' token
     PayRoll *employee = PayRoll[7]; /*Using the new operator to denote a request for memory allocation*/

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was trying to modify the memory of the array when it is something that is fixed.

4. **How to correct the bug?**

The bug is corrected by utilizing a new operator before the the array is initialized to 7.

5. **The corresponding bug-free code or code snippet is:**

```
int main(){
    cout << "\n*****************************************************************************" << endl;
    cout << "GROSS PAY CALCULATOR(7 employees)";
    cout << "\n*****************************************************************************" << endl;
    PayRoll *employee = new PayRoll[7]; /*Using the new operator to denote a request for memory allocation*/

```

6. **What is the take-away message from this bug?**

The take away message from this bug is to look at functions and how to modify them to get the outcome desired. In this case the new operator before the array denoted a request for new memory allocation.
