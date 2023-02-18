#include<stdio.h>
#include <stdlib.h>

void main(){
    int *ptr = calloc(5, sizeof(int));
    ptr[0] = 20;
    ptr[1] = 23;
    ptr[2] = 32;
    ptr[3] = 43;
    ptr[4] = 54;

    printf("%d", ptr[2]);
    }
