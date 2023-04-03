// Binary tree linked list implementation

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

struct node *create() {
  struct node *temp = (struct node *)(malloc(sizeof(struct node)));
  int x;
  printf(" Enter data(-1 for no node): ");
  scanf("%d", &x);
  if (x == -1) {
    return 0;
  } else {
    temp->data = x;
  }
  printf("Enter left child of %d, ", x);
  temp->left = create();
  printf("Enter right child of %d, ", x);
  temp->right = create();

  return temp;
}

void main() { struct node *root = create(); }