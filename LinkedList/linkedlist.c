# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


void createLinkedList(int n){

}

void main(){
    struct node* head;
    head = malloc(sizeof(struct node));
    head -> data = 23;
    head -> next = NULL;
    
    struct node* tail = malloc(sizeof(struct node));
    tail -> data = 24;
    tail -> next = NULL;
    head -> next = tail;

    tail = malloc(sizeof(struct node));
    tail -> data = 25;
    tail -> next = NULL;
    head -> next -> next = tail;
    int numberOfNodes = 3;
    createLinkedList(numberOfNodes)

}