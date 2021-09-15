#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in;
    ofstream file_out;
    file_out.open("copy.txt");
    file_in.open("input_text.txt");
    if(file_in.fail()){
        cout << "File error." << endl;
        exit(1);
    }

    char ch;

    ch = file_in.get();
    while(!file_in.eof()){ //eof(): end of file, true if file is over
        file_out.put(ch);
        ch = file_in.get();
    }

    file_out.close();
    file_in.close();

    return 0;
}