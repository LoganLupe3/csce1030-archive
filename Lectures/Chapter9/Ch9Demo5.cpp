#include <iostream>
using namespace std;

int main(){
    int array[3][4] = {{1,2,3,4},
                       {5,6,7,8}, 
                       {9,10,11,12}};

    cout << "array: " << array << endl; // returns an address => array is a pointer
    cout << "*array: " << *array << endl; // does not dereference the array
    cout << "**array: " << **array << endl; // dereferences the array
    // name of the array is a pointer
    // and it points at the first element of the 2D array
    cout << endl;
    // pointer math
    cout << "Pointer math: " << endl;
    cout << "array+1: " << array+1 << endl;
    cout << "*(array+1): " << *(array+1) << endl;
    cout << "array[1]: " << array[1] << endl;
    cout << "&array[1][0]: " << &array[1][0] << endl;
    cout << "**(array+1): " << **(array+1) << endl; // points to the next row

    cout << endl;
    cout << "Accessing individual elements:" << endl;
    cout << "array[1][2]: " << array[1][2] << endl;
    cout << "*(array[1] + 2): " << *(array[1] + 2) << endl; // pointer notation
    cout << "*(*(array+1)+2): " << *(*(array+1)+2) << endl;

    return 0;
}