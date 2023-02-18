#include<stdio.h>

int function(int* ptr){
    printf("%p\n", ptr);
    return 0;
}



void main(){
int num = 10;
int* ptr = &num;
printf("%d\n", function(ptr));
printf("%d\n", ptr);
}