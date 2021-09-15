/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/117/2020
 * Instructor:	Dr. Shrestha
 * Description:	Enumerated data types and switch statements
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  srand(time(NULL));

  enum Colors {RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};

  Colors my_color = static_cast<Colors>((rand() % 6));
  int guess;

  cout << "Can you guess my favorite color?" << endl;
  cout << "Enter 0=RED, 1=ORANGE, 2=YELLOW, 3=GREEN, 4=BLUE, 5=PURPLE: ";
  cin >> guess;

  if(my_color == guess){
    cout << "Correct! My color is ";
  }else{
    cout << "Sorry, my color is ";
  }

  switch(my_color){
    case RED:
      cout << "red";
      break;
    case ORANGE:
      cout << "orange";
      break;
    case YELLOW:
      cout << "yellow";
      break;
    case GREEN:
      cout << "green";
      break;
    case BLUE:
      cout << "blue";
      break;
    default:
      cout << "purple";
  }

  cout << "." << endl;

  return 0;
}
