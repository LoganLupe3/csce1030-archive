// 2D Dynamic Array

#include <iostream>
using namespace std;

void getArray(int **arr2D, int r, int c){
    cout << "Enter " << r*c << " numbers: ";
    for(int i = 0; i < r; i++){
        for(int j = 0 ; j < c; j++){
            cin >> arr2D[i][j];
        }
    }
}

void showArray(int **arr2D, int r, int c){
    cout << "You entered: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0 ; j < c; j++){
            cout << arr2D[i][j] << "\t";
        }
        cout << endl;
    }
}

void rowSum(int **arr2D, int r, int c, int *row_sum){
    for(int i = 0; i < r; i++){
        row_sum[i] = 0;
        for(int j = 0 ; j < c; j++){
            row_sum[i] += arr2D[i][j];
        }
    }
}

void colSum(int **arr2D, int r, int c, int *col_sum){
    for(int i = 0; i < c; i++){
        col_sum[i] = 0;
    }
    for(int i = 0; i < r; i++){
        for(int j = 0 ; j < c; j++){
            col_sum[j] += arr2D[i][j];
        }
    }
}

void dispSum(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main(){
    int **arr2D; // ** for 2D array, * for 1D array
    int *row_sum;
    int *col_sum;
    int r, c;

    cout << "How many rows? "; cin >> r;
    cout << "How many columns? "; cin >> c;

    arr2D = new int*[r];
    row_sum = new int[r];
    col_sum = new int[c];

    for(int i = 0; i < r; i++){
        arr2D[i] = new int[c];
    }

    getArray(arr2D, r, c);
    showArray(arr2D, r, c);
    rowSum(arr2D, r, c, row_sum);
    colSum(arr2D, r, c, col_sum);
    cout << "Sum of rows: ";
    dispSum(row_sum, r);
    cout << "Sum of cols: ";
    dispSum(col_sum, c);

    delete [] col_sum;
    delete [] row_sum;
    for(int i = 0; i < r; i++){
        delete [] arr2D[i];
    }
    delete [] arr2D;
    


    return 0;
}