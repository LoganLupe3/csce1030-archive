/* Author:	Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
 * Date:	09/11/2020
 * Instructor:	Dr. Shrestha
 * Description:	Calculating the escape velocity of a planet
 */

 /*
    Algorithm:
    1. Get user input for radius of the planet in miles and mass of the planet in kg
    2. Store user input in appropriate variables
    3. Convert radius in miles to meters using constant multiplier (1mi = 1609.34m)
    4. Use given formula to compute escape velocity
    5. Print the escape velocity in m/s
    6. Get user input for mass of an object attempting to escape the gravity of the planet in kg
    7. Using given formula to compute KE required by the object to escape gravity of planet
    8. Display result
  */


#include <iostream>
#include <cmath>

using namespace std;

int main(){
  cout << "+-----------------------------------------------+" << endl;
  cout << "|\tComputer Science and Engineering\t|" << endl;
  cout << "|\tCSCE 1030 - Computer Science I\t\t|" << endl;
  cout << "| Logan Lupeamanu lpl0033 lpl0033@my.unt.edu\t|" << endl;
  cout << "+-----------------------------------------------+" << endl;



  // Declare necessary variables
  const double gravConst = 6.67e-11;
  double escV, mass, objMass, radius, kineticEnergy;

  // Prompt user and read in values for radius and mass of the planet
  cout << "Enter radius of the planet (in miles): ";
  cin >> radius;
  cout.setf(ios::fixed);
  cout.precision(4);
  cout << "Enter mass of the planet (in kg): ";
  cin >> mass;

  // Convert radius in miles to radius in meters
  radius *= 1609.34;

  // Calculate and display the escape velocity of the planet
  escV = sqrt((2*gravConst*mass)/radius);
  cout << "The escape velocity of the planet is " << escV << " m/s" << endl;

  // Prompt user for mass of object and store in objMass variable
  cout << "Enter mass of the object (in kg): ";
  cin >> objMass;

  // Calculate and display kineticEnergy required for object to escape grav of planet
  kineticEnergy = (0.5)*objMass*pow(escV, 2);
  cout << "The kinetic energy required by an object of mass " << objMass << "kg to escape the planet is " << kineticEnergy << " Joules" << endl;


  return 0;
}
