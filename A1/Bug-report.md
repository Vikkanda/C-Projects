# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>

int main() {

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << end;

    return (0)
}

```

2. **What bug does the original code have?**

One of the bugs the code is giving me is the following. It is telling me my cout is not declared.

C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:9:5: error: 'cout' was not declared in this scope
     cout << "The total distance travelled is " << Distance_variable << end;
     ^~~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought that CodeLite would understand cout funtions as they are a part of the program. 

4. **How to correct the bug?**

I found that "Namespace" is missed in my code which is why "cout" was coming up as "not declared." I found that "cout" in itself is part of a library and serves a specific funtion and is defined under the "Namespace" library. I also found that "cout" could technically be defined differently in other libraries which would not get me my desired result.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std
int main() {

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << endl;
    
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

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << end;

    return (0)
}

```

2. **What bug does the original code have?**

 
C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:9:72: error: 'end' was not declared in this scope
     cout << "The total distance travelled is " << Distance_variable << end;
                                                                        ^~~

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;
 
int main() {

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << endl;

    return (0)
}

```

6. **What is the take-away message from this bug?**

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

using namespace std;
 
int main() {

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << endl;

    return (0)
}

```

2. **What bug does the original code have?**

  C:/Users/User/Desktop/CPPProjects/Section4/A1_Q1/main.cpp:11:15: error: expected ';' before '}' token
     return (0)
               ^
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;
 
int main() {

    int Speed_variable (20);
    int Time_variable (10);
    int Distance_variable (Speed_variable*Time_variable);
    
    cout << "The total distance travelled is " << Distance_variable << endl;

    return (0);
}

```

6. **What is the take-away message from this bug?**

