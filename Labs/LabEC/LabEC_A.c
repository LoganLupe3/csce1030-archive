#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *fp;
    char filename[50];
    char input;
    int chars = 0, words = 0, lines = 0;
    
    printf("Enter the name of the file you want to open: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("File error.\n");
        exit(1);
    }
    while(getc(fp) != "EOF"){
             /*
                Check if the character read (input) is a space (\t, ' ', or \n or \r) using an appropriate function
                if it is not a space, increment variable chars.
             */
             /*
                Check if the character read (input) is a newline character (\n)
                if it is, increment the variable lines.
             */
             /*
                Check if the character read (input) is a whitespace (' '), or tab (\t) or newline character (\n)
                if it is, increment the variable words.
             */
        }
        
    /*
        Print the total number of characters, total number of words and total number of lines
    */
    /*
        Close the file pointer.
    */
    fclose(fp);

    return 0;
}