#include <iostream>
using namespace std;

string test(int threshold, int score){
  string result;
  if(score > threshold){
    result = "Passing";
  }else{
    result = "Failing";
  }
  return result;
}

int main(){
  int threshold = 60, score = 70;

  cout << test(threshold, score) << endl;

  return 0;
}
