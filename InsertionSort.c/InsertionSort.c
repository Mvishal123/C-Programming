#include <stdio.h>

void swap(int arr[5], int first, int second){
    int temp =  arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}


void main(){
    int array[5] = {-1, 5, 2, 0, 1};
    int len = sizeof(array)/sizeof(int);

    for(int i = 0; i < len - 1; i++){
        for(int j = i+1; j > 0; j--){
            if(array[j] < array[j-1]){
                swap(array, j-1, j);
            }
            else{
                break;
            }        
        }
    }

    for(int i = 0; i < len; i++){
        printf(" %d ", array[i]);
    }
}