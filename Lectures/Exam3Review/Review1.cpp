/*
    How to handle files
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in;
    ofstream out;

    in.open("read.txt");
    out.open("output.txt");

    if(in.fail() || out.fail()){
        cout << "Issue with reading/writing file." << endl;
        exit(EXIT_FAILURE);
    }

    // code 

    in.close();
    out.close();

    return 0;
}