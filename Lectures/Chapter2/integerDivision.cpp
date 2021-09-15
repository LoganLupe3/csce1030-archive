#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Typecasting:
	

	int x = 5, y =3;
	float result = x/y;

	cout << "x/y = " << result << endl;

	// Explicit casting
	result = static_cast<double>(x)/y;
	cout << "x/y = " << result << endl;

	// Implicit casting (only works if data is type compatible
	result = (float)x/y;
	cout << "x/y = " << result << endl;

	return 0;
}
