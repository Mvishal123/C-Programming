#include <stdio.h>

void swap(int arr[], int first, int second){
    int temp = arr[first];
    arr[first]  = arr[second];
    arr[second] = arr[temp];
}

int enqueue(int arr[], int top, int len, int data){
    if(top+1 ==  len){
        printf("%s", "The queue is full. Please Dequeue before enqueuing further");
        return top;
    }else{
    top++;
    arr[top] =  data;
    }
    return top;
}

int dequeue(int arr[], int top){
    if(top < 0){
        printf("%s", "the queue is empty");
    }else{
    for(int i = 0; i < top; i++){
        swap(arr, i, i+1);
        }
    }
    return top-1;
}


void viewData(int arr[], int top){
    for(int i = 0; i <= top; i++){
        printf("%d\n", arr[i]);
    }
}

void count(int top){
    printf("The number of elements in the array is %d", top+1);
}

void peek(int arr[], int top){
    if(top < 0){
        printf("The queue is empty");
    } else{
    printf("The peek element is %d\n", arr[0]);
    }
}





void main(){
    int array[5];
    int top = -1;
    int len = sizeof(array)/sizeof(int);
    top = enqueue(array, top, len, 1);
    top = enqueue(array, top, len, 2);
    top = enqueue(array, top, len, 3);
    top = enqueue(array, top, len, 4);
    top = enqueue(array, top, len, 5);


    peek(array, top);
     viewData(array, top);
}