#include <stdio.h>
 //Write a program to find reverse number of a given number

void main(){
    int num = 123;
    int temp = num;
    while(num != 0){
        temp = num%10;
        num /= 10;
        printf("%d", temp);
    }

}