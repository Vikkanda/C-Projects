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



C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:9:9: error: scalar object 'selection' requires one element in initializer
     int selection {1,2,3,4};
         ^~~~~~~~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

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

C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:21:9: error: case label '1' not within a switch statement
         case 1:
         ^~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:23:21: error: break statement not within loop or switch
                     break;
                     ^~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:24:9: error: case label '2' not within a switch statement
         case 2:
         ^~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:26:21: error: break statement not within loop or switch
                     break;
                     ^~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:27:9: error: case label '3' not within a switch statement
         case 3:
         ^~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:29:21: error: break statement not within loop or switch
                     break;
                     ^~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:30:9: error: case label '4' not within a switch statement
         case 4:
         ^~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:32:21: error: break statement not within loop or switch
                     break;
                     ^~~~~
C:/Users/User/Desktop/CPPProjects/Section4/A2_Q1/main.cpp:33:9: error: case label not within a switch statement
         default:
         ^~~~~~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?** 

4. **How to correct the bug?**

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

Your USD currency equates to $0.00 in CAD currency.

             
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**



4. **How to correct the bug?**


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

---
