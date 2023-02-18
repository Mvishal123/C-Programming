# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void numberOfNodes(struct node *ptr){
    if(ptr == NULL){
        printf("%s", "The Linkedlist is empty");
    }else{
    int count = 0;
    while(ptr != NULL){
        count++;
        printf("%d ", ptr-> data);
        ptr = ptr -> next;
    }
    // printf("%d", count);
    }
}



void main(){
struct node *head;
int n = 3;
head = malloc(sizeof(struct node));
head -> data = 1;
head -> next = NULL;

struct node *tail = malloc(sizeof(struct node));
tail -> data = 2;
tail -> next = NULL;
head -> next = tail;

tail = malloc(sizeof(struct node));
tail -> data = 3;
tail -> next = NULL;
head->next->next = tail;

numberOfNodes(head);
}