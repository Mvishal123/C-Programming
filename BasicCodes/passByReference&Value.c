#include<stdio.h>

void swap(int arr[5], int *ans){
    for(int i = 0; i < 5; i++){
        *(arr+i) = 50;
        printf("%d ", *(arr+i));
    }
    *ans = 0;
    printf("\n%d", *ans);
}

void printData(int arr[5]){
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    // int arr[5] = {1, 2, 3, 4, 5};  
    // int ans = 100;
    // printData(arr);
    // printf("\n");
    // swap(arr, &ans);

    // printf("\nans : %d", ans);

    int a = 100;
    int b = a; // pass by value
    int *bPtr = &a; //pass by reference
    

    printf("\na: %d", a);
    printf("\nb: %d", b);
    printf("\nbPtr: %d", *bPtr);


}



// primitives -> pass by value
// non-promitives -> pass by reference
// primitives -> pass by reference when address of the primitive is passed