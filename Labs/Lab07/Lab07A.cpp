/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date: 10/16/2020
 * Instructor: Dr. Shrestha
 * Description: Calculate bonus given base_salary and experience
 */


#include <iostream>
using namespace std;

double compute_bonus(double base_salary, int experience);

int main(){
    double base_salary;
    int experience;
    //get the values of base_salary
    //and experience from the user
    //call compute_bonus by passing necessary parameters
    //display the bonus returned by the function
    cout << "Enter base salary: "; cin >> base_salary;
    cout << "Enter amount of experience: "; cin >> experience;

    cout << "Bonus = " << compute_bonus(base_salary, experience) << endl;

    return 0;
}

//returns the bonus depending on the amount of experience entered by the user and using the user enter base_salary
double compute_bonus(double base_salary, int experience){
    double bonus;
    //compare experience and calculate bonus
    //return the computed bonus
    if(experience > 15){
        bonus = base_salary*0.05;
    }else{
        bonus = base_salary*0.025;
    }
    return bonus;
}