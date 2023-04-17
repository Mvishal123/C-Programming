#include <stdio.h>
#include <stdlib.h>

// Push function input type
int push1(int arr[], int top) {
  if (top == 4) {
    printf("The stack is full");
    return top;
  }
  while (top + 1 < 5) {
    int x;
    printf("Enter data to be pushed(-1 if no data to be pushed): \n");
    scanf("%d", &x);
    if (x == -1) {
      return top;
    }
    top++;
    arr[top] = x;
  }
  return top;
}

// Push function
int push(int arr[], int top, int data) {
  if (top == 4) {
    printf("The stack is full \n");
  } else {
    top++;
    arr[top] = data;
  }
  return top;
}

// Pop function
int pop(int arr[], int top) {
  if (top == -1) {
    printf("The stack is empty");
  } else {
    printf("The popped element is %d\n", arr[top]);
    top--;
  }
  return top;
}

void isFull(int top) {
  if (top == 4) {
    printf("True");
  } else {
    printf("False");
  }
}

void viewData(int arr[], int top) {
  if (top == -1) {
    return;
  } else {
    viewData(arr, top - 1);
    printf("%d ", arr[top]);
  }
}

void main() {
  int arr[5];
  int top = -1;
  top = push(arr, top, 1);
  top = push(arr, top, 2);
  top = push(arr, top, 3);
  top = push(arr, top, 4);
  top = push(arr, top, 5);

  isFull(top);

  viewData(arr, top);
}