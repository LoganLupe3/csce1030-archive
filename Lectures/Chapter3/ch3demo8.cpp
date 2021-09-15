/*
  Switch statements
  9/14/20
*/


#include <iostream>
using namespace std;

int main(){
  char letter;
  cout << "Enter grade: "; cin >> letter;
/*
  if (letter == 'A'){
    cout << "Excellent" << endl;
  }
  else if (letter == 'B'){
    cout << "Well done" << endl;
  }
  else if (letter == 'C'){
    cout << "Passed" << endl;
  }
  else if (letter == 'D'){
    cout << "Do better next time" << endl;
  }
  else if (letter == 'F'){
    cout << "Failed" << endl;
  }else{
    cout << "Wrong grade" << endl;
  }
*/

switch(letter){
  case 'A':
    cout << "Excellent" << endl;
    break;
  case 'B':
    cout << "Well done" << endl;
    break;
  case 'C':
    cout << "Passed" << endl;
    break;
  case 'D':
    cout << "Do better next time" << endl;
    break;
  case 'F':
    cout << "Failed" << endl;
    break;
  default:
    cout << "Wrong grade" << endl;
}


  return 0;
}
