// Dynamic memory in C

#include "stdio.h"
#include "stdlib.h"

int main(){
    // malloc() is used in place of new
    // free() is used in place of delete

    float sum;
    int *arr;
    int size;
    int i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    arr = (int*)malloc(size*sizeof(int));
    // arr = (int*)calloc(size, sizeof(int));
    printf("Enter %d integers: ", size);
    for(i = 0; i < size; i++){
        scanf("%d", (arr+i));
        sum += *(arr+i);
    }
    printf("Average: %f\n", sum/size);

    free(arr);

    return 0;
}