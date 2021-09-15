/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/25/2020
 * Instructor:	Dr. Shrestha
 * Description:	do-while loop
 */


#include <iostream>
using namespace std;

int main(){
  enum Operation {Multiply='M', Add='A', Difference='D'};
  int result;
  int num1, num2;
  Operation my_operation;
  char choice;
  cout << "Enter two integers: "; cin >> num1 >> num2;

  bool complete = false;

  do {
    //prompt for the value of choice
    //to select one of the operations
    //cast the user entered character to switch based on my_operation
    cout << "\nM. Multiply\nA. Add\nD. Difference\nEnter an operation: "; cin >> choice;
    my_operation = static_cast<Operation>(choice);

    switch (my_operation) {
      case Multiply:
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        complete = true;
        break;
      case Add:
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        complete = true;
        break;
      case Difference:
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        complete = true;
        break;
      default:
        cout << "\nIncorrect input, try again\n" << endl;
    }
  } while(!complete);


  return 0;
}
