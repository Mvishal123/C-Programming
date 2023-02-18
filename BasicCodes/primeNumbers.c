#include<stdio.h>

int prime(int num){
    int temp = 2;
    while( temp*temp < num){
        if(num%temp == 0){
            return 1;
        }
        temp++;
    }
    return -1;
}




void main(){
    int num = 23;
    int ans = prime(num);
    if(ans == 1){
        printf("Not a prime number");
    }else{
        printf("It is a prime number");
    }
}