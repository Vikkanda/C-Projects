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

```

2. **What bug does the original code have?**


3. **What misunderstanding of C++ concepts lead you to this incorrect code?**


4. **How to correct the bug?**


5. **The corresponding bug-free code or code snippet is:**

```

```

6. **What is the take-away message from this bug?**

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```


```

2. **What bug does the original code have?**


3. **What misunderstanding of C++ concepts lead you to this incorrect code?**


4. **How to correct the bug?**


5. **The corresponding bug-free code or code snippet is:**

```

```

6. **What is the take-away message from this bug?**


