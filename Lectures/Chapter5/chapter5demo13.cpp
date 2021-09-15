#include <iostream>
using namespace std;

int main(){
  string name[3] = {"John Smith", "Sheila Harris", "Test test"};

  int count = 0;
  for(int r = 0; r < 3; ++r){
    for(int c = 0; c < name[r].length(); ++c){
      char test = name[r].at(c);
      if(test == 'e'){
        ++count;
      }
    }
  }

  cout << "There are " << count << "Es" << endl;

  return 0;
}
