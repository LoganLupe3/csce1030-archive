#include "stdio.h"
#include "stdlib.h"

int main(){ 
    FILE *fptr;
    int x;
    fptr = fopen("input.dat", "r");
    if(fptr == NULL){
        printf("File error.\n");
        exit(1);
    }

    //fscanf(fptr, "%d", &x);

    while(fscanf(fptr, "%d", &x) != -1){
        printf("Read value: %d\n", x);
    }
    
    fclose(fptr);
    
    return 0;
}