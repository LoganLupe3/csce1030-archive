#include <iostream>
#include <fstream>
#include <iomanip>
#include "copy.h"
using namespace std;

void copy(ifstream& in, ofstream& out){
    if(in.fail() || out.fail()){
        cout << "Error reading/writing file." << endl;
        exit(EXIT_FAILURE);
    }

    string fname;
    string lname;
    double gpa;
    int id;

    while(in >> fname >> lname >> gpa >> id){
        if(gpa > 3.0){
            out << setw(10) << fname << " " << lname;
            out << setw(5) << gpa;
            out << setw(5) << id;
            out << endl;
        }
    }
}