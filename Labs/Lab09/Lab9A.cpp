/* Author: Logan Lupeamanu (LoganLupeamanu@my.unt.edu)
   Date: 11/6/2020
   Instructor: Dr. Shrestha
   Description: Reading and writing to files using the fstream
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    char c;
    ifstream in_s; // declaration of the stream of type input
    ofstream out_s;

    char input_file[15];
    char output_file[15];
    cout << "Enter the name of the input file: ";
    cin >> input_file;
    cout << "Enter the name of the output file: ";
    cin >> output_file;

    in_s.open(input_file); // connect to the input file and test
    out_s.open(output_file);
    if(in_s.fail() || out_s.fail()){
        cout << "Unable to open input file " << input_file << endl;
        exit(EXIT_FAILURE);
    }

    while(in_s.get(c)){
        out_s << c;
    }

    in_s.close(); // close the file
    out_s.close();

    return 0;
}