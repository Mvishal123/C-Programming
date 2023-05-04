#include <stdio.h>
#define MAX_SIZE 100
int arr[MAX_SIZE];
int end = -1;
int front = -1;

void swap(int first, int second) {
  int temp = arr[first];
  arr[first] = arr[second];
  arr[second] = temp;
}

void insertNode(int data) {
  if (end == -1 && front == -1) {
    front++;
    end++;
  } else {
    end++;
  }
  arr[end] = data;
  int ptr = end;
  while (ptr != 0) {
    int parent = ptr / 2;
    if (arr[parent] > arr[ptr]) {
      swap(ptr, parent);
      ptr = parent;
    } else {
      return;
    }
  }
}

void viewHeap() {
  int n = 0;
  while (n <= end) {
    printf("%d ", arr[n]);
    n++;
  }
}

int main(void) {
  // insertNode(70);
  // insertNode(35);
  // insertNode(40);
  // insertNode(45);
  // insertNode(50);
  // insertNode(39);
  // insertNode(16);
  // insertNode(10);
  // insertNode(9);
  // insertNode(75);

  for (int i = 0; i < 15; i++) {
    insertNode(i);
  }

  viewHeap();
}