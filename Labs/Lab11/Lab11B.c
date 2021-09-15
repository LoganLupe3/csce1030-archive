#include "stdio.h"
#include "stdlib.h"

int main(){
    int size = 1;
    int i;
    char choice;
    double sum;
    double *ptr;
    ptr = (double*)malloc(1*sizeof(double));

    while(1){
        printf("Enter a number: ");
        scanf("%lf", (ptr+(size-1)));

        printf("List of numbers:\n");
        for(int i = 0; i < size; i++){
            printf("%lf\n", *(ptr+i));
            sum += *(ptr+i);
        }

        printf("Updated average = %lf\n", sum/size);

        printf("More numbers (Y/N)? ");
        scanf("%c", &choice);

        if(choice == 'N'){
            exit(1);
        }

        size++;
        ptr = realloc(ptr, (size)*sizeof(double));
    }


    free(ptr);

    return 0;
}