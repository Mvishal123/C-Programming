#include <stdio.h>
#include <stdlib.h>


int push(int arr[], int top, int data){
    top++;
    arr[top] = data;

    return top;
}
                                                                        //Stack using array. Includes all function of stack -> push(), pop() and peak()
int pop(int arr[], int top){
    top--;
    return top;
}

void peak(int arr[], int top){
    printf("the peak element is %d\n", arr[top]);
}

void viewData(int arr[], int top){
    for(int i = 0; i <= top; i++){
        printf("%d ", arr[i]);
    }
}


void main(){
    int stack_arr[5];
    int top = -1;
    top = push(stack_arr, top, 1);
    top = push(stack_arr, top, 2);
    top = push(stack_arr, top, 3);
    top = push(stack_arr, top, 4);
    top = push(stack_arr, top, 5);

    top = pop(stack_arr, top);
    peak(stack_arr, top);


    viewData(stack_arr, top);
}