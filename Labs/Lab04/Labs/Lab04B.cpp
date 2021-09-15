/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/17/2020
 * Instructor:	Dr. Shrestha
 * Description:	Switch statements
 */


#include <iostream>
using namespace std;

int main(){
  int credits;
  cout << "Enter the number of credit hours earned by student: "; cin >> credits;

  credits /= 10;

  switch(credits){
    case 0:
    case 1:
    case 2:
      cout << "Freshman" << endl;
      break;
    case 3:
    case 4:
    case 5:
      cout << "Sophmore" << endl;
      break;
    case 6:
    case 7:
    case 8:
      cout << "Junior" << endl;
      break;
    case 9:
    case 10:
    case 11:
      cout << "Senior" << endl;
      break;
    default:
      cout << "Graduating Senior" << endl;
  }



  return 0;
}
