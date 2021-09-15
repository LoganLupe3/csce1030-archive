/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/25/2020
 * Instructor:	Dr. Shrestha
 * Description:	while loop
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  // Generate random numbers for range of integers to sum
  srand(time(NULL));
  int min = rand() % 10 + 1;
  int max = rand() % 10 + 11;

  // Calculate the sum of integers from min - max, inclusively
  int sum = 0;
  int count = min;
  while(count <= max){
    sum += count;
    count++;
  }

  // Display the sum of integers between min - max, inclusively
  cout << "Sum of numbers between " << min << "-" << max << " (inclusively) " << "= " << sum << endl;





  return 0;
}
