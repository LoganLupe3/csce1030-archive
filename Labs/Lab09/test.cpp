#include <iostream>
#include <fstream>
#include <iomanip>
#include "copy.h"
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    in.open("data.dat");
    out.open("out1.dat");

    copy(in, out);


    return 0;
}