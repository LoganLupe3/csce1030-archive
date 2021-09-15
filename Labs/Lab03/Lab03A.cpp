/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	9/8/2020
 * Instructor:	Dr. Shrestha
 * Description:	Declaring, initializing, and printing variables
 */



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));

	/* Declare variables var1 - var4 as directed, 
	 * but do not insitialize these variables here
	 */

	int var1;
	char var2;
	float var3, var4;

	// Initialize variables var1 - var3 as directed
	
	var1 = rand() % 51 + 50;
	var2 = 'L';
	var3 = 2.5;

	// Compute result and store in var4 already done
	
	var4 = var3 + var2 % var1;

	/* Print out the value of var4 variable, as well
	 * as add a newline after */

	cout << "var4: " << var4 << endl;


	return 0;
}
