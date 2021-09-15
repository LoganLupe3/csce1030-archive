#include "stdio.h"
#include "stdlib.h"

int main(){ 
    FILE *fptr;
    int arr[20];
    int i = 0;
    int count;
    float sum;
    fptr = fopen("input.dat", "r");
    if(fptr == NULL){
        printf("File error.\n");
        exit(1);
    }

    //fscanf(fptr, "%d", &x);
    count = 0;
    while(fscanf(fptr, "%d", arr+count) != -1){
        printf("Read value: %d\n", *(arr+count));
        ++count;
    }
    sum = 0;
    for(i = 0; i < count; i++){
        sum += *(arr+i);
    }
    printf("Average: %f", sum/count);
    
    fclose(fptr);
    
    return 0;
}