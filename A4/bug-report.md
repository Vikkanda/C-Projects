# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp

#include <iostream>
using namespace std;
void NumberArray(int[a], int, int);

int main() {

    int sizeA{};
    int valueA{};
    int arr[sizeA]
    


```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/ReviewW5/main.cpp:3:22: error: 'a' was not declared in this scope
 void NumberArray(int[a], int, int);

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I initialied an array as a function header when I should have not defined it.

4. **How to correct the bug?**

This bug is corrected by leaving the function unitialized.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
void NumberArray(int[], int, int);

int main() {

    int sizeA{};
    int valueA{};
    int arr[sizeA];
```

6. **What is the take-away message from this bug?**

The take away message from this report is to leave the function prototypes intialized as they have to be declared at the end of functions.

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
PrimePositive(int value);

```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/ReviewW5_2/main.cpp:21:18: error: 'PrimePositive' was not declared in this scope
    PrimeNumber = PrimePositive(value);

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I mistakenly defined a function prototype without defining that it was a bool variable.

4. **How to correct the bug?**

The bug is corrected by defining that it is a bool in the funtion status before main.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
bool PrimePositive(int value);

```

6. **What is the take-away message from this bug?**

The take away message is to always note to define all the functional headers and prototypes before a function executes.

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
bool PrimePositive(int value){
    bool PrimeNumber=true;
        for(int i = 2; i <= value/2; i++) {
            if(value % i == 0) {
                PrimeNumber = false;
            break;
    }
}
}
```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/ReviewW5_2/main.cpp:55:1: warning: no return statement in function returning non-void [-Wreturn-type]
 }
 ^

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I missed adding a return statement to my function definition. I now know to add this in there.
4. **How to correct the bug?**

This bug is corrected by adding a return function to the final definition of the return statement.

5. **The corresponding bug-free code or code snippet is:**

```
bool PrimePositive(int value){
    bool PrimeNumber=true;
        for(int i = 2; i <= value/2; i++) {
            if(value % i == 0) {
                PrimeNumber = false;
            break;
    }
}
return PrimeNumber;

}

```

6. **What is the take-away message from this bug?**

The take away message from the bug is to always define a return statement for defined functions at the end of a function

