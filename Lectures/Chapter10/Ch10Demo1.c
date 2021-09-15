#include "stdio.h"
#include "stdlib.h"

int main(){ 
    FILE *fptr;
    int x = 20; char c = '&';
    char cstr[] = "Hello friend";
    float flt = 2.75;
    fptr = fopen("output.dat", "w");
    if(fptr == NULL){
        printf("File error.\n");
        exit(1);
    }

    fprintf(fptr, "x = %d\tc = %c\n", x, c);
    fprintf(fptr, "flt = %f\n", flt);
    fprintf(fptr, "cstr = %s\n", cstr);
    
    fclose(fptr);
    
    return 0;
}