#include <iostream>
#include <fstream>
using namespace std;

/* Alternative method
void copy(char source[], char dest[]){
    ifstream file_in;
    ofstream file_out;
    file_out.open(dest);
    file_in.open(source);
    if(file_in.fail() || file_out.fail()){
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
}
*/

void copy(ifstream& file_in, ofstream& file_out){
    if(file_in.fail() || file_out.fail()){
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
}


int main(){
    // alternative method: copy("input_text.txt", "copy_functions.txt");
    ofstream file_out;
    ifstream file_in;
    file_in.open("input_text.txt");
    file_out.open("copy_via_functions.txt");
    copy(file_in, file_out);

    return 0;
}