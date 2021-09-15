#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    char fname[20]; //string fname also works
    cout << "Enter a file to open: "; cin >> fname;

    fin.open(fname);
    //fin.fail() // true if file error
    if(fin.fail()){
        cout << "File error." << endl;
        exit(1); //terminates the program
    }
    int my_int;

    fin >> my_int; //reading from file
    cout << "From file: " << my_int << endl;

    fin.close();

    return 0;
}