# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#ifndef #KPUSTUDENT#
#define #KPUSTUDENT#
#include <string>
#include "STUDENT.h"
```

2. **What bug does the original code have?**

STUDENT.h:1:9: error: macro names must be identifiers
 #ifndef #STUDENT#

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I didn't realize that identifiers can not start with a digit symbol. 

4. **How to correct the bug?**

This bug is corrected by removing the number identifiers.


5. **The corresponding bug-free code or code snippet is:**

```
#ifndef KPUSTUDENT
#define KPUSTUDENT
#include <string>
#include "STUDENT.h"
```

6. **What is the take-away message from this bug?**

Identifiers must begin with any non digit identifier character or they must consist only from indentifier characters.

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include "STUDENT.h"

STUDENT::STUDENT()
{
}

STUDENT::~STUDENT()
{
}
```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/A7/STUDENT.cpp:7:10: error: expected id-expression before '~' token
 STUDENT::~STUDENT()

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

The unary complement operator is adde by default onto implementation files. I failed to clear the file when I did not need to action it.

4. **How to correct the bug?**

The code is corected by removing the file with the default snippet completely

5. **The corresponding bug-free code or code snippet is:**

```
This code is corrected by actually removing the snippet. I mistakenly left the default code generated in an implementation file.
```

6. **What is the take-away message from this bug?**

It is important to double check all the relevent files when running the compiler. When running a program in C++ there can be many errors that are gennerated for irrelevant code when working with multiple classes.

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
    cout << "Student year has been registered" << endl;
    
    return 0;
}
}
```

2. **What bug does the original code have?**

C:/Users/User/Desktop/CPPProjects/Section4/A7/main.cpp:55:2: error: expected ';' after class definition
 }

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I didn't realize that a terminating character was required at the end of the curly bracket at the end of the code as I usually end my code at return 0.

4. **How to correct the bug?**

This bug is corrected by adding a terminating character at the end of a main executable file

5. **The corresponding bug-free code or code snippet is:**

```
    cout << "Student year has been registered" << endl;
    
    return 0;
}
};
```

6. **What is the take-away message from this bug?**

The take away message from this bug is to look at the various blocks of code and understand that each one has to be terminated in order for the program to execute properly.
