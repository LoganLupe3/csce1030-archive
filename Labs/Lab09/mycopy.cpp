#include <iostream>
#include <fstream>
#include <iomanip>
#include "my_header.h"
using namespace std;


/* Function: mycopy
   Parameters: an ifstream representing the file input
               an ofstream representing the file output
   Return: function is of void return type
   Description: This function checks to see if a person's gpa is less than 3.0.
                If so, the function outputs extra spaces before their data.
*/
void mycopy(ifstream &in, ofstream &out){
    in.open("data.dat");
    out.open("selected.dat");

    if(in.fail() || out.fail()){
        cout << "Issue with file reading/writing." << endl;
        exit(EXIT_FAILURE);
    }

    string fname;
    string lname;
    double gpa;
    int id;

    while(in >> fname >> lname >> gpa >> id){
        if(gpa < 3.0){
            out << setw(10) << fname << " " << lname;
            out << setw(5) << gpa;
            out << setw(5) << id;
            out << endl;
        }
    }
}