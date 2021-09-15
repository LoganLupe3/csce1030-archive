/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 10/23/2020
   Instructor: Dr. Shrestha
   Description: Gets the user's input for two grades and calculates the average of the two grades.
                Then the program adds a curve to the grades if necessary.
                Done via functions passing by reference
*/


#include <iostream>
using namespace std;

const int PASS_GRD = 70;
float get_grades(float& grd1, float& grd2);
void curve_grades(float avg, float& grd1, float& grd2);

int main(){
    float grd1, grd2, avg;

    avg = get_grades(grd1, grd2);
    cout << "grd1=" << grd1 << " grd2=" << grd2 << endl;

    if(avg < PASS_GRD){
        //call function to curve each grade by adding
        //difference of PASS_GRD and average
        curve_grades(avg, grd1, grd2);
    }else{
        cout << "No curve" << endl;
    }

    cout << "grd1=" << grd1 << " grd2=" << grd2 << endl;

    return 0;
}

/* Function: get_grades
   Parameters: a float representing the first grade (passed by reference)
               a float representing the second grade (passed by reference)
   Return: a float representing the average of the two grades
   Description: This function gets the user input for two grades and returns the average of the two grades
*/
float get_grades(float& grd1, float& grd2){
    cout << "Enter first grade: ";
    cin >> grd1;
    
    cout << "Enter second grade: ";
    cin >> grd2;

    return (grd1 + grd2)/2;
}

/* Function: curve_grades
   Parameters: a float representing the average of the two grades
               a float representing the first grade (passed by reference)
               a float representing the second grade (passed by reference)
   Return: This function is of void return type, thus no return
   Description: This function computes and adds a curve to provided grades if necessary
*/
void curve_grades(float avg, float& grd1, float& grd2){
    if((PASS_GRD - avg) > 0){
        grd1 += (PASS_GRD - avg);
        grd2 += (PASS_GRD - avg);
    }
}