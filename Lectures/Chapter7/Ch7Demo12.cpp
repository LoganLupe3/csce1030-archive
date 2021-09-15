#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in;
    file_in.open("input_text.txt");
    if(file_in.fail()){
        cout << "File error" << endl;
        exit(1);
    }

    string line;
    while(!file_in.eof()){
        getline(file_in, line);
        cout << line << endl;
    }
    


    return 0;
}