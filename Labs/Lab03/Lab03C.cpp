/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/11/2020
 * Instructor:	Dr. Shrestha
 * Description:	Printing and reading using printf and scanf, shorthand operations
 */


#include <iostream>

using namespace std;

int main(){
  int a, b;
  double c, d;

  printf("Please enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("Please enter two double values: ");
  scanf("%lf %lf", &c, &d);

  printf("Your ints are: %d and %d\n", a, b);
  printf("Your doubles are: %lf and %lf\n", c, d);

  // Calculations
  a += b;
  d /= a;
  c *= 5;
  b %= a;
  c -= a;

  printf("Value of a (a + b): %d\n", a);
  printf("Value of b (b %% a): %d\n", b);
  printf("Value of c (c - a): %lf\n", c);
  printf("Value of d (d / a): %.3lf\n", d);

  return 0;
}
