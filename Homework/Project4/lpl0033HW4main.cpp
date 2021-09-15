#include <iostream>
#include <ctime>
#include "lpl0033HW4.h"
using namespace std;

int main(){
    srand(time(NULL));

    int army, turn = 0;
    int **colonies;
    char **board;
    int r = 3, c = 10;
    colonies = new int*[r];
    board = new char*[r];
    for(int i = 0; i < r; i++){
        colonies[i] = new int[c];
    }
    for(int i = 0; i < r; i++){
        board[i] = new char[c];
    }

    // Initializing army size, board, and colonies. Starting the game
    army = rand() % 10 + 15; // 15-25 inclusive


    printHeader();
    cout << "Let's begin! Anthony's army is " << army << " strong!\n\n";
    generateColonies(colonies, r, c);
    initializeBoard(board, r, c);
    
    // Game loop
    showBoard(board, r, c);


    // Freeing memory of the two dynamic 2D arrays used: board and colonies
    for(int i = 0; i < r; i++){
        delete [] board[i];
    }
    delete [] board;

    for(int i = 0; i < r; i++){
        delete [] colonies[i];
    }
    delete [] colonies;

    return 0;
}