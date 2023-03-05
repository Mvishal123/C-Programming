#include <stdio.h>

void sort(int arr[], int low, int high){
    if(low >= high){
        return;
    }

    int start = low;
    int end = high;
    int mid = start + (end - start)/2;
    int pivot = arr[mid];

    while(start <= end){
        while(arr[start] < pivot){
            start++;
        }

        while(arr[end] >  pivot){
            end--;
        }

        if(start <= end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    sort(arr, low, end);
    sort(arr, start, high);
}

void viewData(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("%d\n", arr[i]);
    }    
}




void main(){
    int array[5] = {5, 4, 3, 2, 1};
    int len = sizeof(array)/sizeof(int);
    sort(array, 0, len-1);
    
    viewData(array, len);
}