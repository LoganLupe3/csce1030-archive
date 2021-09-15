#include <iostream>
using namespace std;

int main(){
  const int SIZE_R=3, SIZE_C=4;
  int arr2D[SIZE_R][SIZE_C];
  int row_sum[SIZE_R];
  int col_sum[SIZE_C];
  int sum;

  cout << "Enter " << SIZE_C*SIZE_R << " integers: ";
  for(int r = 0; r < SIZE_R; ++r){
    for(int c = 0; c < SIZE_C; ++c){
      cin >> arr2D[r][c];
    }
  }

  cout << "You entered:" << endl;
  for(int r = 0; r < SIZE_R; ++r){
    for(int c = 0; c < SIZE_C; ++c){
      cout << arr2D[r][c] << "\t";
    }
    cout << endl;
  }

  cout << "Sum of rows:" << endl;
  for(int r = 0; r < SIZE_R; ++r){
    row_sum[r] = 0;
    for(int c = 0; c < SIZE_C; ++c){
      row_sum[r] += arr2D[r][c];
    }
  }
  for(int i = 0; i < SIZE_R; ++i){
    cout << "Row " << i << " = " << row_sum[i] << endl;
  }

  cout << "Sum of columns:" << endl;
  for(int c = 0; c < SIZE_C; ++c){
    col_sum[c] = 0;
  }
  for(int r = 0; r < SIZE_R; ++r){

    for(int c = 0; c < SIZE_C; ++c){
      col_sum[c] += arr2D[r][c];
    }
  }
  for(int i = 0; i < SIZE_C; ++i){
    cout << "Col " << i << " = " << col_sum[i] << endl;
  }

  return 0;
}
