#include <iostream>
using namespace std;

int main(){
    int var = 20;
    cout << "var: " << var << endl;
    cout << "var: " << &var << endl; // returns the address of where the variable has been saved in RAM

    int *ptr = &var; // creating a pointer

    return 0;
}