#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create(struct node *head, int data) {
  struct node *newNode = (struct node *)(malloc(sizeof(struct node)));
  newNode->data = data;
  newNode->next = NULL;
  if (head == NULL) {
    head = newNode;
    return head;
  } else {
    struct node *temp = head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
  return head;
}

void viewData(struct node *head) {
  while (head) {
    printf("%d ", head->data);
    head = head->next;
  }
}

void recDisplay(struct node *head) {
  if (!head) {
    return;
  }
  printf("%d ", head->data);
  recDisplay(head->next);
}

void counter(struct node *head) {
  int counter = 0;
  while (head) {
    counter++;
    head = head->next;
  }
  printf("The count is %d\n", counter);
}

void add(struct node *head) {
  int sum = 0;
  while (head) {
    sum = sum + head->data;
    head = head->next;
  }
  printf("The sum is %d\n", sum);
}

void max(struct node *head) {
  int max = 0;
  while (head) {
    if (head->data > max) {
      max = head->data;
    }
    head = head->next;
  }
  printf("The greatest element is %d\n", max);
}

void search(struct node *head, int target) {
  int counter = 0;
  while (head) {
    counter++;
    if (head->data == target) {
      printf("the element is present in node number %d", counter);
      return;
    }
    head = head->next;
  }
  printf("The element is not found");
}

struct node *createFirst(struct node *head, int data) {
  struct node *newNode = (struct node *)(malloc(sizeof(struct node)));
  newNode->data = data;
  newNode->next = head;
  head = newNode;
  return head;
}

void insertNewNode(struct node *head, int pos, int data) {
  struct node *newNode = (struct node *)(malloc((sizeof(struct node))));
  newNode->data = data;
  while (pos - 1 > 1) {
    head = head->next;
    pos--;
  }
  newNode->next = head->next;
  head->next = newNode;
}

void main() {
  struct node *head = NULL;

  head = create(head, 1);
  head = create(head, 2);
  head = create(head, 3);
  head = create(head, 4);
  head = create(head, 5);
  head = create(head, 6);
  head = create(head, 7);
  insertNewNode(head, 3, 100);
  insertNewNode(head, 3, 200);
  insertNewNode(head, 3, 300);
  printf("The head element is %d\n", head->data);

  recDisplay(head);
}