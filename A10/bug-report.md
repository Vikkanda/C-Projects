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

I missed adding my Fstream header which is fundemental to create, write, and read information from files

4. **How to correct the bug?**

This error is corrected by adding the fstream header.

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

The takeaway message is to always include the filestream header whenever dealing with file modifications and also rememeber that fstream has the capabilities of both ofstream and ifstream.

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

The code itself ran fine, however my output was coming up incorrect 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I missed adding the not equal exclamation mark infront of the file. This was a flow error which I missed while writing.

4. **How to correct the bug?**

The bug is corrected by adding the not equal to operator in front of the input stream named infile 

5. **The corresponding bug-free code or code snippet is:**

```
 ifstream infile(fileName);
    if (!infile)
    {
       cout << "File does not exist!";
       exit(1);

```

6. **What is the take-away message from this bug?**

The take away message from this is to run multiple functionality tests on all program to make sure all points of the program are functional and responsive.

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

When I declared an input stream named infile I got a little confused and thought I had to use an input operator to make it read from the text file 

4. **How to correct the bug?**

This bug is actually corrected by not using an input operator at all as per below.

5. **The corresponding bug-free code or code snippet is:**

```
ifstream infile(fileName);
    if (!infile)
```

6. **What is the take-away message from this bug?**

The key take away message from this bug is that opening a file is done automatically by the streams constructor. The constructor actually takes the filemname as an indication of whether the stream is an input or output stream.
