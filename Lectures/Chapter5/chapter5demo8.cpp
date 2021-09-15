// 2D Arrays

#include <iostream>
using namespace std;

int main(){
  const int SIZE_R = 3, SIZE_C = 4;
  /*
    int test[10][10];
    for(int r = 0; r < 10; ++r){
      for(int c = 0; c < 10; ++c){
        test[r][c] = 0;
      }
    }

    for(int r = 0; r < 10; ++r){
      for(int c = 0; c < 10; ++c){
        cout << test[r][c] << " ";
      }
      cout << endl;
    }
  cout << endl;
  */


  int arr2D[SIZE_R][SIZE_C] = {
                      {1,2,3,4},
                      {5,6,7,8},
                      {-1,-2,-5,-10}
                    };

  cout << arr2D[2][2] << endl;
  for(int r = 0; r < SIZE_R; ++r){
    for(int c = 0; c < SIZE_C; ++c){
      cin >> arr2D[r][c];
    }
  }
  for(int r = 0; r < SIZE_R; ++r){
    for(int c = 0; c < SIZE_C; ++c){
      cout << arr2D[r][c] << "\t";
    }
    cout << endl;
  }

  


  return 0;
}
