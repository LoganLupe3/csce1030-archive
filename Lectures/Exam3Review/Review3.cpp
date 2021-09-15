#include <iostream>
using namespace std;

int main(){
    double *dptr;
    int num;
    cin >> num;
    dptr = new double[num]; // You can only allocate memory size num AFTER you get num

    // Now you can process dptr as a normal array in the body of the program

    delete [] dptr;

    return 0;
}