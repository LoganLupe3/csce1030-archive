/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 10/23/2020
   Instructor: Dr. Shrestha
   Description: This program practices passing 2D arrays to functions via printing out matrices using a function as well as
                computing the addition of two matrices and storing that in another matix
*/


#include <iostream>
using namespace std;

const int COLS = 5;

void printMatrix(const int matrix[][COLS], int size);
void addMatrices(const int matrix1[][COLS], const int matrix2[][COLS], int matrix3[][COLS], int size);

int main(){
    const int ROWS = 3;

    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int matrix3[ROWS][COLS];

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            matrix1[i][j] = (rand() % 11) + 10;
            matrix2[i][j] = (rand() % 16) + 25;
        }
    }

    cout << "MATRIX1: " << endl;
    printMatrix(matrix1, ROWS);
    cout << endl;

    cout << "MATRIX2: " << endl;
    printMatrix(matrix2, ROWS);
    cout << endl;

    addMatrices(matrix1, matrix2, matrix3, ROWS);
    cout << "MATRIX3: " << endl;
    printMatrix(matrix3, ROWS);
    cout << endl;

    return 0;
}

/* Function: printMatrix
   Parameters: a constant 2D array of integers representing matrix1
               an integer representing the size of the rows
   Return: Function is of void return type, thus no return
   Description: This function loops through the corresponding matrix and prints the values
*/
void printMatrix(const int matrix[][COLS], int size){
    for(int r = 0; r < size; r++){
        cout << "row " << r+1 << ": "; 
        for(int c = 0; c < COLS; c++){
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
}

/* Function: addMatrices
   Parameters: a constant 2D array of integers representing matrix1
               a constant 2D array of integers representing matrix2
               a 2D array of integers representing matrix3
               an integer representing the size of the rows
   Return: Function is of void return type, thus no return
   Description: This function loops through matrix3, assigning its values to the sum of the corresponding indices of matrix 1 and 2
*/
void addMatrices(const int matrix1[][COLS], const int matrix2[][COLS], int matrix3[][COLS], int size){
    for(int r = 0; r < size; r++){
        for(int c = 0; c < COLS; c++){
            matrix3[r][c] = (matrix1[r][c] + matrix2[r][c]);
        }
    }
}