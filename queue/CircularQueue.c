#include <stdio.h>
#define size 5

// global varibles
int arr[size];
int front = -1, rear = -1;

// Queue operations

// To check queue is full or not
int isFull() {
  if (front == (rear + 1) % size || rear == size - 1) {
    return 1;
  }
  return 0;
}

// to check is queue is empty or not
int isEmpty(void) {
  if (rear == -1) {
    return 1;
  }
  return 0;
}

// to add elements to the queue
void enqueue(int data) {
  if (isFull()) {
    printf("The queue is full");
  } else {
    if (front == -1 && rear == -1) {
      front++;
      rear++;
    } else {
      rear = (rear + 1) % size;
    }
    arr[rear] = data;
  }
}

// to remove elements from the queue
void dequeue() {
  if (isEmpty()) {
    printf("The queue is empty");
  } else {
    if (front == rear) {
      printf("\n The dequeued element -> %d", arr[rear]);
      front = -1;
      rear = -1;
    } else {
      printf("\n The dequeued element -> %d", arr[front]);
      front = (front + 1) % size;
    }
  }
}

// to view data
void viewData() {
  if (isEmpty()) {
    printf("\n The queue is empty");
  } else {
    for (int i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", arr[i]);
    }
    printf("%d", arr[rear]);
  }
}

void main() {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);

  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();

  enqueue(10);

  printf("\n front: %d", front);
  printf("\n rear: %d\n", rear);
  viewData();
}