#include <stdio.h>

void swap(int arr[5], int max, int last){
    int temp = arr[max];
    arr[max] = arr[last];
    arr[last] = temp;
}



void main(){
    int array[5] = {5, 4, 3 ,2, 1};
    int len = sizeof(array)/sizeof(int);

    for(int i = 0; i < len - 1; i++){
        int max = 0;
        for(int j = 1; j < len - i; j++){
            if(array[j] > array[max]){
                max = j;        
            }
        }
        swap(array, max, len - i - 1);
    }

    for(int i = 0; i<len; i++){
        printf(" %d ", array[i]);
    }
}