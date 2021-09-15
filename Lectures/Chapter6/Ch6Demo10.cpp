#include <iostream>
using namespace std;

const int ROW = 3, COL = 4;

void getArray(int array[][COL]){
    cout << "Enter " << ROW*COL << " integers:" << endl;
    for(int r = 0; r < ROW; r++){
        for(int c = 0; c < COL; c++){
            cin >> array[r][c];
        }
    }
}

void showArray(const int array[][COL]){
    cout << "You entered:" << endl;
    for(int r = 0; r < ROW; r++){
        for(int c = 0; c < COL; c++){
            cout << array[r][c] << "\t";
        }
        cout << endl;
    }
}

void sumRows(const int array[][COL], int rowSum[]){
    for(int i = 0; i < ROW; i++){
        rowSum[i] = 0;
        for(int j = 0; j < COL; j++){
            rowSum[i] += array[i][j];
        }
    }
}

void sumCols(const int array[][COL], int colSum[]){
    for(int i = 0; i < COL; i++){
        colSum[i] = 0;
        for(int j = 0; j < ROW; j++){
            colSum[i] += array[i][j];
        }
    }
}

void dispSum(const int array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << "\t";
    }
}

int main(){
    int array[ROW][COL];
    int rowSum[ROW];
    int colSum[COL];

    getArray(array);
    showArray(array);
    sumRows(array, rowSum);
    sumCols(array, colSum);
    cout << "Row sum: "; dispSum(rowSum, ROW); cout << endl;
    cout << "Col sum: "; dispSum(colSum, COL); cout << endl;

    

    return 0;
}