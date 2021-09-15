#include <iostream>
using namespace std;

int main(){
  const int SIZE = 6;
  char search;
  char array[SIZE] = {'F', 'r', 'i', 'e', 'n', 'd'};
  bool found;

  cout << "What do you want to search for? "; cin >> search;

  for(int i = 0; i < SIZE; ++i){
    if(search == array[i]){
      cout << "Found " << search << " at index " << i << endl;
      found = true;
      break;
    }else{
      found = false;
    }
  }
  if(!found){
    cout << "Doesn't exist" << endl;
  }



  return 0;
}
