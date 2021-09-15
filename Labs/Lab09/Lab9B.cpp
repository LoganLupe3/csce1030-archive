/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/6/2020
   Instructor: Dr. Shrestha
   Description: Sorting data read via a file and printing out the sorted list to a file
*/


#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    in.open("unsorted.dat");
    out.open("sorted.dat");

    if(in.fail() || out.fail()){
        cout << "Error with file reading/writing." << endl;
        exit(EXIT_FAILURE);
    }

    int array[50];

    int i = 0;
    while(in >> array[i]){
        i++;
    }

    for(int j = 0; j < i; j++){
        for(int k = 0; k < i; k++){
            if(array[j] < array[k]){
                int temp = array[k];
                array[k] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int j = 0; j < i; j++){
        out << array[j] << endl;
    }
    
    

    in.close();
    out.close();


    return 0;
}