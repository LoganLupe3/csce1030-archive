/* Tell the user whether a number is odd or even
 * Algorithm:
 * 1. Get the number from the user
 * 2. Divide the number by 2 and calculate the remainder
 * 3. Check if remainder is 0
 * 	if 0: even
 * 	if 1: odd
 */

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter a number to check: ";
	cin >> num;

	if(num % 2 == 0){
		cout << num << " is even" << endl;
	}else{
		cout << num << " is odd" << endl;
	}

	return 0;
}
