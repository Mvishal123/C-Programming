#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node* next;
};



void enqueue(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;

    struct node* ptr = head;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = temp;
}

struct node* dequeue(struct node* head){
    struct node* temp = head;
    head = head -> next;
    free(temp);
    return head;
}



void viewData(struct node* head){
    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
        }
    }

void peek(struct node* head){
    printf("The peek element is %d\n", head -> data);
}



void main(){
    struct node* head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> next = NULL;

    enqueue(head, 2);
    enqueue(head, 3);
    enqueue(head, 4);
    enqueue(head, 5);
    enqueue(head, 6);
    peek(head);


    viewData(head);
}