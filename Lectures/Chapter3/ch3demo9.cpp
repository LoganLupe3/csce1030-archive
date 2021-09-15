#include <iostream>
using namespace std;

int main(){
  enum Direction {UP='U', DOWN='D', LEFT='L', RIGHT='R'}; // works because characters are int compatible
  int x=0, y=0;
  char choice;

  cout << "What direction do you want to move? 'U' for UP, 'D' for DOWN, 'L' for LEFT, 'R' for RIGHT: "; cin >> choice;

  switch (choice) {
    case UP:
      y += 1;
      break;
    case DOWN:
      y -= 1;
      break;
    case LEFT:
      x -= 1;
      break;
    case RIGHT:
      x += 1;
      break;
    default:
      cout << "Wrong direction" << endl;
  }

  cout << "New location: " << x << ", " << y << endl;

  return 0;
}
