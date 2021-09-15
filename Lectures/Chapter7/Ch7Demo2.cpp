#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout; //output file stream
    fout.open("output.txt", ios::app); //appends to an existing file
    int i = 20;
    char ch = '*';
    double dbl = 12.66;
    string str = "This and that";

    cout << "Welcome to  CSCE1030, again" << endl; //displays on screen, but what if we wanted to save the output
    fout << "Welcome to  CSCE1030, again" << endl; //writes to file
    fout << "int = " << i << "\tcharacter = " << ch << "\tdouble = " << dbl << "\tstring = " << str << endl;
    fout.close();


    return 0;
}