# include<stdio.h>
#include<stdlib.h>


void main(){
    int *ptr = calloc(5, sizeof(int));
    ptr[0] = 12;
    ptr[1] = 13;
    ptr[2] = 115;
    ptr[3] = 113;
    ptr[4] = 121;

    printf("%d", ptr[4]);
}
