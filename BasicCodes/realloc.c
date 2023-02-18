#include<stdio.h>
#include <stdlib.h>


// 
void main(){
    int *ptr = malloc(5*sizeof(int));
    ptr[0] = 20;
    ptr[1] = 23;
    ptr[2] = 32;
    ptr[3] = 43;
    ptr[4] = 54;

    printf("%d\n", ptr[2]);
    // used to increase the size of array
    ptr = realloc(ptr, 7*sizeof(int));
    ptr[5] = 10;
    ptr[6] = 12;

    printf("%d\n", ptr[5]);

// free is used to free the memory of array
    free(ptr);
    printf("%d", ptr[5]);
    }
