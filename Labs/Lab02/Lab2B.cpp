#include <iostream>
using namespace std;

int main()
{
	float radius;
	float height;
	float pi = 3.14159;
	float area;

	cout << "Enter the radius of the cylinder (in cm): ";
	cin >> radius;
	cout << "Enter the height of the cylinder (in cm): ";
	cin >> height;
	area = 2*pi*radius*(radius+height);
	cout << "The surface area of the cylinder is " << area << "cm" << endl;

	return 0;
}
