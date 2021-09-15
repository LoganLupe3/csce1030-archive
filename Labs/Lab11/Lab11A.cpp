/* Authors: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/25/2020
   Instructor: Dr Shrestha
   Description: Computing the average test grade for a user input number of students
                and tests taken per student using a dynamic 2D array of integers
*/


#include <iostream>
#include <iomanip>
using namespace std;


/* Function: getGrades
   Parameters: A dynamic 2D array of integers to represent the scores earned by students
               A dynamic 1D array of doubles to represent the computed average of each student
               An integer r, representing the number of rows in the 2D array
               An integer c, passed by reference, representing the number of tests taken by each student
   Return: Function is of void return type, thus nothing is returned
   Description: This function gets the amount of tests taken per student via user input. The user is then prompted
                to enter the appropriate amount of test grades for each student. The function then computes the 
                average of the student's test grades and stores it in the appropriate index of the averages array

*/
void getGrades(int **scores, double *averages, int r, int &c){
    for(int i = 0; i < r; i++){
        cout << "Enter the amount of tests taken by student " << (i+1) << ": ";
        cin >> c;
        scores[i] = new int[c];
        averages[i] = c; // Temporarily stores the amount of tests taken
    }
    cout << endl << "Enter test scores for each student: " << endl;
    for(int i = 0; i < r; i++){
        double sum = 0;
        cout << setprecision(0) << "Enter " << averages[i] << " grades for student " << i+1 << ": ";
        for(int j = 0; j < averages[i]; j++){
            cin >> scores[i][j];
            sum += scores[i][j];
        }
        averages[i] = sum/averages[i]; // Replaces the number of tests taken with the average
    }
}

/* Function: dispAverage
   Parameters: A dynamic 1D array of doubles to represent the computed average of each student
               An integer r, representing the size of the array
   Return: FunctThis function simply loops through the averages array, printing each index corresponding to each student

*/
void dispAverage(double *averages, int r){
    cout << "Average test scores for each student:" <<endl;
    for(int i = 0; i < r; i++){
        cout << setprecision(4) << "Student " << i+1 << ": " << averages[i] << endl;
    }
}

int main(){
    int **scores;
    double *averages;
    int r, c;
    
    cout << "Enter the number of students: "; cin >> r;
    scores = new int*[r];
    averages = new double[r];

    getGrades(scores, averages, r, c);
    dispAverage(averages, r);

    // Deallocation of memory
    delete [] averages;
    for(int i = 0; i < r; i++){
        delete [] scores[i];
    }
    delete [] scores;

    return 0;
}