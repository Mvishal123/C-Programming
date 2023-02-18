#include <stdio.h>

void swap(int arr[5], int first, int second){
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}



void main(){
    int array[5] = {4, 2, 5, 3, 1};
    int len = sizeof(array)/sizeof(int);

    for(int i = 0; i < len; i++){
        while(array[i] != i+1){
            swap(array, i, array[i] - 1);
        }
    }


    for(int i = 0; i < len; i++){
        printf(" %d ", array[i]);
    }
}