#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

struct node *createNode(int data) {
  struct node *newNode = (struct node *)(malloc(sizeof(struct node)));
  newNode->right = newNode->left = NULL;
  newNode->data = data;

  return newNode;
}

struct node *insertBst(struct node *root, int data) {
  if (!root) {
    return createNode(data);
  }
  if (data < root->data) {
    root->left = insertBst(root->left, data);
  } else if (data > root->data) {
    root->right = insertBst(root->right, data);
  } else {
    printf("\nsame data cannot be added in BST\n");
  }
  return root;
}

void inordertraversal(struct node *root) {
  if (!root) {
    return;
  } else {
    inordertraversal(root->left);
    printf("%d ", root->data);
    inordertraversal(root->right);
  }
}

int main() {
  struct node *root = NULL;
  root = insertBst(root, 100);
  root = insertBst(root, 50);
  root = insertBst(root, 120);
  root = insertBst(root, 75);
  root = insertBst(root, 60);

  inordertraversal(root);
}