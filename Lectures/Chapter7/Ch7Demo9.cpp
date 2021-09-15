#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file_out;
    file_out.open("output4.txt");

    char ch = '*';

    file_out.put(ch); // same as file_out << ch;
    


    file_out.close();

    return 0;
}