/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date: 10/9/2020
 * Instructor: Dr. Shrestha
 * Description: Calculating the standard deviation with 10 grades using arrays
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //initialize necessary variables
    const int SIZE = 10;
    double grades[SIZE];
    double avg, sum = 0, std_dev = 0;

    //get user input for grades and calculate sum
    for(int i = 0; i < SIZE; i++){
        cout << "Enter grade #" << i+1 << ": "; cin >> grades[i];
        sum += grades[i];
    }

    //calculate average
    avg = sum / SIZE;

    //calculate standard deviation with calculated average
    for(int i = 0; i < SIZE; i++){
        std_dev += pow((grades[i] - avg), 2);
    }
    std_dev = sqrt(std_dev/SIZE);

    //display standard deviation:
    cout << "Standard deviation: " << std_dev << endl;

    return 0;
}
