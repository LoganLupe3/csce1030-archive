/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/13/2020
   Instructor: Dr. Shrestha
   Description: Using a dynamic array in a do-while loop to get
                the average grade of each student
*/

#include <iostream>
using namespace std;

int main(){
    int i = 0;

    do{
        int *grades;
        double sum = 0;
        int numGrades; // number of grades

        cout << "Enter the number of grades: ";
        cin >> numGrades;

        grades = new int[numGrades];

        for(int j = 0; j < numGrades; j++){
            cout << "Enter grade #" << (j+1) << ": ";
            cin >> grades[j];
            
            sum += grades[j];
        }

        cout << "Student " << (i+1) << " average: " << sum/numGrades << endl;

        i++;

        delete [] grades;
    }while(i < 2);

    return 0;
}