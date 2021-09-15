/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/13/2020
   Instructor: Dr. Shrestha
   Description: Practicing pointers and dynamic memory
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int qty = 2;
    int *qtyPtr = &qty;
    float *pricePtr = new float;

    cout << "qty = " << qty << " *qtyPtr = " << *qtyPtr << endl;
    cout << "&qty = " << &qty << " qtyPtr = " << qtyPtr << endl;

    *qtyPtr = qty + 3;
    cout << "qty = " << qty << " *qtyPtr = " << *qtyPtr << endl;


    cout << "Enter the price of a can of soup: ";
    cin >> *pricePtr;

    cout << "*pricePtr = " << *pricePtr << endl;

    *pricePtr = *pricePtr * 1.05;

    cout << fixed << setprecision(2) << "At $" << *pricePtr << " each for inflation, ";
    cout << fixed << setprecision(2) << *qtyPtr << " cans of soup costs $" << *qtyPtr * *pricePtr << endl; 

    delete pricePtr;

    return 0;
}