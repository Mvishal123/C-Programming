#include <stdio.h>

void swap(int arr[5], int first, int second){
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}




void main(){
    int array[5] = {-1, -10, 0, 12, 7};
    int len = sizeof(array)/sizeof(int);

    for(int i = 0; i < len-1; i++){
        int swapped = 0;
        for(int j = 1; j < len - i; j++){
            if(array[j] < array[j-1]){
                swap(array, j, j-1);
                swapped = 1;
            }
        }
            if(swapped != 1){
                break;
            }
    }

    for(int i = 0; i<len; i++){
        printf(" %d ", array[i]);
    }
}

