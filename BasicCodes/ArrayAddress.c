#include<stdio.h>

void main(){
    int arr[] = {60, 20, 45, 12, 14};
    int len = sizeof(arr)/sizeof(int);

    for(int i =0; i < len; i++){
        printf("%p\n", &arr[i]);
    }

}