#include <iostream>
using namespace std;
void NumberArray(int[], int, int);

int main() {

    int sizeA{};
    int valueA{};
    int arr[20];
   
        cout << "Enter the size of the array:" << endl;
        cin >> sizeA;
    
        cout << "\nEnter " << sizeA << " numbers into the array" << endl << endl; 
            
            for(int i = 0; i < sizeA; i++){
                cout << "Enter number:" << endl;
                cin >> arr[i];
                cout << endl;
                }
    
        cout << "You will get an output of all the numbers greater than an entered number." << endl << endl;
        cout << "Please enter a number" << endl;
        cin >> valueA;
    
            NumberArray(arr, sizeA, valueA);
        
        cout << "*****************************************************************************" << endl;
        cout << "Test Case 1" << endl;
        cout << "\nThe numbers in the array that are greater than " << "10" << " are:" << endl << endl;
            
            for (int b=0; b < sizeA; b++) {
            if (arr[b] > 10)
            cout << "" << arr[b] << "" << endl;
            }
       cout << "*****************************************************************************" << endl;
   
        cout << "\nTest Case 2" << endl;
        cout << "\nThe numbers in the array that are greater than " << "40" << " are:" << endl << endl;
   
            for (int c=0; c < sizeA; c++) {
            if (arr[c] > 40)
            cout << "" << arr[c] << "" << endl;
            }
        cout << "*****************************************************************************" << endl;  
    return 0;
}
        void NumberArray(int arr[], int size, int value) {
            cout << "*****************************************************************************" << endl;
            cout << "\nThe numbers in the array that are greater than " << value << " are:" << endl << endl;
                
            for (int k=0; k < size; k++) {
            if (arr[k] > value)
            cout << "" << arr[k] << "" << endl;
                }
            cout << endl;
}
