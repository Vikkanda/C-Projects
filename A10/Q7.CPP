#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string fileName,line; /*Variable needs to be declared*/
    int lines,counter = 0;

        cout<<"Enter file name: ";
            cin>>fileName;  /* User needs to input the file name of the TXT*/
        
        cout<<"Enter an integer to read number of lines: ";
        cin>>lines; /* User needs to input the number of lines to display from the TXT */

    ifstream infile(fileName);
    if (!infile)
    {
       cout << "File does not exist!";
       exit(1);
}
        while (counter<lines && getline(infile, line)) {
            cout << line << "\n";
            counter++;
}
  
    if(counter<lines)
    {
        cout<<"Entire file has been displayed."<<endl;
}

return 0;
}
