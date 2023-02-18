#include<stdio.h>
#include <stdlib.h>

void main(){
    int *ptr = malloc(5*sizeof(int));
    ptr[0] = 20;
    ptr[1] = 23;
    ptr[2] = 32;
    ptr[3] = 43;
    ptr[4] = 54;

    printf("%d\n", ptr[2]);

    char *array = calloc(4, sizeof(char));
    array[0] = 'v';
    array[1] = 'i';
    array[2] = 's';
    array[3] = 'h';
    int i;
    for(i = 0; i < 4; i++){
    printf("%c\n", array[i]);
        }
}
