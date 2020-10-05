
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>


using namespace std;

int main() {
       string secretmessage;
       string word; 
       string encryptedmessage;                                
    
    cout << "Please enter message to encrypt:\n" << endl;                            
    getline(cin, secretmessage);                                                     
    
    for(int i=0;i<secretmessage.length();i++){        
        if(secretmessage[i] == ' '){                                            // Trying to action my loop on the spaces but it did not work      
            encryptedmessage += word.substr(1, word.length) + word[0] + "KPU";  // Kept encoutering errors on this statement                                                
        }
        else{                                                                   
            encrpted_message[i] = toupper(encrpted_message[i]);                / trying to use the toupper statement on my encrypted message for each iteration of character (i)          
        }
    }
    cout << "Encrypted Message" << encryptedmessage;                                          
    
    return 0;


}
