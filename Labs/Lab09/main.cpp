#include <iostream>
#include <fstream>
#include "my_header.h"
using namespace std;

int main(){
    ifstream in;
    ofstream out;

    mycopy(in, out);

    
    in.close();
    out.close();

    return 0;
}