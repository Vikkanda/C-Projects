// This program finds the average time spent programming by a student
// each day over a three day period.

// Vik Kanda

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours_p, numHours_b, total_p, total_b, average_p, average_b;
	int student, day = 0;	// these are the counters for the loops
    int days_n;

	cout << "This program will find out which subject on average the student spent the most time on"
		 << " studying for over the long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
    cout  << "\nHow many days are there in the long weekend" << endl << endl;
    cin >> days_n;
    
	for (student = 1; student <= numStudents; student++)
	{
		total_p = 0;
        total_b = 0;
        
		for (day = 1; day <= days_n; day++)
		{ 
            
			cout << "\nPlease enter the number of hours worked by student " << student << " on programming"
				  << " on day " << day << "." << endl << endl;
			cin >> numHours_p;
            
            cout << "\nPlease enter the number of hours worked by student " << student  << " on biology"
				 << " on day " << day << "." << endl << endl;
            cin >> numHours_b;
            
			total_p = total_p + numHours_p;
            total_b = total_b + numHours_b;
		}

		average_p = total_p / days_n;
        average_b = total_b / days_n;

		cout << endl;
		cout << "************************************************************************************" << endl;
        cout << "Student " << student <<" spent an average of " << average_p << " hours on programming"; 
        cout << " and an average of " << average_b << " hours on biology" << endl << endl;
        
        if (average_p > average_b) {
            cout << "The student studied more programming" << endl << endl;
        } else if (average_p < average_b) {
            cout << "The student studied more biology" << endl << endl;
        } else
            cout << "Student " << student << " spent an equal amount of time studying for both subjects" << endl << endl;
        cout << "************************************************************************************" << endl;
        }
	}
