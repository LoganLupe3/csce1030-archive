/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/13/2020
   Instructor: Dr. Shrestha
   Description: Passing structures to functions
*/

#include <iostream>
using namespace std;

struct Car{
    string model;
    float tank_size;
    float mpg;
};

bool fillUpRequired(Car myCar, int km);

int main(){
    Car myCar;
    int kilometers; // total distance of trip in kilometers

    cout << "Enter the car model: ";
    cin >> myCar.model;

    cout << "Enter the tank size of the " << myCar.model << " in gallons: ";
    cin >> myCar.tank_size;

    cout << "Enter the miles per gallon of the " << myCar.model << ": ";
    cin >> myCar.mpg;

    cout << "Enter the total kilometers of the planned trip: ";
    cin >> kilometers;

    if(fillUpRequired(myCar, kilometers)){
        cout << "You will need to fill up your " << myCar.model;
        cout << " before you reach your destination." << endl;
    }else{
        cout << "Your " << myCar.model << " can travel to your ";
        cout << "destination on one tank of gas." << endl;
    }

    return 0;
}

/* Function: fillUpRequired
   Parameters: An instance of the structure Car with all the car's info
               An integer kilometers to represent the total distance of the trip in km
   Return: Function is of boolean return type
   Description: This function returns true if the user will be required to fill up their car
                with gas depending on the mpg and tank size of the car, as well as
                the distance of the trip
*/
bool fillUpRequired(Car myCar, int kilometers){
    float capacityInMiles = myCar.tank_size * myCar.mpg;
    float tripMiles = kilometers * 0.621371;

    return (tripMiles > capacityInMiles);
}