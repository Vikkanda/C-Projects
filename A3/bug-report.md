# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
            if (average_p > average_b) {
            cout << ((average_p > average_b) ?"The student studied more programming" : "The student studied more biology") << endl << endl;
            } else
            cout << "Student " << student << " spent an equal amount of time studying for both subjects" << endl << endl;
```

2. **What bug does the original code have?**

Thee program ran fine, however there was a major flaw where every execution resulted in showing that the students worked an equal amount of hours on both subjects regardless of the inputs

3. **What misunderstanding of C++ concepts lead you to this incorrect code?** 

I went with the though process that less code was better, however in this case I missed considering that when using conditional operators - It is a one or the other statement. I never considered that the third option of "Equal hours" would lead to a flaw in my code.

4. **How to correct the bug?**

This code is better reflected in a different statement entirely. I have removed the conditional operators and replaced with a if and if else statement as it is bette suited.

5. **The corresponding bug-free code or code snippet is:**

```
        if (average_p > average_b) {
            cout << "The student studied more programming" << endl << endl;
        } else if (average_p < average_b) {
            cout << "The student studied more biology" << endl << endl;
        } else
            cout << "Student " << student << " spent an equal amount of time studying for both subjects" << endl << endl;
        cout << "************************************************************************************" << endl;
        }
	}
```

6. **What is the take-away message from this bug?**

The main take away message for this issue is to lay out the problem in terms of logic and not just try and focus on output. My focus on simplifying the output led me to make this error.

---
# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
     string secretmessage {};
     string a1 = "I";
     string a2 = secretmessage.substr(2,4);
     string a3 = secretmessage.substr(7,2);
     string a4 = secretmessage.substr(10,7);
     string word = "KPU";
     string s1, s2, s3, s4;
    
    string encrpted_message {};
    
    cout << "Please enter message to encrypt" << endl;
    getline(cin,secretmessage);
```

2. **What bug does the original code have?**

The code has the following bug:

terminate called after throwing an instance of std::out of range
             
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was approaching this problem outside of an for loop statement. I was trying to initialize variables for every signle word and deconstuct the expected entry. No new entry would have worked with this approach.

4. **How to correct the bug?**

This bug is corrected by not trying to inialize an infinite number of variables but to actually leave open string variables that will be filled in the for loop statement.

5. **The corresponding bug-free code or code snippet is:**

```
int main() {
       string secretmessage;
       string word; 
       string encryptedmessage;                                
    
    cout << "Please enter message to encrypt:\n" << endl;                            
    getline(cin, secretmessage);   
```

6. **What is the take-away message from this bug?**

In this specific case it is better to have references to all the available functions. I was still uncomfortable with nested for statements which I will need to work on as the code gets more complicated

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
   for(int i=0;i<secretmessage.length();i++){        
        if(secretmessage[i] == ' '){                                                
            encryptedmessage += word.substr(1, word.length) + word[0] + "KPU";                                                   
        }
        else{                                                                   
            encrpted_message[i] = toupper(encrpted_message[i]);                          
        }
    }
```

2. **What bug does the original code have?**
   C:/Users/User/Desktop/CPPProjects/Section4/Assessement/main.cpp:18:18: warning: comparison of integer expressions of different signedness: 'int' and     'std::__cxx11::basic_string<char>::size_type' {aka 'long long unsigned int'} [-Wsign-compare] for(int i=0;i<secretmessage.length();i++){
                                            
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I don't quite understand the how unassigned characters work in an for loop statement. With the character literals being empty. I was having trouble grasping how this specific statement fit together. I went beyond udemy and looked through many resources but couldn't quite figure it out.

4. **How to correct the bug?**

I wasn't quite sure how to correct this bug. I wasn't able to mix up the string characters properly, but I was able to figure out how to make the statement all capitals which was part of the assignment goal.

5. **The corresponding bug-free code or code snippet is:**

```
for(int i=0;i<secretmessage.length();i++){   
  if(isalpha(encrpted_message[i]))
  encrpted_message[i] = toupper(encrpted_message[i]);
```

6. **What is the take-away message from this bug?**

The take away message for me is to work more on C String. I had an extremely difficult time and spent countless hours just trying to figure this out. Even through this I was unable to figure it out. I kept encountering complex code which I did not understand online - I tried learning as much as I could with my current understanding.

---
