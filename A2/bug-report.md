# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>

using namespace std;

int main() {
    
    int selection {1,2,3,4};
      cout << "Which formula do you want to see?\n\n";
      cout << "1. Area of a circle\n";
      cout << "2. Area of a rectangle\n";
      cout << "3. Area of a cylinder\n";
      cout << "4. None of them!\n\n";
      cout << "Enter your selection from 1 - 4 below:\n\n"; 
      
        cin >> selection;
 
    switch (selection); {
        
        case 1:
                cout << "\nPi times radius squared\n\n";
                    break;
        case 2:
                cout << "\nLength times width\n\n";
                    break;
        case 3:
                cout << "\nPi times radius squared times height\n\n";
                    break;
        case 4:
                cout << "\nWell okay then, good bye!\n\n";
                    break;
        default:
                cout << "\nNot good with numbers, eh?\n\n";
    } 
}
```

2. **What bug does the original code have?**

One of the bugs is specifying that my "cout" is not declared.

C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:9:5: error: 'cout' was not declared in this scope
     cout << "The total distance travelled is " << Distance_variable << end;
     ^~~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought that CodeLite would understand cout funtions as they are a part of the program. This was a linker error where the linker was having trouble linking the object files together to create an executable.

4. **How to correct the bug?**

I found that "Namespace" is missed in my code which is why "cout" was coming up as "not declared." I found that "cout" in itself is part of a library and serves a specific funtion and is defined under the "Namespace" library. I also found that "cout" could technically be defined differently in other libraries which would not get me my desired result.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;

int main() {
    
    int selection {};
      cout << "Which formula do you want to see?\n\n";
      cout << "1. Area of a circle\n";
      cout << "2. Area of a rectangle\n";
      cout << "3. Area of a cylinder\n";
      cout << "4. None of them!\n\n";
      cout << "Enter your selection from 1 - 4 below:\n\n"; 
      
        cin >> selection;
 
    switch (selection); {
        
        case 1:
                cout << "\nPi times radius squared\n\n";
                    break;
        case 2:
                cout << "\nLength times width\n\n";
                    break;
        case 3:
                cout << "\nPi times radius squared times height\n\n";
                    break;
        case 4:
                cout << "\nWell okay then, good bye!\n\n";
                    break;
        default:
                cout << "\nNot good with numbers, eh?\n\n";
    } 
}

```

6. **What is the take-away message from this bug?**

I learned that I should always define a library when referencing certain variables. I should always also double check that I have referenced the correct library as it may lead to unexpected outcomes.

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

using namespace std;

int main() {
    
    int selection {};
      cout << "Which formula do you want to see?\n\n";
      cout << "1. Area of a circle\n";
      cout << "2. Area of a rectangle\n";
      cout << "3. Area of a cylinder\n";
      cout << "4. None of them!\n\n";
      cout << "Enter your selection from 1 - 4 below:\n\n"; 
      
        cin >> selection;
 
    switch (selection); {
        
        case 1:
                cout << "\nPi times radius squared\n\n";
                    break;
        case 2:
                cout << "\nLength times width\n\n";
                    break;
        case 3:
                cout << "\nPi times radius squared times height\n\n";
                    break;
        case 4:
                cout << "\nWell okay then, good bye!\n\n";
                    break;
        default:
                cout << "\nNot good with numbers, eh?\n\n";
    } 
}

