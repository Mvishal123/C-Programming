#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};



struct node* push(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = head;
    head = temp;
    return head;
}

void viewData(struct node *head){
    struct node *ptr = head;
     while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
     }
}

struct node* pop(struct node *head){
    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}


void main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> next = NULL;
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    head = push(head, 5);

    head = pop(head);
    head = pop(head);

    // printf("%d\n", head -> data);
    viewData(head);
}
