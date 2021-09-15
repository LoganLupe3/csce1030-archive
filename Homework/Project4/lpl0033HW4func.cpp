#include <iostream>
#include <ctime>
#include "lpl0033HW4.h"
using namespace std;

void printHeader(){
  cout << "+-----------------------------------------------+" << endl;
  cout << "|\tComputer Science and Engineering\t|" << endl;
  cout << "|\tCSCE 1030 - Computer Science I\t\t|" << endl;
  cout << "| Logan Lupeamanu lpl0033 lpl0033@my.unt.edu\t|" << endl;
  cout << "+-----------------------------------------------+" << endl;
}

void initializeBoard(char **board, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            board[i][j] = '-';
        }
    }
}

void generateColonies(int **colonies, int r, int c){
    srand(time(NULL));
    int queen_index;
    for(int i = 0; i < c; i++){
        queen_index = rand() % 3; // Generates the random index of the queen (0-2, inclusive)
        for(int j = 0; j < r; j++){
            if(j == queen_index){
                colonies[j][i] = 'Q'; // Recall that Q = 81 via ASCII
            }else{
                colonies[j][i] = rand() % 10 + 1;
            }
        }
    }
}

void showBoard(char **board, int r, int c){
    cout << "    A  B  C  D  E  F  G  H  I  J" << endl;
    cout << "  +-------------------------------+" << endl;
    for(int i = 0; i < r; i++){
        cout << i << " | ";
        for(int j = 0; j < c; j++){
            cout << board[i][j] << "  ";
        }
        cout << "|" << endl;
    }
    cout << "  +-------------------------------+" << endl;
}

void showArray(int **colonies, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << colonies[i][j] << "\t";
        }
        cout << endl;
    }
}

void strike(char **board, int **colonies, int r, int c, int &army){
    if(colonies[r][c] != 'Q'){
        board[r][c] = 'X';
        army -= colonies[r][c];
    }else{
        board[r][c] = 'A';
        if(r == 0){
            if(board[r+1][c] != 'X'){
                army += colonies[r+1][c];
                board[r+1][c] = '*';
            }
            if(board[r+2][c] != 'X'){
                army += colonies[r+2][c];
                board[r+2][c] = '*';
            }
        }else if(r == 1){
            if(board[r-1][c] != 'X'){
                army += colonies[r-1][c];
                board[r-1][c] = '*';
            }
            if(board[r+1][c] != 'X'){
                army += colonies[r+1][c];
                board[r+1][c] = '*';
            }
        }else{
            if(board[r-1][c] != 'X'){
                army += colonies[r-1][c];
                board[r-1][c] = '*';
            }
            if(board[r-2][c] != 'X'){
                army += colonies[r-2][c];
                board[r-2][c] = '*';
            }
        }
    }
}