/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date: 10/9/2020
 * Instructor: Dr. Shrestha
 * Description: Calculate student's average grade using 2D array
 */


#include <iostream>
using namespace std;

int main(){
	//initialize necessary variables
	const int ROWS = 3;
	const int COLS = 4;
	float sum = 0, average = 0;
	string names[ROWS] = {"John", "Sallie", "Mary"};

	// declare and initialize 2D gradebook array with number of
	// ROWS and COLS using the following values
	// assign row 0: 90, 40, 65, 80
	// assign row 1: 95, 93, 91, 88
	// assign row 2: 72, 57, 84, 91
	
	int gradebook[ROWS][COLS] = {{90, 40, 65, 80},
				     {95, 93, 91, 88},
				     {72, 57, 84, 91}};

	// process 2D gradebook array to compute and display each
	// student's average
	
	for(int r = 0; r < ROWS; ++r){
		sum = 0;
		average = 0;
		for(int c = 0; c < COLS; ++c){
			sum += gradebook[r][c];
		}
		average = sum/COLS;
		cout << names[r] << "'s average: " << average << endl;
	}


	return 0;
}
