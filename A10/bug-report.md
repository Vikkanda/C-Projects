# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string fileName,line; /*Variable needs to be declared*/
    int lines,counter = 0;

```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/Q7_A10/main.cpp:17:29: error: variable 'std::ifstream infile' has initializer but incomplete type
     ifstream infile(fileName);

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**



4. **How to correct the bug?**



5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string fileName,line; /*Variable needs to be declared*/
    int lines,counter = 0; ifstream infile(fileName);
    if (infile)
    {
       cout << "File does not exist!";
       exit(1);

```

6. **What is the take-away message from this bug?**



---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
 ifstream infile(fileName);
    if (infile)
    {
       cout << "File does not exist!";
       exit(1);

```

2. **What bug does the original code have?**



3. **What misunderstanding of C++ concepts lead you to this incorrect code?**



4. **How to correct the bug?**



5. **The corresponding bug-free code or code snippet is:**

```
 ifstream infile(fileName);
    if (!infile)
    {
       cout << "File does not exist!";
       exit(1);

```

6. **What is the take-away message from this bug?**



---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
ifstream infile >> (fileName);
    if (!infile)

```
2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/Q7_A10/main.cpp:18:21: error: expected initializer before '>>' token
     ifstream infile >> (fileName);

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**


4. **How to correct the bug?**



5. **The corresponding bug-free code or code snippet is:**

```
ifstream infile(fileName);
    if (!infile)
```

6. **What is the take-away message from this bug?**