```

2. **What bug does the original code have?**

One of the bugs is specifying that my "end" was not declared in the scope.

C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:9:72: error: 'end' was not declared in this scope
     cout << "The total distance travelled is " << Distance_variable << end;
                                                                        ^~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was overtly confident about my code and didn't double check for spelling errors. I made a syntax error by making a typo in my code. 

4. **How to correct the bug?**

This code is corrected by fixing the spelling from "end" to "endl" while also double checking the code. 

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;

int main() {
    
    int selection {};
      cout << "Which formula do you want to see?\n\n";
      cout << "1. Area of a circle\n";
      cout << "2. Area of a rectangle\n";
      cout << "3. Area of a cylinder\n";
      cout << "4. None of them!\n\n";
      cout << "Enter your selection from 1 - 4 below:\n\n"; 
      
        cin >> selection;
 
    switch (selection) {
        
        case 1:
                cout << "\nPi times radius squared\n\n";
                    break;
        case 2:
                cout << "\nLength times width\n\n";
                    break;
        case 3:
                cout << "\nPi times radius squared times height\n\n";
                    break;
        case 4:
                cout << "\nWell okay then, good bye!\n\n";
                    break;
        default:
                cout << "\nNot good with numbers, eh?\n\n";
    } 
}
```

6. **What is the take-away message from this bug?**

The main take-away from this error is to always douuble check the code for spelling errors as it can cause the compiler to get confused in what is going on. This one error may also lead to the system identying other errors and fixing the first error may resolve the consequent errors.

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double conversion{1.32};
    double USD {};
    double CAD {};
    double USDtoCAD {};
    double CADtoUSD {};
    int selection {};
    USDtoCAD = USD * conversion;
    CADtoUSD = CAD / conversion;

        cout << "Welcome to the currency converter/n";
        cout << "Please select one of the following options:\n\n";
        cout << "1 - USD to CAD conversion\n";
        cout << "2 - CAD to USD conversion\n\n";

        cout << "Please enter either 1 or 2 below:\n\n";

            cin >> selection;

    switch (selection) {
    
        case 1:
    
            cout << "\nPlease enter the amount of USD to convert.\n\n";
                cin >> USD;
                    cout << fixed << setprecision(2);
            cout << "\nYour USD currency equates to $" << USDtoCAD << " in CAD currency.\n\n";
                break;
   
        case 2:
      
            cout << "\nPlease enter the amount of CAD to convert.\n\n";
                cin >> CAD;
                    cout << fixed << setprecision(2);
            cout << "\nYour CAD currency equates to $" << CADtoUSD << " in USD currency.\n\n";
                break;
        
        default:
            cout << "\nYou selected an invalid entry.\n\n";
    }
}
```

2. **What bug does the original code have?**

One of the bugs is specifying that there was ";" expected, however it can't find it.

  C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:11:15: error: expected ';' before '}' token
     return (0)
               ^
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I faced a compiler error and missed adding a semi colon to end the final line of the code after "return (0)." This is essentially a syntax error where there was a mistake in the structure of my code

4. **How to correct the bug?**

This bug is easily corrected by adding a semi colon after the "return (0)" line.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double conversion{1.32};
    double USD {};
    double CAD {};
    double USDtoCAD {};
    double CADtoUSD {};
    int selection {};
    
        cout << "Welcome to the currency converter/n";
        cout << "Please select one of the following options:\n\n";
        cout << "1 - USD to CAD conversion\n";
        cout << "2 - CAD to USD conversion\n\n";

        cout << "Please enter either 1 or 2 below:\n\n";

            cin >> selection;

    switch (selection) {
    
        case 1:
    
            cout << "\nPlease enter the amount of USD to convert.\n\n";
                cin >> USD;
                    cout << fixed << setprecision(2);
                    USDtoCAD = USD * conversion;
            cout << "\nYour USD currency equates to $" << USDtoCAD << " in CAD currency.\n\n";
                break;
   
        case 2:
      
            cout << "\nPlease enter the amount of CAD to convert.\n\n";
                cin >> CAD;
                    cout << fixed << setprecision(2);
                    CADtoUSD = CAD / conversion;
            cout << "\nYour CAD currency equates to $" << CADtoUSD << " in USD currency.\n\n";
                break;
        
        default:
            cout << "\nYou selected an invalid entry.\n\n";
    }
}
```

6. **What is the take-away message from this bug?**

I have to make sure sure each of my lines ends off with a semi colon to indicate the line ending. This can lead to various issues in my code if not rectified. It is easy to forget adding the correct line terminations at both the beginning and end of written code.
