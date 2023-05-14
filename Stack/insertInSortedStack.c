//Remove the middle element of a stack using recursion 

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
int arr[MAX_SIZE] = {1, 2, 4, 5};
int top = 3;

void push(int data) {
  if (top + 1 == MAX_SIZE) {
    printf("The stack is full");
  } else {
    top++;
    arr[top] = data;
  }
}

int pop() {
  if (top < 0) {
    printf("The stack is empty");
    return -1;
  } else {
    top--;
    return arr[top + 1];
  }
}

void removeMiddleElement(int count) {
  if (count / 2 == top) {
    int data = pop();
    return;
  } else {
    int data = pop();
    removeMiddleElement(count);
    push(data);
  }
}

void insertInSortedStack(int data){
  if(arr[top] < data){
    push(data);
    return;
  }else{
    int value = pop();
    insertInSortedStack(data);
    push(value);
    
  }
}

void viewData() {
  for (int i = 0; i <= top; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {

  insertInSortedStack(3);
  viewData();
  return 0;
}
