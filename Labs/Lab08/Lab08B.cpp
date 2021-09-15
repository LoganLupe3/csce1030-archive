/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 10/23/2020
   Instructor: Dr. Shrestha
   Description: Practicing passing arrays to functions by testing to see if prices need to be increased through
                an array of booleans. If true, then the corresponding index price is increased by %10
*/



#include <iostream>
using namespace std;

const int SIZE = 6;

void print_prices(const float prices[], int size);
void update(bool raise_price[], float prices[], int size);

int main(){
    bool raise_price[SIZE];
    float prices[SIZE] = {4.25, 0.99, 3.29, 1.80, 2.19, 6.59};

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Original: ";

    print_prices(prices, SIZE);

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        raise_price[i] = rand() % 2;
    }

    //call update function to increase some prices
    update(raise_price, prices, SIZE);

    cout << "Updated: ";

    print_prices(prices, SIZE);

    return 0;
}

/* Function: print_prices
   Parameters: a constant array of float values representing the prices, not to be altered in this function
               an integer represting the size of the array
   Return: Function is of void return type, thus no return
   Description: This function loops through the prices array and prints out the values of the array with a dollar sign added to the front, seperated by spaces
*/
void print_prices(const float prices[], int size){
    for(int i = 0; i < size; i++){
        cout << "$" << prices[i] << " ";
    }
    cout << endl;

    return;
}

/* Function: update
   Parameters: array of booleans representing if the price needs to increase
               array of float values representing the prices that may need to be increased
               integer representing the size of the arrays
   Return: Function is of void return type, thus no return
   Description: This function loops through the raise_price array and if it contains true, then the price of corresponding
                index in prices[] is increased by 10%
*/
void update(bool raise_price[], float prices[], int size){
    for(int i = 0; i < size; i++){
        if(raise_price[i]){
            prices[i] *= 1.1;
        }
    }
}