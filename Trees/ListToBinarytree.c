#include <stdio.h>
#include <stdlib.h>

// Node structure of a binary tree
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node with the given data
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to convert an array into a binary tree
struct Node* createBinaryTree(int arr[], int start, int end) {
    // Base case
    if (start > end)
        return NULL;

    // Get the middle element of the array and make it the root
    int mid = (start + end) / 2;
    struct Node* root = newNode(arr[mid]);

    // Recursively construct the left and right subtrees
    root->left = createBinaryTree(arr, start, mid - 1);
    root->right = createBinaryTree(arr, mid + 1, end);

    return root;
}

// Function to print the nodes of a binary tree in inorder traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Driver function
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Convert the array into a binary tree
    struct Node* root = createBinaryTree(arr, 0, 9);

    // Print the nodes of the binary tree in inorder traversal
    printf("Inorder traversal of the binary tree: ");
    inorderTraversal(root);

    return 0;
}