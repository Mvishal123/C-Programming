
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
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

// Preorder traversal
void preOrder(struct node *root) {
  if (root == NULL) {
    return;
  }
  printf("%d ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

// Inorder traversal
void inorder(struct node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

// Postorder traversal
void postorder(struct node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

int main() {
  struct node *root = create();
  printf("%s\n", "Preorder traversal");
  preOrder(root);
  printf("%s\n", " ");
  printf("%s\n", "Inorder traversal");
  inorder(root);
  printf("%s\n", " ");
  printf("%s\n", "Postorder traversal");
  postorder(root);

  return 0;
}